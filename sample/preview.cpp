#include <string>

#define PI 3.14

// comment
/* comment block */

namespace namespace_type
{
  template <class template_arg>
  concept concept_type = std::same_as<template_arg, void>;

  template <concept_type template_arg>
  class class_name
  {
  public:
    class_name(const template_arg &parameter)
        : member_variable(parameter)
    {
      int number = 128;
      auto pi = PI;
      std::string string = "string literal\n";
    }

    [[nodiscard]] constexpr template_arg method() const noexcept
    {
      auto lambda = [](int x, int y)
      {
        return x + y;
      };

      int num = lambda(2, 4);
    }

    class_name operator+(class_name *pointer) const noexcept;

  private:
    template_arg member_variable
  };
}
