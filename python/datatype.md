#  DATA TYPES
* Data Type represents the type of data present inside a variable.
* In Python we are not required to specify the type explicitly. Based on value provided, the type will be assigned automatically.Hence Python is dynamically Typed Language.

Python contains the following inbuilt data types

1. Int
1. Float
1. Complex
1. Bool
1. Str
1. Bytes
1. Bytearray
1. Range
1. List
1. Tuple
1. Set
1. Frozenset
1. Dict
 
`Note: ` Python contains several inbuilt functions

### 1)	`type()`
to check the type of variable

### 2)	`id()`
to get address of object

### 3)	`print()`
to print the value

In Python everything is an Object.

## 1)	int Data Type:

We can use int data type to represent whole numbers (integral values)
Eg: a = 10
type(a) #int

`Note:`
* In Python2 we have long data type to represent very large integral values.
* But in Python3 there is no long type explicitly and we can represent long values also by using int type only.

We can represent int values in the following ways

1. Decimal form
1. Binary form
1. Octal form
1. Hexa decimal form

### I)	Decimal Form (Base-10):

* It is the default number system in Python
* The allowed digits are: 0 to 9
* Eg: a =10

### II)	Binary Form (Base-2):

* The allowed digits are : 0 & 1
* Literal value should be prefixed with 0b or 0B

* Eg: a = 0B1111

```python
a = 0B123
a = b111
```
### III)	Octal Form (Base-8):

* The allowed digits are : 0 to 7
* Literal value should be prefixed with 0o or 0O.
* 
* Eg: a = 0o123

```python
a = 0o786
```
### IV)	Hexa Decimal Form (Base-16):

The allowed digits are: 0 to 9, a-f (both lower and upper cases are allowed)
Literal value should be prefixed with 0x or 0X

Eg: a = 0XFACE

```python
a = 0XBeef 
a = 0XBeer
```
`Note:` Being a programmer we can specify literal values in decimal, binary, octal and hexa decimal forms. But PVM will always provide values only in decimal form.

```python
a=10
b=0o10
c=0X10
d=0B10
print(a) #10
print(b) #8
print(c) #16
print(d) #2 
```
## Base Conversions

Python provide the following in-built functions for base conversions

### 1) `bin()`:
We can use bin() to convert from any base to binary

```python
>>> bin(15)
'0b1111'
>>> bin(0o11)
'0b1001'
>>> bin(0X10)
'0b10000'
```
### 2) `oct()`:
We can use `oct()` to convert from any base to octal

```python
>>> oct(10)
'0o12'
>>> oct(0B1111)
'0o17'
>>> oct(0X123)
'0o443'
```
### 3) `hex()`:
We can use hex() to convert from any base to hexa decimal

```python
>>> hex(100)
'0x64'
>>> hex(0B111111)
'0x3f'
>>> hex(0o12345)
'0x14e5'
```
### 2)	Float Data Type:

* We can use float data type to represent floating point values (decimal values)

* Eg: 

```python
f = 1.234
type(f)  #float
```
* We can also represent floating point values by using exponential form (Scientific Notation)

* Eg: 

```python
f = 1.2e3 #instead of 'e' we can use 'E' 
print(f)  #1200.0
```
* The main advantage of exponential form is we can represent big values in less memory.

`Note:`
We can represent int values in decimal, binary, octal and hexa decimal forms. But we can represent float values only by using decimal form.

```python
>>> f=0B11.01
File "<stdin>", line 1
f=0B11.01
^
SyntaxError: invalid syntax

>>> f=0o123.456
SyntaxError: invalid syntax

>>> f=0X123.456
SyntaxError: invalid syntax
```

