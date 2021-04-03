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




**Data** can be represented in python class by using **variables**. There are **three** types of **variables** are allowed.

1. Instance Variables (Object Level Variables)
1. Static Variables (Class Level Variables)
1. Local variables (Method Level Variables)

Operations can be represented in python class using using methods. The following are various types of allowed methods

1. Instance Methods
1. Class Methods
1. Static Methods

**Example for Class:**

```python
class Student:
	'''Developed by durga for python demo'''
	def __init__(self):
		self.name='Rakesh'
		self.age=20
		self.marks=80
	
	def talk(self):
		print("Hello I am :",self.name)
		print("My Age is:",self.age)
		print("My Marks are:",self.marks)
```
## What is Object:
**Pysical existence** of a class is nothing but object. We can create any number of objects for a class.

**Syntax:** 

```python
referencevariable = classname()
```
**Example:**

```python
s = Student()
```
## What is Reference Variable?
The variable which can be used to **refer object** is called reference variable.  By using reference variable, we can **access** *properties* and *methods* of object.

**Program**: Write a Python program to create a Student class with name, rollno, and makrs as instance variables and one method to talk(). Create an object to it and call the method talk() to display student details.

```python
class Student:
	'''docstring'''
	def __init__(self,name,rollno,marks):
		'''docstring'''
		self.name=name
		self.rollno=rollno
		self.marks=marks
	def talk(self):
		print("Hello My Name is:",self.name)
		print("My Rollno is:",self.rollno)
		print("My Marks are:",self.marks)
		
s1=Student("Rakesh",101,80)
s1.talk()
```
## Self Variable:
* self is the **default variable** which is always pointing to **current object** (like this keyword in Java)
* By using `self` we can **access** *instance variables* and *instance methods* of object.

`Note:`

* self should be first parameter inside constructor 

	`def __init__(self):`

* self should be first parameter inside instance methods def talk(self):

## Constructor Concept:
* Constructor is a special method in python.
* The name of the constructor should be     init__(self)
* Constructor will be executed automatically at the time of object creation.
* The main purpose of constructor is to declare and initialize instance variables.
* Per object constructor will be exeucted only once.
* Constructor can take atleast one argument(atleast self)
* Constructor is optional and if we are not providing any constructor then python will provide default constructor.

**Example:**

```python
def __init__(self,name,rollno,marks):
	self.name=name
	self.rollno=rollno
	self.marks=marks
```

>>> Program to demonistrate Constructor will execute only once per Object:

```python
class Test:

    def __init__(self):
        print("Constructor exeuction...")

    def m1(self):
        print("Method execution...")

t1=Test()
t2=Test()
t3=Test()
t1.m1()
```
**Output**

```console
Constructor exeuction... 
Constructor exeuction... 
Constructor exeuction... 
Method execution...
```
**Program:**

```python
class Student:
	'''This is student class with required data'''
	def __init__(self,x,y,z): 
		self.name=x 
		self.rollno=y 
		self.marks=z

	def display(self):
		print("Student Name:{}\nRollno:{} \nMarks:{}".format(self.name,self.rollno,self.marks))

s1=Student("Bhavya",100, 85)
s1.display()
s2=Student("Sunny",102,100)
s2.display()
```
## Method vs Constructor
|Method	|Constructor|
|---------|-----------|
|1) Name of method can be any name	|1) Constructor name should be always `__init__ `
|2) Method will be executed if we call that method |2) Constructor will be executed automatically at the time of object creation.|
|3) Per object, method can be called any number of times.|3) Per object, Constructor will be executed only once|
|4) Inside method we can write business logic|4) Inside Constructor we have to declare and initialize instance variables|

## Types of Variables:

Inside Python class three types of variables are allowed.

1. Instance Variables (Object Level Variables)
1. Static Variables (Class Level Variables)
1. Local variables (Method Level Variables)

