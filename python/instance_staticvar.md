# All about Instance variable in Python
## Creating Instance Variable

```python
class Rectangle:
    '''Rectangle class is for demonstrating instance variable'''
    #1. creating instance variable in constructor using self variable
    def __init__(self):
        self.length = 0.0 #creating instance variable length 
        self.width = 0.0 #creating instance variable width

    #2. creating instance variable in instance method using self variable
    def extraVar(self):
        self.color = 'red'

if __name__ == '__main__':
    obj = Rectangle()
    print(obj.__dict__)
    obj.extraVar()
    print(obj.__dict__)
    #3. creating instance variable outside class using object name
    obj.c = 10
    print(obj.__dict__)
```
## Accessing Instance Variable

```python
class Rectangle:
    '''Rectangle class is for demonstrating instance variable'''
    def __init__(self):
        self.length = 0.0 #creating instance variable length 
        self.width = 0.0 #creating instance variable width

    def extraVar(self):
        self.color = 'red'
        
    #1. Accessing instance varaible inside class using self variable
    def printInstanceVars(self):
        '''Accessing instance varaible in instance method using self variable'''
        print("length: ", self.length)
        print("width: ", self.width)
        print("color: ", self.color)
        print("c: ", self.c)

if __name__ == '__main__':
    obj = Rectangle()
    print(obj.__dict__)
    obj.extraVar()
    print(obj.__dict__)
    obj.c = 10
    print(obj.__dict__)
    #accessing instance variable using class name given AttributError
    #print(Rectangle.length)
    #print(Rectangle.width)
    obj.printInstanceVars()

    #2. Accessing instance variable outside using object name
    print("length: ", obj.length)
    print("width: ", obj.width)
    print("color: ", obj.color)
    print("c: ", obj.c)
```
## Deleting/Removing Instance Variable 

```python
class Rectangle:
    '''Rectangle class is for demonstrating instance variable'''
    def __init__(self):
        self.length = 0.0 #creating instance variable length 
        self.width = 0.0 #creating instance variable width

    def extraVar(self):
        self.color = 'red'
    
    def printInstanceVars(self):
        '''Accessing instance varaible in instance method using self variable'''
        print("length: ", self.length)
        print("width: ", self.width)
        print("color: ", self.color)
        print("c: ", self.c)

	#1. Deleting instance variable from inside class using del and self variable
    def deleteVar(self):
        '''deleting instance variable inside class using del and self varible.'''
        del self.color

if __name__ == '__main__':
    obj = Rectangle()
    print(obj.__dict__)
    obj.extraVar()
    print(obj.__dict__)
    obj.c = 10
    print(obj.__dict__)

    #2. Deleting instance variable from outside using del and object name
    del obj.c
    #After Deleting instance variable c, you can not access 
    print(obj.c)
    
    print(obj.__dict__)
    obj.deleteVar()
    print(obj.__dict__)
    
    obj1.c = 20
    #Deleting instance variable from an object does not affect instance variable of another object
    print(obj1.c)
```

# All about Static variable in Python
## Creating Static Variable
1. If the value of a variable is not varied from object to object, such type of variables we have to declare with in the class directly but outside of methods. 
2. Such types of variables are called Static variables.
3. For total class only one copy of static variable will be created and shared by all objects of that class.
4. We can access static variables either by class name or by object reference. But recommended to use class name.

```python
class Rectangle:
    '''This is Rectangle class to demonstrate about static variables'''
    #1. creating static variable inside class but outside any method
    length = 0.0
    width = 0.0

    #2. creating static variable inside class inside constructor using class name
    def __init__(self):
        Rectangle.color = 'red'

    #3. creating static variable inside class inside insance method uising class name
    def createStaticVar(self):
        Rectangle.c = 10    

    #4.inside class method inside int the class using either by class name or cls
    @classmethod
    def createStaticVarClassmethod(cls):
        Rectangle.d = 100
        cls.e = 200

    #5. inside static method in the class using class name
    @staticmethod
    def createStaticVarStaticmethod():
        Rectangle.f = 500

if __name__ == '__main__':
    print(Rectangle.__dict__)

    '''In the case of instance variables for every object a seperate copy will be
  created,but in the case of static variables for total class only one copy will be created and
 shared by every object of that class.'''
    rect1 = Rectangle()
    rect1 = Rectangle()
    print(Rectangle.__dict__)
    rect1.createStaticVar()
    print(Rectangle.__dict__)
    rect1.createStaticVarClassmethod()
    print(Rectangle.__dict__)
    rect1.createStaticVarStaticmethod()
    print(Rectangle.__dict__)
    
```
## Accessing Static Variable 
1. Inside constructor: by using either self or classname
1. Inside instance method: by using either self or classname
1. Inside class method: by using either cls variable or classname
1. Inside static method: by using classname
1. From outside of class: by using either object reference or classname

