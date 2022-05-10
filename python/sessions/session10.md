# Session Ten : Introduction to OOP principles command line arguments

# Exercise on OOPS Python


## 1. Create a Vehicle class without any variables and methods

```python
class Vehicle:
    pass
```


## 2. Create a Class with instance attributes
Write a Python program to create a `Car` class with `max_speed` and `mileage` instance attributes.

```python
class Vehicle:
    def __init__(self, max_speed, mileage):
        self.max_speed = max_speed
        self.mileage = mileage

modelX = Vehicle(240, 18)
print(modelX.max_speed, modelX.mileage)
```

### Define a property that must have the same value for every class instance (object). Define a class attribute `color` with a default value `white`. I.e., Every Vehicle should be white.

```python
class Vehicle:
    # Class attribute
    color = "White"

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

class Bus(Vehicle):
    pass

class Car(Vehicle):
    pass

School_bus = Bus("School Volvo", 180, 12)
print(School_bus.color, School_bus.name, "Speed:", School_bus.max_speed, "Mileage:", School_bus.mileage)

car = Car("Audi Q5", 240, 18)
print(car.color, car.name, "Speed:", car.max_speed, "Mileage:", car.mileage)
```

### Write a Python program to crate two empty classes, Student and Marks. Now create some instances and check whether they are instances of the said classes or not. Also, check whether the said classes are subclasses of the built-in object class or not.

```python

class Student:
    pass 
class Marks:
    pass 
student1 = Student()
marks1 = Marks()
print(isinstance(student1, Student))
print(isinstance(marks1, Student))
print(isinstance(marks1, Marks)) 
print(isinstance(student1, Marks))
print("\nCheck whether the said classes are subclasses of the built-in object class or not.")
print(issubclass(Student, object))
print(issubclass(Marks, object)) 
```

### Write a Python class named Student with two attributes student_name, marks. Modify the attribute values of the said class and print the original and modified values of the said attributes.

```python
class Student:
    student_name = 'Terrance Morales'
    marks = 93  
print(f"Student Name: {getattr(Student, 'student_name')}")
print(f"Marks: {getattr(Student, 'marks')}")
setattr(Student, 'student_name', 'Angel Brooks')
setattr(Student, 'marks', 95) 
print(f"Student Name: {getattr(Student, 'student_name')}")
print(f"Marks: {getattr(Student, 'marks')}")
```

### Write a Python class named Student with two attributes student_id, student_name. Add a new attribute student_class and display the entire attribute and their values of the said class. Now remove the student_name attribute and display the entire attribute with values.

```python

class Student:
    student_id = 'V10'
    student_name = 'Jacqueline Barnett'  
print("Original attributes and their values of the Student class:")
for attr, value in Student.__dict__.items():
    if not attr.startswith('_'):
        print(f'{attr} -> {value}')
print("\nAfter adding the student_class, attributes and their values with the said class:")
Student.student_class  = 'V'
for attr, value in Student.__dict__.items():
    if not attr.startswith('_'):
        print(f'{attr} -> {value}')
print("\nAfter removing the student_name, attributes and their values from the said class:")
del Student.student_name
#delattr(Student, 'student_name')
for attr, value in Student.__dict__.items():
    if not attr.startswith('_'):
        print(f'{attr} -> {value}')
```

### Write a Python class named Student with two attributes student_id, student_name. Add a new attribute student_class. Create a function to display the entire attribute and their values in Student class.

```python

class Student:
    student_id = 'V10'
    student_name = 'Jacqueline Barnett'
    def display():
        print(f'Student id: {Student.student_id}\nStudent Name: {Student.student_name}')
print("Original attributes and their values of the Student class:")
Student.display()
```

### Write a Python class named Student with two instances student1, student2 and assign given values to the said instances attributes. Print all the attributes of student1, student2 instances with their values in the given format.

```python
class Student:
    school = 'Forward Thinking'
    address = '2626/Z Overlook Drive, COLUMBUS' 
student1 = Student()
student2 = Student() 
student1.student_id = "V12"
student1.student_name = "Ernesto Mendez"
student2.student_id = "V12"
student2.marks_language = 85
student2.marks_science = 93
student2.marks_math = 95 
students = [student1, student2]
for student in students:
    print('\n')
    for attr in student.__dict__:
        print(f'{attr} -> {getattr(student, attr)}')

```

