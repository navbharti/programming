# Python Print() Function
`print()` function is most underestimated function

**Syntax:**

```python
print(object, sep=seperator, end=endswith, file=file, flush=True/False)
```
Defualt Settings of print arguments:

```python
print(value, ..., sep=' ', end='\n', file=sys.stdout, flush=False)
```
Simple message printting on console

```python 
print("Hello, World!")
```

`object`: this is what we want to print, and can be more than one values
`sep`: Whatever you give value in this paramenter will become seperator in between each value of object (ie. , -, # etc)
`end`: Whatever you give value in this parameter will be ending in each value of objects.
`file`: If you give file name here, the objects will be printed in the given file.
`flush`: print() puts it's value to the Output Buffere and then prints on console. If Buffer is full then you may get unwanted output or delayed output. To assure proper output you have flush out buffer by making `flush=True`



the print function Prints the values to a stream, or to sys.stdout by default. The sys.stdout or system standard output means the print function will print the output on the screen, and it can even be changed to stdin or stderr.

## print statement vs print() function

In python 2 we have print statement whereas in python 3 we have print(). Let's check the type/class of the print() function

```python
#python 2
print "Welcome to KL University" #this is a statement
```

```python
#python 3
print("Welcome to KL University") #this is a built-in function
```

```console
>>>type(print)

<class 'builtin_function_or_method'>
```
Semicolon is used when you want to execute multiple statement in single line.

```python
print("Hello, World!");print("Hello, World!")
```
```console
Hello, World!
Hello, World!
```
If you want extra line or to add a new line or a vertical space between two outputsthen you have to use print() function

```python
print("Hello, World!")
print()
print("Hello, World!")
```
```console
Hello, World!

Hello, World!
```

# Python String format()
It is the process of inserting a custom string or variable in predefined text. 

```python
custom_string = "String formatting"
print(f"{custom_string} is a powerful technique")
```

```console
String formatting is a powerful technique

```
## Three different ways to format a string:
1. Positional formatting
1. Formatted string literals
1. Template method

In **positional** formatting placeholders is defined by a pair of curly ```{```and ```}``` braces in the text. Then call the string dot ```.``` format() method. The desired values are passed as argument in format() method which get placed to its associated placeholder. 

```python
print("Artificial Intelligence provides {} the ability to learn {}".format("systems", "automatically"))
```
Output:

```console
Artificial Intelligence provides systems the ability to learn automatically
```

You can create string with placeholder and arguments and can pass these string in format() method.

```python
my_string = "{} rely on {} datasets"
method = "Supervised algorithms"
condition = "labeled"

print(my_string.format(method, condition))
```

Output:

```console
Supervised algorithms rely on labeled datasets

```

### Reordering Values
You add index numbers into the placeholders to reorder values placed from passed parameters. This affects the order in which the method replaces the placeholders.

The method replaces them with the values in the given order.

```python
print("{2} has a friend called {0} and a sister called {1}". format("Betty", "Linda", "Daisy"))

```

Output:

```console
Daisy has a friend called Betty and a sister called Linda

```

### Name Placeholders
We can also introduce keyword arguments that are called by their keyword name. You can insert keywords in the placeholders. Then, can call these keywords in the format method. You then have to assign which variable will be passed for each of them, resulting in the following output.

```python
tool="Unsupervised algorithms"
goal="patterns"
print("{title} try to find {aim} in the dataset".format(title=tool, aim=goal))
```

Output:

```console
Unsupervised algorithms try to find patterns in the dataset

```

You can also create a dictionary to insert their values in a string. Inside the placeholders, we can specify the value associated with the key tool of the variable data using bracket notation. Data is the dictionary specified in the method, and tool is the key present in that dictionary.



```python
#This is a dictionary defined:
my_methods = {"tool": "Unsupervised algorithms", "goal": "patterns"}

print('{data[tool]} try to find {data[goal]} in the dataset'.format(data=my_methods))
```

Output:

```console
Unsupervised algorithms try to find patterns in the dataset

```

### Format Specifier
You can also specify the format specifies inside curly braces like in C/C++. This defines how individual values are presented. Here, we’ll use the syntax index colon specifier. One of the most common format specifiers is float represented by f. In the code, we specify that the value passed with the index 0 will be a float.

```python
print("Only {0:f}% of the {1} produced worldwide is {2}!". format(0.5155675, "data", "analyzed"))

```

Output:

```console
Only 0.515567% of the data produced worldwide is analyzed!

```

```python
print("Only {0:.2f}% of the {1} produced worldwide is {2}!".format(0.5155675, "data", "analyzed"))
```

Output:

```console
Only 0.52% of the data produced worldwide is analyzed!

```

### Output text alignment specifying a width

```python
text = input("Enter text ")

print("\n")
# left aligned
print('{:<25}'.format(text)) # Right aligned print('{:>25}'.format(text))
# centered
print('{:^25}'.format(text))
```
Output:

```console
Enter text This is a sample text

This is a sample text    
    This is a sample text
  This is a sample text 
```
### Specifying a sign while displaying output numbers

```python
positive_number = float(input("Enter Positive Number "))
negative_number = float(input("Enter Negative Number "))

print("\n")
# sign '+' is for both positive and negative number
print('{:+f}; {:+f}'.format(positive_number, negative_number))

# sign '-' is only for negative number
print('{:f}; {:-f}'.format(positive_number, negative_number))
```
**Output:**

```console
Enter Positive Number 25.25
Enter Negative Number -15.50

+25.250000; -15.500000
25.250000; -15.500000
```
### Display output Number in various type format

```python
number = int(input("Enter number "))

print("\n")
# 'd' is for integer number formatting
print("The number is:{:d}".format(number))

# 'o' is for octal number formatting, binary and hexadecimal format
print('Output number in octal format : {0:o}'.format(number))

# 'b' is for binary number formatting
print('Output number in binary format: {0:b}'.format(number))

# 'x' is for hexadecimal format
print('Output number in hexadecimal format: {0:x}'.format(number))

# 'X' is for hexadecimal format
print('Output number in HEXADECIMAL: {0:X}'.format(number))

```
Output:

```cosole
Enter number 356

The number is:356
Output number in octal format : 544
Output number in binary format: 101100100
Output number in hexadecimal format: 164
Output number in HEXADECIMAL: 164
```

### Display numbers in floating-point format

```python
number = float(input("Enter float Number "))

print("\n")
# 'f' is for float number arguments
print("Output Number in The float type :{:f}".format(number))

# padding for float numbers
print('padding for output float number{:5.2f}'.format(number))

# 'e' is for Exponent notation
print('Output Exponent notation{:e}'.format(number))

# 'E' is for Exponent notation in UPPER CASE
print('Output Exponent notation{:E}'.format(number))
```
**Output:**

```console
Enter float Number 234.567

Output Number in The float type :234.567000
padding for output float number234.57
Output Exponent notation2.345670e+02
Output Exponent notation2.345670E+02
```

### Output String justification
Let’s see how to use str.rjust(),   str.ljust() and str.center() to justify text output on screen and console.

```python
text = input("Enter String ")

print("\n")
print("Left justification", text.ljust(60, "*"))
print("Right justification", text.rjust(60, "*"))
print("Center justification", text.center(60, "*"))
```
**Output:**

```console
Enter String Jessa

Left justification Jessa*******************************************************
Right justification *******************************************************Jessa
Center justification ***************************Jessa****************************
```

# Input in Python
In this section we will learn:

1. How to take input from a user and system In Python.
1. Accept an integer, float, character, and string input from a user.
1. Convert the user input to a different data type.

Python 3 has a built-in function input() to accept user input. The input() function reads a line entered on a console by an input device such as a keyboard and convert it into a string and returns it. Input can be taking form various sources in python from keybord, as command line argument, from file, from GUI etc. 

* ```input([prompt])```
* ```raw_input([prompt])```

Write a program to read Employee details as Name, Salary, and Company Name of Employee in three different lines, store these values in name, salary and company variables and print its output.

```python
name = input("Enter Employee Name ")
salary = input("Enter salary ")
company = input("Enter Company name ")

print("\n")
print("Printing Employee Details")
print("Name", "Salary", "Company")
print(name, salary, company)
```
**Output**:

```console
Enter Employee Name Jon
Enter salary 12000
Enter Company name Google

Printing Employee Details
Name Salary Company
Jon 12000 Google
```
Whatever you enter as input, the input() function converts it into a string. If you enter an integer value, still it will convert it into a string. If you want to number input from a user, you need to perform type conversion on the input value.

Write a python program to print data type of entered data.

```python
number = input("Enter number ")
name = input("Enter name ")

print("\n")
print("Printing type of a input value")
print("type of number", type(number))
print("type of name", type(name))

```
**Output:**

```console
Enter number 26
Enter name Jessa

Printing type of a input value
type of number <class 'str'>
type of name <class 'str'>
```

Write a python program to accept two Integers input from User and print it sum.

```python
# program to calculate addition of two input numbers
first_input = input("Enter first number ") #read first input
first_number = int(first_input) #type-caste to int data type

# first_number = int(input("Enter first number ")) #input and type-casting in single line

second_input = input("Enter second number ") #read second input
second_number = int(second_input) #type-caste to int data type

#second_number = int(input("Enter second number ")) #read and type-casting in sigle line

print("\n")
print("First Number:", first_number)
print("Second Number:", second_number)
sum1 = first_number + second_number
print("Addition of two number is: ", sum1)
```

`Note:` In the program above you have to explicitly add statement for do type-casting of an integer type to an input function to convert an input value to the integer type.

**Output:**

```console
Enter first number 20
Enter second number 40

First Number: 20
Second Number: 40
Addition of two number is:  60
```

Write a python program to read a float number and print its value and type.

```python
float_input = input("Enter float number ")
float_number = float(float_input)
print("\n")
print("input float number is: ", float_number)
print("type is:", type(float_number))

```

**Output:**

```console
Enter float number 29.5

input float number is:  29.5
type is: <class 'float'>
```

**Practice**: Accept one integer and one float number from the user and calculate the addition of both the numbers.

## Get multiple input values from a user in one line
It is possible to get multiple values from the user in one line. i.e., In Python, we can accept two or three values from the user in one input() call.

```python
name, age, phone = input("Enter your name, Age, Percentage separated by space ").split()
print("\n")
print("User Details: ", name, age, phone)
```
Output:

```console
Enter your name, Age, Percentage separated by space Jessa 26 75.50

User Details:  Jessa 26 75.50
```

`Note:` In this case three inputs must be given in a single line only, otherwise python will give error.

## Python Input() vs raw_input()
input() function works differently between Python 3 and Python 2. Both the input() and raw_input() function accept input from user.

`Note:` The difference between the input() and raw_input() functions relevant only when you are using python 2.

**In Python 2**

The main difference between those two functions is:

input() function automatically converts user input to appropriate type. i.e., If a user-entered string input() function converts it into a string, and if a user entered a number it converts to an integer.

raw_input() convert every user input to string.

raw_input() function of python 2 is renamed to input() in Python 3.x and original input() function is removed from Python 3.

Let’s see how to use python raw_input() in Python 2.

Python 2’s raw_input() function to accept input from a user
If you are using python 2, then we need to use raw_input() instead of input() function.

```python
string = raw_input("Enter a String ")
print "input string is: ", string
```

Output:

```console
Enter a String Python is a beautiful language
input string is: Python is a beautiful language
```