## 3)	Complex Data Type:
![](https://www.onlinemathlearning.com/image-files/complex-number.png)
* A complex number is of the form

* ‘a’ and ‘b’ contain Intergers OR Floating Point Values.

Eg: 

```python
3 + 5j
10 + 5.5j
0.5 + 0.1j
```
* In the real part if we use int value then we can specify that either by decimal, octal, binary or hexa decimal form.
* But imaginary part should be specified only by using decimal form.

```python
>>> a=0B11+5j
>>> a
(3+5j)
>>> a=3+0B11j
SyntaxError: invalid syntax
```
Even we can perform operations on complex type values.

```python
>>> a=10+1.5j
>>> b=20+2.5j
>>> c=a+b
>>> print(c)
(30+4j)
>>> type(c)
<class 'complex'>
```
`Note:` Complex data type has some inbuilt attributes to retrieve the real part and imaginary part

```python
c = 10.5+3.6j

c.real #10.5
c.imag #3.6
```
We can use complex type generally in scientific Applications and electrical engineering Applications.

## 4)	bool Data Type:

We can use this data type to represent boolean values.
The only allowed values for this data type are:
True and False
Internally Python represents True as 1 and False as 0 

```python
b = True
type(b) # bool
```
Eg:

```python
a = 10
b = 20
c = a<b
print(c) #True
```
```python
True+True #2
True-False #1
```
## 5)	str Data Type:

`str` represents String data type.
A String is a sequence of characters enclosed within single quotes or double quotes.

```python
s1='durga'
s1="durga"
```
By using single quotes or double quotes we cannot represent multi line string literals.

```python
s1="durga soft"
```
For this requirement we should go for triple single quotes(''') or triple double quotes(""")

```python
s1='''durga soft'''

s1="""durga soft"""
```
We can also use triple quotes to use single quote or double quote in our String.
''' This is " character''' ' This i " Character '

We can embed one string in another string
'''This "Python class very helpful" for java students'''

### Slicing of Strings:

1. slice means a piece
1. [ ] operator is called slice operator, which can be used to retrieve parts of String.
1. In Python Strings follows zero based index.
1. The index can be either +ve or -ve.
1. +ve index means forward direction from Left to Right
1. -ve index means backward direction from Right to Left

![](https://media.geeksforgeeks.org/wp-content/uploads/20191220092949/slice.jpg)

```python
>>> s="durga"
>>> s[0]
'd'
>>> s[1]
'u'
>>> s[-1]
'a'
>>> s[40]
IndexError: string index out of range
```

```python
>>> s[1:40]
'urga'
>>> s[1:]
'urga'
>>> s[:4]
'durg' 7)  >>> s[:]
'durga' 9)  >>> 10)
>>> s*3
'durgadurgadurga' 13)
>>> len(s)
5
```

`Note:`

1)	In Python the following data types are considered as Fundamental Data types

1. int
1. float
1. complex
1. bool
1. str

2)	In Python, we can represent char values also by using str type and explicitly char type is not available.

```python
>>> c='a'
>>> type(c)
<class 'str'>
```
3)	long Data Type is available in Python2 but not in Python3. In Python3 long values also we can represent by using int type only.

4)	In Python we can present char Value also by using str Type and explicitly char Type is not available.

#  TYPE CASTING
We can convert one type value to another type. This conversion is called Typecasting or Type coersion.
* The following are various inbuilt functions for type casting.
 
1. int()
1. float()
1. complex()
1. bool()
1. str()
 
### int():
We can use this function to convert values from other types to int

`Note:`

* We can convert from any type to int except complex type.
* If we want to convert str type to int type, compulsary str should contain only integral value and should be specified in base-10.

### float():
We can use float() function to convert other type values to float type.

 

`Note:`

* We can convert any type value to float type except complex type.
* Whenever we are trying to convert str type to float type compulsary str should be either integral or floating point literal and should be specified only in base-10.

### complex():
We can use complex() function to convert other types to complex type.

**Form-1:**  `complex(x)`

We can use this function to convert x into complex number with real part x and imaginary part 0.

Eg:

```python
complex(10)    ==>10+0j
complex(10.5)  ===>10.5+0j
complex(True)  ==>1+0j
complex(False) ==>0j
complex("10")  ==>10+0j
complex("10.5")==>10.5+0j
complex("ten")
ValueError: complex() arg is a malformed string
```
**Form-2:** `complex(x,y)`

We can use this method to convert x and y into complex number such that x will be real part and y will be imaginary part.

Eg: 

```python
complex(10, -2) #10-2j 
complex(True, False) #1+0j
```
### bool():
We can use this function to convert other type values to bool type.