### Write a Python class to convert an integer to a roman numeral.

```python

class py_solution:
    def int_to_Roman(self, num):
        val = [
            1000, 900, 500, 400,
            100, 90, 50, 40,
            10, 9, 5, 4,
            1
            ]
        syb = [
            "M", "CM", "D", "CD",
            "C", "XC", "L", "XL",
            "X", "IX", "V", "IV",
            "I"
            ]
        roman_num = ''
        i = 0
        while  num > 0:
            for _ in range(num // val[i]):
                roman_num += syb[i]
                num -= val[i]
            i += 1
        return roman_num


print(py_solution().int_to_Roman(1))
print(py_solution().int_to_Roman(4000))

```

### Write a Python class to convert a roman numeral to an integer.

```python
class py_solution:
    def roman_to_int(self, s):
        rom_val = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        int_val = 0
        for i in range(len(s)):
            if i > 0 and rom_val[s[i]] > rom_val[s[i - 1]]:
                int_val += rom_val[s[i]] - 2 * rom_val[s[i - 1]]
            else:
                int_val += rom_val[s[i]]
        return int_val

print(py_solution().roman_to_int('MMMCMLXXXVI'))
print(py_solution().roman_to_int('MMMM'))
print(py_solution().roman_to_int('C'))

```

### Write a Python class to find validity of a string of parentheses, '(', ')', '{', '}', '[' and ']. These brackets must be close in the correct order, for example "()" and "()[]{}" are valid but "[)", "({[)]" and "{{{" are invalid.

```python
class py_solution:
   def is_valid_parenthese(self, str1):
        stack, pchar = [], {"(": ")", "{": "}", "[": "]"}
        for parenthese in str1:
            if parenthese in pchar:
                stack.append(parenthese)
            elif len(stack) == 0 or pchar[stack.pop()] != parenthese:
                return False
        return len(stack) == 0

print(py_solution().is_valid_parenthese("(){}[]"))
print(py_solution().is_valid_parenthese("()[{)}"))
print(py_solution().is_valid_parenthese("()"))

```

### Write a Python program to get all possible unique subsets from a set of distinct integers.

```python

class py_solution:
    def sub_sets(self, sset):
        return self.subsetsRecur([], sorted(sset))
    
    def subsetsRecur(self, current, sset):
        if sset:
            return self.subsetsRecur(current, sset[1:]) + self.subsetsRecur(current + [sset[0]], sset[1:])
        return [current]

print(py_solution().sub_sets([4,5,6]))

```

### Write a Python class to implement pow(x, n).

```python
class py_solution:
   def pow(self, x, n):
        if x==0 or x==1 or n==1:
            return x 

        if x==-1:
            if n%2 ==0:
                return 1
            else:
                return -1
        if n==0:
            return 1
        if n<0:
            return 1/self.pow(x,-n)
        val = self.pow(x,n//2)
        if n%2 ==0:
            return val*val
        return val*val*x

print(py_solution().pow(2, -3));
print(py_solution().pow(3, 5));
print(py_solution().pow(100, 0));

```







# Inheritance

## 3. Create a child class Bus that will inherit all of the variables and methods of the Vehicle class.\

```python
class Vehicle:

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage
```

```python
class Vehicle:

    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 180, 12)
print("Vehicle Name:", School_bus.name, "Speed:", School_bus.max_speed, "Mileage:", School_bus.mileage)
```

### Create a Bus class that inherits from the Vehicle class. Give the capacity argument of Bus.seating_capacity() a default value of 50.

```python
class Vehicle:
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

    def seating_capacity(self, capacity):
        return f"The seating capacity of a {self.name} is {capacity} passengers"
```

### First, use method overriding. Next, use default method argument in the seating_capacity() method definition of a bus class

```python 
class Vehicle:
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

    def seating_capacity(self, capacity):
        return f"The seating capacity of a {self.name} is {capacity} passengers"

class Bus(Vehicle):
    # assign default value to capacity
    def seating_capacity(self, capacity=50):
        return super().seating_capacity(capacity=50)

School_bus = Bus("School Volvo", 180, 12)
print(School_bus.seating_capacity())

```