```python
class Rectangle:
    '''This is Rectangle class to demonstrate about static variables'''
    length = 0.0
    width = 0.0

    #1. Accessing Static Variable in constructor using either self variable or class name
    def __init__(self):
        print("Inside Constructor Length: ", Rectangle.length)
        print("Inside Constructor Width: ", self.width)
        
        Rectangle.length = 20.0
        Rectangle.width = 30.0
        
        print("Inside Constructor Length: ", Rectangle.length)
        print("Inside Constructor Width: ", self.width)
        
        

    #2. Accessing static variable inside class inside insance method uising class name or self
    def printStaticVar(self):
        print("Inside Static Instance method Length: ", self.length) 
        print("Inside Static Instance method Width: ", Rectangle.length) 
        
    #3. Accessing or Modifying static variable inside instance method using class name only
    #Note: Modifying static variable using self variable will create new instance variable with the same name
    def changeStaticVar(self, l, w):
        Rectangle.length = l
        Rectangle.width = w
    	  

    #4. Accessing static variable inside class method inside the class using either by class name or cls
    @classmethod
    def pirntStaticClassmethod(cls):
        print("Inside classmethod Length: ", Rectangle.length)
        print("Inside classmethod Width: ", cls.width)

    #5. Accessing static variable inside static method in the class using class name
    @staticmethod
    def printStaticStaticmethod():
        print("Inside Staticmethod Length: ", Rectangle.length)
        print("Inside Staticmethod Width: ", Rectangle.width)

if __name__ == '__main__':
    print(Rectangle.__dict__)

    '''In the case of instance variables for every object a seperate copy will be
  created,but in the case of static variables for total class only one copy will be created and
 shared by every object of that class.'''
    rect1 = Rectangle()
    rect2 = Rectangle()
    print(Rectangle.__dict__)
    rect1.printStaticVar()
    rect1.changeStaticVar(120.0, 135.0)
    # changing value affect in all objects
    rect1.printStaticVar()
    rect2.printStaticVar()
    Rectangle.pirntStaticClassmethod()
    Rectangle.printStaticStaticmethod()

```
## Modifying Static Variable

```python
class Rectangle:
    '''This is Rectangle class to demonstrate about static variables'''
    length = 0.0
    width = 0.0

    #1. Modifying Static Variable in constructor using class name
    def __init__(self):
        
        Rectangle.length = 20.0
        Rectangle.width = 30.0
        
        

    #2. Modifying static variable inside class inside insance method uising class name
    def printStaticVar(self):
        Rectangle.length = 120.0
        Rectangle.width = 130.0
        
    #3. Modifying static variable inside instance method using class name
    #Note: Modifying static variable using self variable will create new instance variable with the same name
    def changeStaticVar(self, l, w):
        Rectangle.length = l
        Rectangle.width = w
    	  

    #4. Modifying static variable inside class method inside the class using either by class name or cls
    @classmethod
    def pirntStaticClassmethod(cls):
        Rectangle.length = 25.0
        cls.width = 35.0

    #5. Modifying static variable inside static method in the class using class name
    @staticmethod
    def printStaticStaticmethod():
        Rectangle.length = 12.0
        Rectangle.width = 13.0

if __name__ == '__main__':
    print(Rectangle.__dict__)

    '''In the case of instance variables for every object a seperate copy will be
  created,but in the case of static variables for total class only one copy will be created and
 shared by every object of that class.'''
    rect1 = Rectangle()
    rect2 = Rectangle()
    print(Rectangle.__dict__)
    rect1.printStaticVar()
    rect1.changeStaticVar(120.0, 135.0)
    # changing value affect in all objects
    rect1.printStaticVar()
    rect2.printStaticVar()
    Rectangle.pirntStaticClassmethod()
    Rectangle.printStaticStaticmethod()
    #6. Modifying static variable outside class using class name
    Rectangle.length = 22.0
    Rectangle.width = 33.0

```

## Deleting/Removing Static Variable 
* We can delete static variables from anywhere by using the following syntax
* `del classname.variablename`
* But inside classmethod we can also use cls variable
* `del cls.variablename`
*  
```python
class Rectangle:
    '''This is Rectangle class to demonstrate about static variables'''
    length = 0.0
    width = 0.0
    a = 10.0
    b = 20.0
    c = 30.0
    d = 40.0

    #1. Deleting Static Variable in constructor using class name
    def __init__(self):
        
        del Rectangle.length
        

    #2. Deleting static variable inside class inside insance method uising class name
    def deletWidth(self):
        del Rectangle.width
    	  
    #3. Deleting static variable inside class method inside the class using either by class name or cls
    @classmethod
    def deleteStaticVarClassmethod(cls):
        del Rectangle.b
        del cls.c

    #4. Deleting static variable inside static method in the class using class name
    @staticmethod
    def deleteStaticVarStaticmethod():
        del Rectangle.d

if __name__ == '__main__':
    print(Rectangle.__dict__)
    rect1 = Rectangle() # calling construcgtor deletes length
    print(Rectangle.__dict__)
    rect1.deleteWidth() # calling instance method deletes width
    print(Rectangle.__dict__)
    Rectangle.deleteStaticVarClassmethod() # calling classmethod deletes b and c
    print(Rectangle.__dict__)
    Rectangle.deleteStaticVarStaticmethod() # calling staticmethod deletes d
    print(Rectangle.__dict__)
    # Deleting static variable from outside the class using class name
    del Rectangle.a 
    print(Rectangle.__dict__)

```