### str():
We can use this method to convert other type values to str type.

```python
>>> str(10)
'10'
>>> str(10.5)
'10.5'
>>> str(10+5j)
'(10+5j)'
>>> str(True)
'True'
```
## Fundamental Data Types vs Immutability:

1. All Fundamental Data types are immutable. i.e once we creates an object,we cannot perform any changes in that object. If we are trying to change then with those changes a new object will be created. This non-chageable behaviour is called immutability.

1. In Python if a new object is required, then PVM won’t create object immediately. First it will check is any object available with the required content or not. If available then existing object will be reused. If it is not available then only a new object will be created. The advantage of this approach is memory utilization and performance will be improved.

1. But the problem in this approach is, several references pointing to the same object, by using one reference if we are allowed to change the content in the existing object then the remaining references will be effected. To prevent this immutability concept is required. According to this once creates an object we are not allowed to change content. If we are trying to change with those changes a new object will be created.

```python
>>> a=10
>>> b=10
>>> a is b
True
>>> id(a)
1572353952
>>> id(b)
1572353952
>>>
```
```python
>>> a=10
>>> b=10
>>> id(a) 1572353952
>>> id(b) 1572353952
>>> a is b
True
```
```python
>>> a=10+5j
>>> b=10+5j
>>> a is b False
>>> id(a) 15980256
>>> id(b)
15979944
```
```python
>>> a=True
>>> b=True
>>> a is b True
>>> id(a) 1572172624
>>> id(b)
1572172624
```
```python
>>> a='durga'
>>> b='durga'
>>> a is b True
>>> id(a) 16378848
>>> id(b)
16378848
```
## 6) bytes Data Type:
bytes data type represens a group of byte numbers just like an array.

```python
x = [10,20,30,40]
b = bytes(x)
type(b) #bytes
print(b[0])	#10
print(b[-1]) #40
>>> for i in b : print(i)
10
20
30
40
```

`Conclusion 1`:
The only allowed values for byte data type are 0 to 256. By mistake if we are trying to provide any other values then we will get value error.

`Conclusion 2`:
Once we creates bytes data type value, we cannot change its values,otherwise we will get TypeError.

Eg:

```python
>>> x=[10,20,30,40]
>>> b=bytes(x)
>>> b[0]=100
TypeError: 'bytes' object does not support item assignment
```
## 7)	bytearray Data Type:
bytearray is exactly same as bytes data type except that its elements can be modified.

Eg 1:

```python
x=[10,20,30,40]
b = bytearray(x)
for i in b : print(i)
10
20
30
40
b[0]=100
for i in b: print(i)
100
20
30
40
```
Eg 2:

```python
>>> x =[10,256]
>>> b = bytearray(x)
ValueError: byte must be in range(0, 256)
```
## 8)	List Data Type:
If we want to represent a group of values as a single entity where insertion order required to preserve and duplicates are allowed then we should go for list data type.

1. Insertion Order is preserved
1. Heterogeneous Objects are allowed
1. Duplicates are allowed
1. Growable in nature
1. Values should be enclosed within square brackets.

Eg:

list is growable in nature. i.e based on our requirement we can increase or decrease the size.

```python
>>> list=[10,20,30]
>>> list.append("durga")
>>> list
[10, 20, 30, 'durga']
>>> list.remove(20)
>>> list
[10, 30, 'durga']
>>> list2=list*2
>>> list2
[10, 30, 'durga', 10, 30, 'durga']
```
`Note:` An ordered, mutable, heterogenous collection of eleemnts is nothing but list, where duplicates also allowed.

## 9)	Tuple Data Type:
* Tuple data type is exactly same as list data type except that it is immutable.i.e we cannot chage values.
* Tuple elements can be represented within parenthesis.

Eg:

```python
t=(10,20,30,40)
type(t)
<class 'tuple'>
t[0]=100
TypeError: 'tuple' object does not support item assignment
>>> t.append("durga")
AttributeError: 'tuple' object has no attribute 'append'
>>> t.remove(10)
AttributeError: 'tuple' object has no attribute 'remove'
```
`Note: ` tuple is the read only version of list