### Create a Bus child class that inherits from the Vehicle class. The default fare charge of any vehicle is seating capacity * 100. If Vehicle is Bus instance, we need to add an extra 10% on full fare as a maintenance charge. So total fare for bus instance will become the final amount = total fare + 10% of the total fare.

```python 
class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity

    def fare(self):
        return self.capacity * 100

class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 12, 50)
print("Total Bus fare is:", School_bus.fare())
```


###Write a program to determine which class a given Bus object belongs to.

```python
class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity

class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 12, 50)

# Python's built-in type()
print(type(School_bus))
```

### Determine if School_bus is also an instance of the Vehicle class

```python 
class Vehicle:
    def __init__(self, name, mileage, capacity):
        self.name = name
        self.mileage = mileage
        self.capacity = capacity

class Bus(Vehicle):
    pass

School_bus = Bus("School Volvo", 12, 50)

# Python's built-in isinstance() function
print(isinstance(School_bus, Vehicle))
```


### Rectangle Class
* Write a Rectangle class in Python language, allowing you to build a rectangle with length and width attributes.
* Create a Perimeter() method to calculate the perimeter of the rectangle and a Area() method to calculate the area of ​​the rectangle.
* Create a method display() that display the length, width, perimeter and area of an object created using an instantiation on rectangle class.
* Create a Parallelepipede child class inheriting from the Rectangle class and with a height attribute and another Volume() method to calculate the volume of the Parallelepiped.

```python

class Rectangle:
    # define constructor with attributes: length and width 
    def __init__(self, length , width):
        self.length = length
        self.width = width
        
    # Create Perimeter method
    def Perimeter(self):
        return 2*(self.length + self.width)
    
    # Create area method
    def Area(self):
        return self.length*self.width   
    
    # create display method
    def display(self):
        print("The length of rectangle is: ", self.length)
        print("The width of rectangle is: ", self.width)
        print("The perimeter of rectangle is: ", self.Perimeter())
        print("The area of rectangle is: ", self.Area())
class Parallelepipede(Rectangle):
    def __init__(self, length, width , height):
        Rectangle.__init__(self, length, width)
        self.height = height
        
    # define Volume method
    def volume(self):
        return self.length*self.width*self.height
        
myRectangle = Rectangle(7 , 5)
myRectangle.display()
print("----------------------------------")
myParallelepipede = Parallelepipede(7 , 5 , 2)
print("the volume of myParallelepipede is: " , myParallelepipede.volume())
```

### Person and Student Class
* Create a Python class Person with attributes: name and age of type string.
* Create a display() method that displays the name and age of an object created via the Person class.
* Create a child class Student  which inherits from the Person class and which also has a section attribute.
* Create a method displayStudent() that displays the name, age and section of an object created via the Student class.
* Create a student object via an instantiation on the Student class and then test the displayStudent method.

```python
class Person:
    # define constructor with name and age as parameters
    def __init__(self, name, age):
        self.name = name
        self.age = age
    # create display method fro Person class
    def display(self):
        print("Person name : ", self.name)
        print("Person age = ", self.age)
    
# create child class Student of Person class
class Student(Person):
    # define constructor of Student class with section additional parameters 
    def __init__(self, name , age , section):
        Person.__init__(self,name, age)
        self.section = section
    
    # Create display method for Student class
    def displayStudent(self):
        print("Student name : ", self.name)
        print("Student age = ", self.age)
        print("Student section = ", self.section)
    
# Testing Person class
P = Person("Tomas Wild", 37)
P.display()
print("-------------------------------")
S = Student("Albert", 23 , "Mathematics")
S.displayStudent()
```

### Bank Account Class

* Create a Python class called BankAccount which represents a bank account, having as attributes: accountNumber (numeric type), name (name of the account owner as string type), balance.
* Create a constructor with parameters: accountNumber, name, balance.
* Create a Deposit() method which manages the deposit actions.
* Create a Withdrawal() method  which manages withdrawals actions.
* Create an bankFees() method to apply the bank fees with a percentage of 5% of the balance account.
* Create a display() method to display account details.
* Give the complete code for the  BankAccount class.

