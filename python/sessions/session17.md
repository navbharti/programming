# Session Seventeen

# Inheritance in Python
## GeometricShape Class
```python
#GeometricShape
class GeometricShape:
    def __init__(self):
        self.dim=1
        print("GeometricShape Constructor")
         
    def area(self):
        print("Area of GeometricShape")

    def perimeter(self):
        print("Perimeter of GeometricShape")

    def getDim(self):
        return self.dim

    def setDim(self, dim):
        self.dim = dim
```

## Square Child-Class of GeometricShape Class

```python
#Square child class
class Square(GeometricShape):
    def __init__(self):
        super().__init__()
        print("Square Constructor")

    def area(self):
        return self.dim * self.dim

    def perimeter(self):
        return 4*self.getDim()

    def getSide(self):
        return self.getDim()

    def setSide(self, side):
        self.setDim(side)

    def __str__(self):
        s = "GeometricShape: Square\nSide: {}\nArea: {}\nPerimeter: {}".format(self.getSide(), self.area(), self.perimeter())
        return s
```

## Circle Child-Class of GeometricShape Class

```python
#child class
import math
class Circle(GeometricShape):
    def __init__(self):
        super().__init__()
        print("Circle Constructor")

    def area(self):
        return math.pi * self.getRadius() ** 2

    def perimeter(self):
        return  2 * math.pi * self.getRadius()

    def getRadius(self):
        return self.getDim()

    def setRadius(self, radius):
        self.setDim(radius)

    def __str__(self):
        s = "GeometricShape: Circle\nRadiu: {}\nArea: {}\nPerimeter: {}".format(self.getRadius(), self.area(), self.perimeter())
        return s


```

## Rectangle Child-Class of Square Class

```python
#child class Rectangle
class Rectangle(Square):
    def __init__(self):
        super().__init__()
        self.b = 1

    def getLength(self):
        return self.getDim()

    def getBreadth(self):
        return self.b

    def setLength(self, l):
        self.setDim(l)

    def setBreadth(self, b):
        self.b = b

    def area(self):
        return self.getLength() * self.getBreadth()

    def perimeter(self):
        return 2 * (self.getLength() + self.getBreadth())

    def __str__(self):
        s = "GeometricShape: Rectangle\nLength: {}\nBreadth: {}\nArea: {}\nPerimeter: {}".format(self.getLength(), self.getBreadth(), self.area(), self.perimeter())
        return s
 ```

## Test-Code

 ```python
if __name__=="__main__":
    square = Square()
    square.setSide(12)
    a = square.area()
    p = square.perimeter()
    print("Square Area: ", a)
    print("Square Perimeter: ", p)
    print(square)
    print()
```

## Test-Code
```python
if __name__=="__main__":
    circle = Circle()
    circle.setRadius(12.5)
    a = circle.area()
    p = circle.perimeter()
    print("Circle Area: ", a)
    print("Circle Perimeter: ", p)
    print(circle)
    print()
    
```

## Test-Code
```python
if __name__=="__main__":

    r1 = Rectangle()
    r1.setLength(12)
    r1.setBreadth(4)
    a = r1.area()
    print("Rectangle Area: ", a)
    p = r1.perimeter()
    print("Rectangle Perimeter: ", p)
    print(a)
    print(p)
    print(r1)

```