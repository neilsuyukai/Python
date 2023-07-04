import math


class Shape:
    def area(self):
        pass


class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        return self.width * self.height


class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * self.radius ** 2


class Oval(Shape):
    def __init__(self, long_radius, short_radius):
        self.long_radius = long_radius
        self.short_radius = short_radius

    def area(self):
        return math.pi * self.long_radius * self.short_radius


class EquilateralTriangle(Shape):
    def __init__(self, side_length):
        self.side_length = side_length

    def area(self):
        return (math.sqrt(3) / 4) * self.side_length ** 2


# test all four shapes
rectangle = Rectangle(4, 5)
print(f"Rectangle area: {rectangle.area()}")

circle = Circle(3)
print(f"Circle area: {circle.area()}")

oval = Oval(4, 3)
print(f"Oval area: {oval.area()}")

equilateral_triangle = EquilateralTriangle(4)
print(f"Equilateral triangle area: {equilateral_triangle.area()}")