```python
class BankAccount:
    # create the constuctor with parameters: accountNumber, name and balance 
    def __init__(self,accountNumber, name, balance):
        self.accountNumber = accountNumber
        self.name = name
        self.balance = balance
        
    # create Deposit() method
    def Deposit(self , d ):
        self.balance = self.balance + d
    
    # create Withdrawal method
    def Withdrawal(self , w):
        if(self.balance < w):
            print("impossible operation! Insufficient balance !")
        else:
            self.balance = self.balance - w
    # create bankFees() method
    def bankFees(self):
        self.balance = (95/100)*self.balance
        
    # create display() method
    def display(self):
        print("Account Number : " , self.accountNumber)
        print("Account Name : " , self.name)
        print("Account Balance : " , self.balance , " $")
        
# Testing the code :
newAccount = BankAccount(2178514584, "Albert" , 2700)
# Creating Withdrawal Test
newAccount.Withdrawal(300)
# Create deposit test
newAccount.Deposit(200)
# Display account informations
newAccount.display()
```

### Define a Circle class allowing to create a circleC (O, r) with center O(a, b) and radius r using the constructor:
```
    def __init__(self,a,b,r):         
        self.a = a         
        self.b = b         
        self.r = r
```
* Define a Area() method of the class which calculates the area of ​​the circle.
* Define a Perimeter() method of the class which allows you to calculate the perimeter of the circle.
* Define a testBelongs() method of the class which allows to test whether a point A(x, y) belongs to the circle C(O, r) or not.

```python
from math import pi
class Circle:
    def __init__(self, a, b, r):
        self.a = a
        self.b = b
        self.r = r

    def perimeter (self):
        return  2 * pi * self.r


    def area (self):
        return  pi * self.r**2
    

    # form of the cercle equation 
    def formEquation (self, x, y):
        return (x-self.a)**2 + (y-self.b)**2 - self.r**2
    
    # method to test if given point blong to the circle or not 
    def test_belong (self, x, y):
        if (self.formEquation (x, y) == 0):
            print ("the point: (", x, y, ") belongs to the circle C")
        else:
            print ("the point: (", x, y, ") does not belong to the circle C")


# Creating of an instance object
C = Circle (1,2,1)

print ("the perimeter of the circle C is:", C.perimeter() )
print ("the area of circle C is:", C.area())
# we test if the point(1,1) belong to the circle or not
C.test_belong(1,1) 
# The output is:
#the perimeter of the circle C is: 6.283185307179586
#the area of circle C is: 3.141592653589793
#the point: ( 1 1 ) belongs to the circle C
```

### Computation Class

* 1 - Create a Coputation class with a default constructor (without parameters) allowing to perform various calculations on integers numbers.
* 2 - Create a method called Factorial() which allows to calculate the factorial of an integer. Test the method by instantiating the class.
* 3 - Create a method called Sum() allowing to calculate the sum of the first n integers 1 + 2 + 3 + .. + n. Test this method.
* 4 - Create a method called testPrim() in  the Calculation class to test the primality of a given integer. Test this method.
* 4 - Create  a method called testPrims() allowing to test if two numbers are prime between them.
* 5 - Create a tableMult() method which creates and displays the multiplication table of a given integer. Then create an allTablesMult() method to display all the integer multiplication tables 1, 2, 3, ..., 9.
* 6 - Create a static listDiv() method that gets all the divisors of a given integer on new list called  Ldiv. Create another listDivPrim() method that gets all the prime divisors of a given integer.

