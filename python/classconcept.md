# Class and Object in Python
Every thing in python is an object. 
To create objects we required some **Model** or **Plan** or **Blueprint** or **Template**, these are also called **class**.
Class is a combination of **properties** (**attributes**) and **actions** (**behaviour**) of object.

In other word: A class is simply a logical entity that behaves as a prototype or a template to create objects, while an object is just a collection of variables and Python functions.

Properties can be represented by **Variables**
Actions can be represented by **Methods**.

Hence class contains both variables and methods.

![](https://intellipaat.com/mediaFiles/2019/03/python10.png)

How to define a Class?
We can define a class by using class keyword.

![](https://www.guru99.com/images/1/051818_1150_UMLClassDia1.png)

**Syntax:**

```python
class className:
	''' documenttation string '''
	variables:instance variables,static and local variables 
	methods: instance methods,static methods,class methods
```
Documentation string (**docstring**) represents **description** of the class. Within the class docstring is always **optional**. We can get docstring by using the following 2 different ways.

```python
print(classname.__doc__)
```
```python
help(classname)
```

![](https://1.bp.blogspot.com/_V648gqhagYA/TP9yquvD4_I/AAAAAAAAAeg/YPmCwj8qIqA/s1600/Class-diagram-for-student-mark-analysis-system.PNG)

**Example:**

```python
class Student:
	"""This is student class with required data"""
	print(Student.__doc__)
	help(Student)
```

# code discussed in class on (31.03.2021)

```python
class Circle:
    '''This is Circle class definition'''
    def __init__(self):
        self.radius = 5.0

    def area(self):
        a = 3.14 * self.radius * self.radius
        return a
    
if __name__=='__main__':
	c1 = Circle() # creates object with name c1
	print(Circle.__doc__)
	#print(c1.__doc__)
	#help(Circle)
	
	#help(c1)
	r = c1.radius
	result = c1.area()
	print(r)
	print(result)
```
```python
class Rectangle:
    '''This is Rectangle Class'''
    def __init__(self):
        self.length = 0
        self.width = 0
        print("Constructor is called")
        
    def area(self):
        return self.length * self.width

    def peri(self):
        return 2 * (self.length + self.width)

    # Setter methods
    def setLength(self, l):
        self.length = l

if __name__=="__main__":
    r1 = Rectangle()
    a = r1.area()
    p = r1.peri()
    print("Area: ", a)
    print("Perimeter: ", p)

    #setting length and width of r1
    r2 = Rectangle()
    r2.length = 10
    r2.width = 20

    a = r2.area()
    p = r2.peri()
    print("Area: ", a)
    print("Perimeter: ", p)

    r3 = Rectangle()
    r3.setLength(40)
    r3.width = 6
    a = r3.area()
    p = r3.peri()
    print("Area: ", a)
    print("Perimeter: ", p)
```
