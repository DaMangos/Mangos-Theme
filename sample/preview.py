class Vec2:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y
        print("created a 2-D vector\n")

    def __add__(self, other):
        return Vec2(self.x + other.x, self.y + other.y)

    def length_squared(self):
        return self.x ** 2 + self.y ** 2