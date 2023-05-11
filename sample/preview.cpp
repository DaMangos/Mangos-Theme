#pragma once
#include <iostream>

#define MARCO

// 2-D vector class

namespace maths
{
class vec2
{
  public:
    vec2(double x = 0, double y = 0)
    : x(x),
      y(y)
    {
      std::cout << "created a 2-D vector" << std::endl;
    }

    vec2 operator+(const vec2 &other) const noexcept
    {
      return vec2(x + other.x, y + other.y);
    }

    [[nodiscard]] constexpr double length_squared() noexcept
    {
      return x * x + y * y;
    }

    double x, y;
};
}