## 1) Instance Variables:
* If the value of a variable is varied from object to object, then such type of variables are called instance variables.
* For every object a separate copy of instance variables will be created.

### Where we can declare Instance Variables:
1. Inside Constructor by using self variable
1. Inside Instance Method by using self variable
1. Outside of the class by using object reference variable

#### 1)	Inside Constructor by using Self Variable:
* We can declare instance variables inside a constructor by using self keyword. Once we creates object, automatically these variables will be added to the object.

```python
class Employee:
	'''docstring'''
	def __init__(self):
		self.eno=100
		self.ename='Rakesh'
		self.esal=10000
		
e = Employee()
print(e.__dict__) 
```
**Output:** 

```console
{'eno': 100, 'ename': 'Durga', 'esal': 10000}
```
#### 2)	Inside Instance Method by using Self Variable:
* We can also declare instance variables inside instance method by using self variable. If any instance variable declared inside instance method, that instance variable will be added once we call taht method.

```python
class Test:

    def __init__(self):
        self.a=10
        self.b=20

    def m1(self):
        

t=Test()
t.m1()
print(t.__dict__)
```

**Output:** 

```console
{'a': 10, 'b': 20, 'c': 30}
```
### 3)	Outside of the Class by using Object Reference Variable:
* We can also add instance variables outside of a class to a particular object.

```python
class Test:
	'''docstring'''
	def __init__(self):
		self.a=10
		self.b=20
		def m1(self):
		self.c=30
t=Test()
t.m1()
t.d=40
print(t.__dict__)
```
**Output:** 

```console
{'a': 10, 'b': 20, 'c': 30, 'd': 40}
```

## How to Access Instance Variables:
* We can access instance variables with in the class by using self variable and outside of the class by using object reference.

```python
class Test:
	'''docstring'''
	
	def __init__(self):
		self.a=10
		self.b=20
		
	def display(self):
		print(self.a)
		print(self.b)
		
t=Test()
t.display()
print(t.a,t.b)
```
**Output:**

```console
10
20
10 20
```
### How to delete Instance Variable from the Object:
1. Within a class we can delete instance variable as follows  `del self.variableName`
1. From outside of class we can delete instance variables as follows  `del objectreference.variableName`

```python
class Test:
	'''docstring'''
	def __init__(self):
		self.a=10
		self.b=20
		self.c=30
		self.d=40
		
	def m1(self):
		del self.d 9)
		
t=Test()
print(t.__dict__) 
t.m1()
print(t.__dict__)
del t.c
print(t.__dict__)
```
**Output:**

```console
{'a': 10, 'b': 20, 'c': 30, 'd': 40}
{'a': 10, 'b': 20, 'c': 30}
{'a': 10, 'b': 20}
```
`Note:` The instance variables which are deleted from one object,will not be deleted from other objects.

```python
class Test:
	'''docstring'''
	
	def __init__(self):
		self.a=10
		self.b=20
		self.c=30
		self.d=40

t1=Test()
t2=Test()
del t1.a
print(t1.__dict__)
print(t2.__dict__)
```
**Output:**

```console
{'b': 20, 'c': 30, 'd': 40}
{'a': 10, 'b': 20, 'c': 30, 'd': 40}
```
* If we change the values of instance variables of one object then those changes won't be reflected to the remaining objects, because for every object we are separate copy of instance variables are available.

```python
class Test:
	'''docstring for class'''
	def __init__(self):
		'''docstring for constructor'''
		self.a=10
		self.b=20

t1=Test()
t1.a=888
t1.b=999
t2=Test()
print('t1:',t1.a,t1.b)
print('t2:',t2.a,t2.b)
```
**Output:**

```console
t1: 888 999
t2: 10 20
```

## Static Variables:
* If the value of a variable is not varied from object to object, such type of variables we have to declare with in the class directly but outside of methods. Such types of variables are called **Static variables**.
* For total class only one copy of static variable will be created and shared by all objects of that class.
* We can access static variables either by class name or by object reference. But recommended to use class name.

