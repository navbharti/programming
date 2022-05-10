# Session Twenty One : 	Introduction To files: Create, Read Write

```python 
class Rectangle:
    def __init__(self, l, b):
        self.l = l
        self.b = b
    def getLength(self):
        return self.l
    def getBreadth(self):
        return self.b
    def setLength(self, l):
        if l>0:
            self.l = l
            return True
        else:
            return False
    def setBreadth(self, b):
        if b>0:
            self.b = b
            return True
        else:
            return False
    def area(self):
        return self.getLength() * self.getBreadth()
    def perimeter(self):
        return 2*(self.getLength() + self.getBreadth())
    def __str__(self):
        s = "{} {} {} {}\n".format(self.getLength(), self.getBreadth(), self.area(), self.perimeter())
        return s
try:
    f = open("rectangle.txt", "w")
except FileNotFoundError as e:
    f = None
    print(e)
for _ in range(10):
    l = int(input())
    b = int(input())
    rect = Rectangle(l, b)
    # print(rect)
    f.write(str(rect))
f.close()

```

### Input:

```
12
4

23
7

34
5

23
4

6
5

6
7

2
3

7
8

8
6

9
45

```

### Expected output file: rectangle.txt

```console
12 4 48 32
23 7 161 60
34 5 170 78
23 4 92 54
6 5 30 22
6 7 42 26
2 3 6 10
7 8 56 30
8 6 48 28
9 45 405 108
```

# Abstract Class and Abstract methods
```python
from abc import *
class Shape(ABC):
    def __init__(self):
        self.side = None
        print("Shape Constructor")

    @abstractmethod
    def area(self):
        pass
    @abstractmethod
    def perimeter(self):
        pass
    def display(self):
        print("Shape instanced method")

class Square(Shape):
    def __init__(self, side):
        super().__init__()
        self.side = side
        print("Square Constructor")

    def area(self):
        return self.side ** 2
    def perimeter(self):
        return 4 * self.side
class Circle(Shape):
    def __init__(self, radius):
        super().__init__()
        self.side = radius
        print("Circle Constructor")
    def area(self):
        import math
        return math.pi * self.side ** 2

    def perimeter(self):
        import math
        return 2 * math.pi * self.side
    
if __name__=="__main__":
    #shp = Shape()
    sqr = Square(12)
    print(sqr.area())
    print(sqr.perimeter())
    sqr.display()
    circle = Circle(7.8)
    print(circle.area())
    print(circle.perimeter())
    circle.display()
    

```