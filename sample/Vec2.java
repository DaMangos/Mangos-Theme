import java.lang.annotation.Documented;

public
class Vec2
{
  public
    double x;
  public
    double y;

  public
    Vec2()
    {
      this.x = 0;
      this.y = 0;
      System.out.println("created a 2-D vector");
    }

  public
    Vec2(double x, double y)
    {
      this.x = x;
      this.y = y;
      System.out.println("created a 2-D vector");
    }

  public
    @Deprecated Vec2 add(Vec2 other)
    {
      return new Vec2(x + other.x, y + other.y);
    }

  public
    double lengthSquared()
    {
      return x * x + y * y;
    }
}