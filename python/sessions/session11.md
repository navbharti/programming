# Session Eleven : Class, object, methods

```python
class Rectangle:
    """This is docstring of Rectangle class"""
    length = 0
    breadth = 0
    def message():
        print("hello from Rectangle class")

    def area():
        a = Rectangle.length * Rectangle.breadth
        print("Area: ", a)

    def perimeter():
        peri = 2 * (Rectangle.length + Rectangle.breadth)
        print("Perimeter: ", peri)
        
        
#Rectangle.area()
print("Length: ", Rectangle.length)
print("Breadth: ", Rectangle.breadth)
Rectangle.message()
Rectangle.area()
Rectangle.perimeter()

#changing length value
Rectangle.length = 15
Rectangle.breadth = 12
print("Length: ", Rectangle.length)
print("Breadth: ", Rectangle.breadth)
Rectangle.message()
Rectangle.area()
Rectangle.perimeter()

```


```python
class Rectangle:
    """This is docstring of Rectangle class"""

    def __init__(self):
        self.length = 0
        self.breadth = 0

    def area(self):
        return self.length * self.breadth

#create object of Rectangle class
r1 = Rectangle()
print("ID of r1: ", id(r1))
a = r1.area()
print("Area: ", a)
#changing member variable value
r1.length = 5
r1.breadth = 7
a = r1.area()
print("Area: ", a)

r2 = Rectangle()
print("ID of r2: ", id(r2))
a = r2.area()
print("Area: ", a)
r2.length = 15
r2.breadth = 12
a = r2.area()
print("Area: ", a)

+-----------+
| Rectangle |
|-----------|
| breadth   |
| length    |
| x         |
|-----------|
| __init__  |
| area      |
+-----------+


```

```python
class Rectangle:
    """This is docstring of Rectangle class"""
    x = 10
    def __init__(self):
        self.length = 0
        self.breadth = 0
        print("Constructor of Rect")

    def area(self):
        return self.length * self.breadth

#Rectangle.area()
print(Rectangle.x)
r1 = Rectangle()
r2 = Rectangle()
print(r1.x)
print(r2.x)
Rectangle.x = 30

print(Rectangle.x)
print(r1.x)
print(r2.x)

```

```python
class Rectangle:
    def __init__(self):
        self.length = 1
        self.breadth = 1
        print("Rectangle constructor")
        print("inside constructor, Length: ", self.length)

    @staticmethod
    def m1():
        Rectangle.abc = 10
        
    def createX(self):
        self.x = 10
        
r1 = Rectangle()
r2 = Rectangle()
print("Length: ",r1.length)
print("Breadth: ",r1.breadth)
#print(help(r1))
r1.createX()
print(r1.x)
r1.y = 30
print(r1.y)

r2.createX()
print(r2.x)
r2.z = 100
print(r2.z)

#print(r1.__dir__)

#print(dir(r1))
print(r1.__dict__)
r2.m1()
print(Rectangle.__dict__)

```

```python
class Rectangle:
    x = 10

    def __init__(self):
        Rectangle.y = 20
        print("Constructor executed!!!")
        print("inside constructor slef.x: ", self.x)
        print("inside constructor Rectangle.x: ", Rectangle.x)

    def method1(self):
        Rectangle.z = 30
        print("Instance method executed!!!")
        print("method1, self.y: ", self.y)
        print("method1, Rectangle.x: ", Rectangle.x)

    @staticmethod
    def staticMethod():
        Rectangle.a = 100
        print("static method executed!!!")
        print("Instance method executed!!!")
        print("staticMethod, Rectangle.x: ", Rectangle.x)
        print("staticMethod, Rectangle.z: ", Rectangle.z)


    @classmethod
    def classMethod(cls):
        Rectangle.b = 200
        cls.c = 300
        print("classmethod executed!!!")
        print("classmethod, Rectangle.x: ", Rectangle.x)
        print("classmethod, Rectangle.z: ", Rectangle.z)
        print("staticMethod, cls.x: ", cls.x)
        print("staticMethod, cls.z: ", cls.z)


        

r1 = Rectangle()
r1.method1()
Rectangle.staticMethod()
r1.classMethod()

print("outside class, Rectangle.x: ", Rectangle.x)
print("outside class, r1.x: ", r1.x)

```

# Codechef Practice Problem