## Instance Variable vs Static Variable:

`Note: ` In the case of instance variables for every object a seperate copy will be created,but in the case of static variables for total class only one copy will be created and shared by every object of that class.

```python
class Test:
	x=10
	def __init__(self):
		self.y=20

t1=Test()
t2=Test()
print('t1:',t1.x,t1.y)
print('t2:',t2.x,t2.y)
Test.x=888
t1.y=999
print('t1:',t1.x,t1.y)
print('t2:',t2.x,t2.y)
```
**Output:**

```console
t1: 10 20
t2: 10 20
t1: 888 999
t2: 888 20
```
## Various Places to declare Static Variables:
1. In general we can declare within the class directly but from out side of any method
1. Inside constructor by using class name
1. Inside instance method by using class name
1. Inside classmethod by using either class name or cls variable
1. Inside static method by using class name

# Code discussed in class on 30.04.2021

```python
#When Constructor definition is not written inside class definition
# pyton Virtual Machine (PVM) provides default constructor
class Circle:
    def printMessage(self):
        print("Hi from Circle class")

obj = Circle()
obj.printMessage()

```

```python
#In case of creating instance variable through instance method,
# make sure to calle the method before using instance variable.
class Circle:
    def method1(self):
        self.radius =1
        
    def area(self):
        import math
        a = math.pi * self.radius * self.radius
        return a

obj = Circle()
obj.method1() #calling this self.radius is created for obj
print(obj.area())
```
```python
#3. In case of creating instance variable outside the class using object name

class Circle:
    def area(self):
        import math
        a = math.pi * self.radius * self.radius
        return a

obj = Circle()
obj.radius = 1 #this is how you create instance variable outside class using self keyword
print(obj.area())

```
```python
#This is how to access an instance variable inside class using self keyword

class Circle:
    def __init__(self):
        self.radius = 10

    def printRadius(self):
        print(self.radius)

obj = Circle()
obj.printRadius()
#print(Circle.radius)
Circle.printRadius(obj)

```
```python
#Removing instance variable of an object
class Circle:
    def __init__(self):
        self.radius = 10
        self.a = 12

    def printRadius(self):
        print(self.radius)

    def printA(self):
        print(self.a)

obj = Circle()
print(obj.a)
del obj.a
obj.printA()
#print(obj.a)
obj1 = Circle()
print(obj1.a)

```

```python
# Static  Variables
class Circle:
    radius = 1

    @staticmethod
    def method1():
        Circle.a = 10

obj1 = Circle()
print(Circle.radius)
obj1.method1()
print(Circle.a)
obj2 = Circle()
obj3 = Circle()

Circle.radius = 100
print(Circle.radius)
print(obj1.radius)
print(obj2.radius)
print(obj3.radius)
```





# Class and Object in Python

object oriented programming stresses on objects

An object is simply a collection of data (variables) and methods (functions) that act on those data. Similarly, a class is a blueprint for that object.

An object is also called an instance of a class and the process of creating this object is called instantiation.

class definitions begin with a class keyword.

Similar to docstring in method definition, the first string inside the class is called **docstring** and has a brief description about the class. Although not mandatory, this is highly recommended.

```python
class MyNewClass:
    '''This is a docstring. I have created a new class'''
    pass
```

A class has data members (also called data attributes or properties) and member methods (also called behaviours.

The attributes/property starting with double underscore ( `__` ) is called special type of attribute.

Unlike class in java as soon as we define a class in python, a new class object is created with the same name (class name). This class object allows us to access the different attributes as well as to instantiate new objects of that class.

```python
class Person:
    "This is a person class"
    age = 10

    def greet(self):
        print('Hello')


# Output: 10
print(Person.age)

# Output: <function Person.greet>
print(Person.greet)

# Output: "This is a person class"
print(Person.__doc__)
```
```console
10
<function Person.greet at 0x7fc78c6e8160>
This is a person class
```