## 10)	Range Data Type:
* range Data Type represents a sequence of numbers.
* The elements present in range Data type are not modifiable. i.e range Data type is immutable.

**Form-1:** `range(10)`
generate numbers from 0 to 9

Eg:

```python
r = range(10)
for i in r : print(i) 0 to 9
```
**Form-2:** `range(10, 20)`
generate numbers from 10 to 19

Eg:

```python
r = range(10,20)
for i in r : print(i) 10 to 19
```
**Form-3:** `range(10, 20, 2)`  2 means increment value

Eg:

```python
r = range(10,20,2)
for i in r : print(i) 10,12,14,16,18
```
* We can access elements present in the range Data Type by using index.

Eg:

```python
r = range(10,20) 
r[0] #10
r[15] #IndexError: range object index out of range We cannot modify the values of range data type
```
Eg:

```python
r[0] = 100
TypeError: 'range' object does not support item assignment We can create a list of values with range data type
```
Eg:

```python
>>> l = list(range(10))
>>> l
[0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
```

## 11)	set Data Type:

* If we want to represent a group of values without duplicates where order is not important then we should go for set Data Type.

1. Insertion order is not preserved
1. Duplicates are not allowed
1. Heterogeneous objects are allowed
1. Index concept is not applicable
1. It is mutable collection
1. Growable in nature

Eg:

```python
s={100,0,10,200,10,'durga'}
s # {0, 100, 'durga', 200, 10}
s[0] #TypeError: 'set' object does not support indexing
```
* set is growable in nature, based on our requirement we can increase or decrease the size.

```python
>>> s.add(60)
>>> s
{0, 100, 'durga', 200, 10, 60}
>>> s.remove(100)
>>> s
{0, 'durga', 200, 10, 60}
```

## 12)	frozenset Data Type:

* It is exactly same as set except that it is immutable.
* Hence we cannot use add or remove functions.

```python
>>> s={10,20,30,40}
>>> fs=frozenset(s)
>>> type(fs)
<class 'frozenset'> 5)  >>> fs
frozenset({40, 10, 20, 30})
>>> for i in fs:print(i) 8)  ...
40
10
20
30

>>> fs.add(70)
AttributeError: 'frozenset' object has no attribute 'add'
>>> fs.remove(10)
	AttributeError: 'frozenset' object has no attribute 'remove'
```
## 13)	dict Data Type:

* If we want to represent a group of values as key-value pairs then we should go for dict data type.

* Eg: 

```python
d = {101:'durga',102:'ravi',103:'shiva'}
```
* Duplicate keys are not allowed but values can be duplicated. If we are trying to insert an entry with duplicate key then old value will be replaced with new value.

Eg:

```python
>>> d={101:'durga',102:'ravi',103:'shiva'}
>>> d[101]='sunny'
>>> d
{101: 'sunny', 102: 'ravi', 103: 'shiva'}
#We can create empty dictionary as follows
d={ }
#We can add key-value pairs as follows
d['a']='apple'
d['b']='banana'
print(d)
```
`Note: ` dict is mutable and the order won’t be preserved.

`Note:`

1. In general we can use bytes and bytearray data types to represent binary information like images, video files etc
1. In Python2 long data type is available. But in Python3 it is not available and we can represent long values also by using int type only.
1. In Python there is no char data type. Hence we can represent char values also by using str type.

## 14)	None Data Type:
* None means nothing or No value associated.
* If the value is not available, then to handle such type of cases None introduced.
* It is something like null value in Java.

Eg:

```python
def m1(): a=10

print(m1()) None
```
## Escape Characters:

In String literals we can use esacpe characters to associate a special meaning.

The following are various important escape characters in Python

```python 
1)	\n -> New Line
2)	\t -> Horizontal Tab
3)	\r -> Carriage Return
4)	\b -> Back Space
5)	\f -> Form Feed
6)	\v -> Vertical Tab
7)  \' -> Single Quote
8)  \" -> Double Quote
9)  \\ -> Back Slash Symbol
```
## Constants:

* Constants concept is not applicable in Python.
* But it is convention to use only uppercase characters if we don’t want to change value.

```python
MAX_VALUE = 10
```
* It is just convention but we can change the value.