```python
class Computation:
    def __init__ (self):
        pass
# --- Factorial ------------
    def factorial(self, n):
        j = 1
        for i in range (1, n + 1):
            j = j * i
        return j
    
# --- Sum of the first n numbers ----
    def sum (self, n):
        j = 1
        for i in range (1, n + 1):
            j = j + i
        return j
    
# --- Primality test of a number ------------
    def testPrim (self, n):
        j = 0
        for i in range (1, n + 1):
            if (n% i == 0):
                j = j + 1
        if (j == 2):
            return True
        else:
            return False

# --- Primality test of two integers ------------
    def testprims (self, n, m):
        
        # initialize the number of commons divisors
        commonDiv = 0
        for i in range (1, n + 1):
            if (n% i == 0 and m% i == 0):
                commonDiv = commonDiv + 1
        if commonDiv == 1:
            print ("The numbers", n, "and", m, "are co-primes")
        else:
            print ("The numbers", n, "and", m, "are not co-primes")

#---Multiplication table-------------
    def tableMult (self, k):
        for i in range (1,10):
            print (i, "x", k, "=", i * k)

# --- All multiplication tables of the numbers 1, 2, .., 9
    def allTables (self):
        for k in range (1,10):
            print ("\nthe multiplication table of:", k, "is:")
            for i in range (1,10):
                print (i, "x", k, "=", i * k)

# ----- list of divisors of an integer
    def listDiv (self, n):
        # initialization of the list of divisors
        lDiv = []
        for i in range (1, n + 1):
            if (n% i == 0):
                lDiv.append (i)
        return lDiv

# ------ list of prime divisors of an integer ----------------
    def listDivPrim (self, n):
        # initialization of the list of divisors
        lDiv = []
        for i in range (1, n + 1):
            if (n% i == 0 and self.testPrim (i)):
                lDiv.append (i)
        return lDiv

# Instantiation example
Comput= Computation ()
Comput.testprims (13, 7)
print ("List of divisors of 18:", Comput.listDiv (18))
print ("List of prime divisors of 18:", Comput.listDivPrim (18))
Comput.allTables ()
```

### ClassBook

* 1. Define a Book class with the following attributes: Title, Author (Full name), Price.
* 2. Define a constructor used to initialize the attributes of the method with values entered by the user.
* 3. Set the View() method to display information for the current book.
* 4. Write a program to testing the Book class.

```python
# Question 1
class Book:
     # Question 2
     def __init__(self , Title , Author , Price):
          self.Title    =  Title
          self.Author   =  Author
          self.Price    =  Price
          
     # Question 3
     def view(self ):
          return ("Book Title: " , self.Title ,  "Book Author: " , self.Author, "Book Price: " , self.Price)
          
# Question 4
MyBook = Book("Python Crash Course" , "Eric Matthes" , "23 $")          
print( MyBook.view())
# The output: ('Book Title: ', 'Python Crash Course', 'Book Author: ', 'Eric Matthes', 'Book Price: ', '23 $')
```

### Geometry Class

* Write a Geometry class with default constructor having no parameters.
* Write a methode in Geometry class called distance() that allow to compute a distance between two points A = (a1, a2), B = (b1, b2) (with the convention: a point M is identified with its pair of coordinates M = ( x, y)).
* Write a methode in Geometry class called middle() allowing to determine the midle of bipoint (A,B).
* Write method called trianglePerimeter() allowing to compute the perimeter of triangle
* Write method called triangleIsoscel() which returns a True if the triangle is isoscel and False if not.

### Student Class

* Write a Python Program to create Student class with id, name, gender, and branch. 
* Use getter and setters. The ID must be 9-digit number, name must not have special characters and digits, gender must be either M/F and branch must be either ECE/CSE/ME/ECSE/CE/BT/EEE. 
* Also implement __str__(self) to format the details of Student.


Kavya has seen one brochure and observed some mobile numbers on it. Suddenly she focuses on extreme two digits and she want to find sum of first 2 digits and last 2 digits.

Problem-1: Draw and Develop a class with MobileNumberSum with one static attribute mobile which stores 10 digits number.
Create a statice method doSum() which return the sum of first two digits and last two digits of mobile number.
Call doSum() method without creating object.

Problem-2: Draw and develop a class Statistics which has an instance attribute as a list of numbers.
Write findLargest(self), findSmallest(self), and average(self) of all the elements in the list.

Problem-3: Draw and Develop a class JobOffer for the following:
Sai Raj got a job offer in Kashmir and he is estimating the climate there when packing his luggage. Based on the climate he needs to pack the specific clothing accordingly for the conditions given below. 
Class has a static attribute temperature in centigrade and a static display() method which prints a suitable message according to temperature state below:
• Temp < 0 then Freezing weather
• Temp 0-10 then Very Cold weather
• Temp 10-20 then Cold weather
• Temp 20-30 then Normal in Temp
• Temp 30-40 then Its Hot
• Temp >=40 then Its Very Hot
Help him to identify the climatic conditions. Now your task is to read the temperature and give him the climatic conditions without creating object.




