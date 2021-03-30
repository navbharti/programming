# String in Python

A string is a sequence of characters.
encoding and decoding of characters in computer
ASCII and Unicode

a string is a sequence of Unicode characters. Unicode was introduced to include every character in all languages and bring uniformity in encoding. 

Create a string literals using **single quote** or **double-quotes**

Use triple quotes for **multiline strings** and **docstrings**.

```python
# defining strings in Python
# all of the following are equivalent
my_string = 'Hello'
print(my_string)

my_string = "Hello"
print(my_string)

my_string = '''Hello'''
print(my_string)

# triple quotes string can extend multiple lines
my_string = """Hello, welcome to
           the world of Python"""
print(my_string)
```
## access characters in a string
using indexing
using slicing
using negative indexing

`Note: ` access a character out of index range will raise an IndexError

ndex must be an integer otherwise gives `TypeError`

```python
#Accessing string characters in Python
str = 'programiz'
print('str = ', str)

#first character
print('str[0] = ', str[0])

#last character
print('str[-1] = ', str[-1])

#slicing 2nd to 5th character
print('str[1:5] = ', str[1:5])

#slicing 6th to 2nd last character
print('str[5:-2] = ', str[5:-2])
```

```python
# index must be in range
>>> my_string[15]  
...
IndexError: string index out of range

# index must be an integer
>>> my_string[1.5] 
...
TypeError: string indices must be integers
```

![](https://cdn.programiz.com/sites/tutorial2program/files/element-slicling.jpg)

## change or delete a string

Strings are immutable meaning elements can not be changed once assigned, but we can reassign different string to the same variable name. This results in creating new string.

```python

>>> my_string = 'programiz'
>>> my_string[5] = 'a'
...
TypeError: 'str' object does not support item assignment
>>> my_string = 'Python'
>>> my_string
'Python'
```

cannot delete or remove characters but can delete the entirely string that is possible using the `del`.

```python
>>> del my_string[1]
...
TypeError: 'str' object doesn't support item deletion
>>> del my_string
>>> my_string
...
NameError: name 'my_string' is not defined
```
## String Operations

Concatenation of Two or More Strings (`+ ` and `* `)

```python
# Python String Operations
str1 = 'Hello'
str2 ='World!'

# using +
print('str1 + str2 = ', str1 + str2)

# using *
print('str1 * 3 =', str1 * 3)
```

Writing two string literals together also concatenates them 

```python

```
concatenate strings in different lines, we can use parentheses

```python
>>> # two string literals together
>>> 'Hello ''World!'
'Hello World!'

>>> # using parentheses
>>> s = ('Hello '
...      'World')
>>> s
'Hello World'
```
## Iterating Through a string

```python
# Iterating through a string
count = 0
for letter in 'Hello World':
    if(letter == 'l'):
        count += 1
print(count,'letters found')
```

## String Membership Test

```python
>>> 'a' in 'program'
True
>>> 'at' not in 'battle'
False
```
## Built-in functions to Work with Python

```python
str = 'cold'

# enumerate()
list_enumerate = list(enumerate(str))
print('list(enumerate(str) = ', list_enumerate)

#character count
print('len(str) = ', len(str))
```

### Python String Formatting
### Escape Sequence

```python
print("He said, "What's there?"")
```
In this case neither " '' ' or ' "" ' will work, but can use triple quotes or scape sequence characters.

```python
# using triple quotes
print('''He said, "What's there?"''')

# escaping single quotes
print('He said, "What\'s there?"')

# escaping double quotes
print("He said, \"What's there?\"")
```
|Escape Sequence	|Description|
|---------------|-----------|
|`\newline`	|Backslash and newline ignored|
|`\\`	|Backslash|
|\'	|Single quote|
|\"	|Double quote|
|\a	|ASCII Bell|
|\b|	ASCII Backspace|
|\f|	ASCII Formfeed|
|\n	|ASCII Linefeed|
|\r|	ASCII Carriage Return|
|\t|	ASCII Horizontal Tab|
|\v|	ASCII Vertical Tab|
|\ooo|	Character with octal value ooo|
|\xHH	|Character with hexadecimal value HH|

```python
>>> print("C:\\Python32\\Lib")
C:\Python32\Lib

>>> print("This is printed\nin two lines")
This is printed
in two lines

>>> print("This is \x48\x45\x58 representation")
This is HEX representation
```
Use raw string to ignore scape sequence characters

```python
>>> print("This is \x61 \ngood example")
This is a
good example
>>> print(r"This is \x61 \ngood example")
This is \x61 \ngood example
```
## The format() Method for Formatting Strings

```python
# Python string format() method

# default(implicit) order
default_order = "{}, {} and {}".format('John','Bill','Sean')
print('\n--- Default Order ---')
print(default_order)

# order using positional argument
positional_order = "{1}, {0} and {2}".format('John','Bill','Sean')
print('\n--- Positional Order ---')
print(positional_order)

# order using keyword argument
keyword_order = "{s}, {b} and {j}".format(j='John',b='Bill',s='Sean')
print('\n--- Keyword Order ---')
print(keyword_order)
```
left-justify <, right-justify > or center ^ 

format integers as binary, hexadecimal

float digits control

## `string.capitalize():` 
converts first character of a string to uppercase letter and lowercases all other characters

```python
string = "python is AWesome."

capitalized_string = string.capitalize()

print('Old String: ', string)
print('Capitalized String:', capitalized_string)
```
```python
string = "+ is an operator." #Non-Alpha char

new_string = string.capitalize()

print('Old String:', string)
print('New String:', new_string)
```
## `string.center(width[, fillchar]):`
* width - length of the string with padded characters
* fillchar (optional) - padding character

```python
string = "Python is awesome"

new_string = string.center(24)

print("Centered String: ", new_string)
```

```python
string = "Python is awesome"

new_string = string.center(24, '*')

print("Centered String: ", new_string)
```
## `string.count(substring, start=..., end=...):`
eturns the number of occurrences of a substring in the given string

* substring - string whose count is to be found.
* start (Optional) - starting index within the string where search starts.
* end (Optional) - ending index within the string where search ends.

```python
# define string
string = "Python is awesome, isn't it?"
substring = "is"

count = string.count(substring)

# print count
print("The count is:", count)
```
```python
# define string
string = "Python is awesome, isn't it?"
substring = "i"

# count after first 'i' and before the last 'i'
count = string.count(substring, 8, 25)

# print count
print("The count is:", count)
```
## `string.casefold():`

```python
string = "PYTHON IS AWESOME"

# print lowercase string
print("Lowercase string:", string.casefold())
```
```python
firstString = "der Fluß"
secondString = "der Fluss"

# ß is equivalent to ss
if firstString.casefold() == secondString.casefold():
    print('The strings are equal.')
else:
    print('The strings are not equal.')
```
## `str.endswith(suffix[, start[, end]]):`
* suffix - String or tuple of suffixes to be checked
* start (optional) - Beginning position where suffix is to be checked within the string.
* end (optional) - Ending position where suffix is to be checked within the string.

```python
text = "Python is easy to learn."

result = text.endswith('to learn')
# returns False
print(result)

result = text.endswith('to learn.')
# returns True
print(result)

result = text.endswith('Python is easy to learn.')
# returns True
print(result)
```

```python
text = "Python programming is easy to learn."

# start parameter: 7
# "programming is easy to learn." string is searched
result = text.endswith('learn.', 7)
print(result)

# Both start and end is provided
# start: 7, end: 26
# "programming is easy" string is searched

result = text.endswith('is', 7, 26)
# Returns False
print(result)

result = text.endswith('easy', 7, 26)
# returns True
print(result)
```
### endswith() With Tuple Suffix

```python
text = "programming is easy"
result = text.endswith(('programming', 'python'))

# prints False
print(result)

result = text.endswith(('python', 'easy', 'java'))

#prints True
print(result)

# With start and end parameter
# 'programming is' string is checked
result = text.endswith(('is', 'an'), 0, 14)

# prints True
print(result)
```
## `str.startswith(prefix[, start[, end]]):`
* prefix - String or tuple of strings to be checked
* start (optional) - Beginning position where prefix is to be checked within the string.
* end (optional) - Ending position where prefix is to be checked within the string.

```python
text = "Python is easy to learn."

result = text.startswith('is easy')
# returns False
print(result)

result = text.startswith('Python is ')
# returns True
print(result)

result = text.startswith('Python is easy to learn.')
# returns True
print(result)
```
```python
text = "Python programming is easy."

# start parameter: 7
# 'programming is easy.' string is searched
result = text.startswith('programming is', 7)
print(result)

# start: 7, end: 18
# 'programming' string is searched
result = text.startswith('programming is', 7, 18)
print(result)

result = text.startswith('program', 7, 18)
print(result)
```
### startswith() With Tuple Prefix

```python
text = "programming is easy"
result = text.startswith(('python', 'programming'))

# prints True
print(result)

result = text.startswith(('is', 'easy', 'java'))

# prints False
print(result)

# With start and end parameter
# 'is easy' string is checked
result = text.startswith(('programming', 'easy'), 12, 19)

# prints False
print(result)
```
## `string.expandtabs(tabsize):`

```python
str = 'xyz\t12345\tabc'

# no argument is passed
# default tabsize is 8
result = str.expandtabs()

print(result)
```
```python
str = "xyz\t12345\tabc"
print('Original String:', str)

# tabsize is set to 2
print('Tabsize 2:', str.expandtabs(2))

# tabsize is set to 3
print('Tabsize 3:', str.expandtabs(3))

# tabsize is set to 4
print('Tabsize 4:', str.expandtabs(4))

# tabsize is set to 5
print('Tabsize 5:', str.expandtabs(5))

# tabsize is set to 6
print('Tabsize 6:', str.expandtabs(6))
```
## `str.find(sub[, start[, end]] ):`

```python
quote = 'Let it be, let it be, let it be'

# first occurance of 'let it'(case sensitive)
result = quote.find('let it')
print("Substring 'let it':", result)

# find returns -1 if substring not found
result = quote.find('small')
print("Substring 'small ':", result)

# How to use find()
if (quote.find('be,') != -1):
    print("Contains substring 'be,'")
else:
    print("Doesn't contain substring")
```
```python
quote = 'Do small things with great love'

# Substring is searched in 'hings with great love'
print(quote.find('small things', 10))

# Substring is searched in ' small things with great love' 
print(quote.find('small things', 2))

# Substring is searched in 'hings with great lov'
print(quote.find('o small ', 10, -1))

# Substring is searched in 'll things with'
print(quote.find('things ', 6, 20))
```
## `str.index(sub[, start[, end]] ):`

```python
sentence = 'Python programming is fun.'

result = sentence.index('is fun')
print("Substring 'is fun':", result)

result = sentence.index('Java')
print("Substring 'Java':", result)
```
```python
sentence = 'Python programming is fun.'

# Substring is searched in 'gramming is fun.'
print(sentence.index('ing', 10))

# Substring is searched in 'gramming is '
print(sentence.index('g is', 10, -4))

# Substring is searched in 'programming'
print(sentence.index('fun', 7, 18))
```
## `string.isalnum():`

```python
name = "M234onica"
print(name.isalnum())

# contains whitespace
name = "M3onica Gell22er "
print(name.isalnum())

name = "Mo3nicaGell22er"
print(name.isalnum())

name = "133"
print(name.isalnum())
```
```python
name = "M0n1caG3ll3r"

if name.isalnum() == True:
   print("All characters of string (name) are alphanumeric.")
else:
    print("All characters are not alphanumeric.")
```
## `string.isalpha():`

```python
name = "Monica"
print(name.isalpha())

# contains whitespace
name = "Monica Geller"
print(name.isalpha())

# contains number
name = "Mo3nicaGell22er"
print(name.isalpha())
```
```python
name = "MonicaGeller"

if name.isalpha() == True:
   print("All characters are alphabets")
else:
    print("All characters are not alphabets.")
```

## `string.isnumeric():`
returns True if all characters in a string are numeric characters

```python
s = '1242323'
print(s.isnumeric())

#s = '²3455'
s = '\u00B23455'
print(s.isnumeric())

# s = '½'
s = '\u00BD'
print(s.isnumeric())

s = '1242323'
s='python12'
print(s.isnumeric())
```
```python
#s = '²3455'
s = '\u00B23455'

if s.isnumeric() == True:
  print('All characters are numeric.')
else:
  print('All characters are not numeric.')
```
## `string.isdecimal():`

```python
s = "28212"
print(s.isdecimal())

# contains alphabets
s = "32ladk3"
print(s.isdecimal())

# contains alphabets and spaces
s = "Mo3 nicaG el l22er"
print(s.isdecimal())
```
```python
s = '23455'
print(s.isdecimal())

#s = '²3455'
s = '\u00B23455'
print(s.isdecimal())

# s = '½'
s = '\u00BD'
print(s.isdecimal())
```
## `string.isdigit():`

```python
s = "28212"
print(s.isdigit())

# contains alphabets and spaces
s = "Mo3 nicaG el l22er"
print(s.isdigit())
```
```python
s = '23455'
print(s.isdigit())

#s = '²3455'
# subscript is a digit
s = '\u00B23455'
print(s.isdigit())

# s = '½'
# fraction is not a digit
s = '\u00BD'
print(s.isdigit())
```
## `string.isidentifier():`

```python
str = 'Python'
print(str.isidentifier())

str = 'Py thon'
print(str.isidentifier())

str = '22Python'
print(str.isidentifier())

str = ''
print(str.isidentifier())
```
```python
str = 'root33'
if str.isidentifier() == True:
  print(str, 'is a valid identifier.')
else:
  print(str, 'is not a valid identifier.')
  
str = '33root'
if str.isidentifier() == True:
  print(str, 'is a valid identifier.')
else:
  print(str, 'is not a valid identifier.')
  
str = 'root 33'
if str.isidentifier() == True:
  print(str, 'is a valid identifier.')
else:
  print(str, 'is not a valid identifier.')
```
## `string.islower():`

```python
s = 'this is good'
print(s.islower())

s = 'th!s is a1so g00d'
print(s.islower())

s = 'this is Not good'
print(s.islower())
```
```python
s = 'this is good'
if s.islower() == True:
  print('Does not contain uppercase letter.')
else:
  print('Contains uppercase letter.')
  
s = 'this is Good'
if s.islower() == True:
  print('Does not contain uppercase letter.')
else:
  print('Contains uppercase letter.')
```
## `string.isprintable():`

```python
s = 'Space is a printable'
print(s)
print(s.isprintable())

s = '\nNew Line is printable'
print(s)
print(s.isprintable())

s = ''
print('\nEmpty string printable?', s.isprintable())
```
```python
# written using ASCII
# chr(27) is escape character
# char(97) is letter 'a'
s = chr(27) + chr(97)

if s.isprintable() == True:
  print('Printable')
else:
  print('Not Printable')
  
s = '2+2 = 4'

if s.isprintable() == True:
  print('Printable')
else:
  print('Not Printable')
```
## `string.isspace():`

```python
s = '   \t'
print(s.isspace())

s = ' a '
print(s.isspace())

s = ''
print(s.isspace())
```
```python
s = '\t  \n'
if s.isspace() == True:
  print('All whitespace characters')
else:
  print('Contains non-whitespace characters')
  
s = '2+2 = 4'

if s.isspace() == True:
  print('All whitespace characters')
else:
  print('Contains non-whitespace characters.')
```
## `string.istitle():`

```python
s = 'Python Is Good.'
print(s.istitle())

s = 'Python is good'
print(s.istitle())

s = 'This Is @ Symbol.'
print(s.istitle())

s = '99 Is A Number'
print(s.istitle())

s = 'PYTHON'
print(s.istitle())
```
```python
s = 'I Love Python.'
if s.istitle() == True:
  print('Titlecased String')
else:
  print('Not a Titlecased String')
  
s = 'PYthon'
if s.istitle() == True:
  print('Titlecased String')
else:
  print('Not a Titlecased String')
```

## `string.isupper():`

```python
# example string
string = "THIS IS GOOD!"
print(string.isupper());

# numbers in place of alphabets
string = "THIS IS ALSO G00D!"
print(string.isupper());

# lowercase string
string = "THIS IS not GOOD!"
print(string.isupper());
```
```python
string = 'THIS IS GOOD'
if string.isupper() == True:
  print('Does not contain lowercase letter.')
else:
  print('Contains lowercase letter.')
  
string = 'THIS IS gOOD'
if string.isupper() == True:
  print('Does not contain lowercase letter.')
else:
  print('Contains lowercase letter.')
```
## `string.join(iterable):`

```python
# .join() with lists
numList = ['1', '2', '3', '4']
separator = ', '
print(separator.join(numList))

# .join() with tuples
numTuple = ('1', '2', '3', '4')
print(separator.join(numTuple))

s1 = 'abc'
s2 = '123'

# each element of s2 is separated by s1
# '1'+ 'abc'+ '2'+ 'abc'+ '3'
print('s1.join(s2):', s1.join(s2))

# each element of s1 is separated by s2
# 'a'+ '123'+ 'b'+ '123'+ 'b'
print('s2.join(s1):', s2.join(s1))
```
```python
# .join() with sets
test = {'2', '1', '3'}
s = ', '
print(s.join(test))

test = {'Python', 'Java', 'Ruby'}
s = '->->'
print(s.join(test))
```
```python
# .join() with dictionaries
test = {'mat': 1, 'that': 2}
s = '->'

# joins the keys only
print(s.join(test))

test = {1: 'mat', 2: 'that'}
s = ', '

# this gives error since key isn't string
print(s.join(test))
```
## `string.ljust(width[, fillchar]):`

```python
# example string
string = 'cat'
width = 5

# print left justified string
print(string.ljust(width))
```

```python
# example string
string = 'cat'
width = 5
fillchar = '*'

# print left justified string
print(string.ljust(width, fillchar))
```
## `string.rjust(width[, fillchar]):`

```python
# example string
string = 'cat'
width = 5

# print right justified string
print(string.rjust(width))
```
```python
# example string
string = 'cat'
width = 5
fillchar = '*'

# print right justified string
print(string.rjust(width, fillchar))
```
## `string.swapcase():`

```python
# example string
string = "THIS SHOULD ALL BE LOWERCASE."
print(string.swapcase())

string = "this should all be uppercase."
print(string.swapcase())

string = "ThIs ShOuLd Be MiXeD cAsEd."
print(string.swapcase())
```
## `string.lstrip([chars]):`

```python
random_string = '   this is good '

# Leading whitepsace are removed
print(random_string.lstrip())

# Argument doesn't contain space
# No characters are removed.
print(random_string.lstrip('sti'))

print(random_string.lstrip('s ti'))

website = 'https://www.programiz.com/'
print(website.lstrip('htps:/.'))
```
## `string.rstrip([chars]):`

```python
random_string = 'this is good    '

# Trailing whitepsace are removed
print(random_string.rstrip())

# Argument doesn't contain 'd'
# No characters are removed.
print(random_string.rstrip('si oo'))

print(random_string.rstrip('sid oo'))

website = 'www.programiz.com/'
print(website.rstrip('m/.'))
```
## `string.strip([chars]):`

```python
string = '  xoxo love xoxo   '

# Leading and trailing whitespaces are removed
print(string.strip())

# All <whitespace>,x,o,e characters in the left
# and right of string are removed
print(string.strip(' xoe'))

# Argument doesn't contain space
# No characters are removed.
print(string.strip('stx'))

string = 'android is awesome'
print(string.strip('an'))
```
## `string.partition(separator):`

```python
string = "Python is fun"

# 'is' separator is found
print(string.partition('is '))

# 'not' separator is not found
print(string.partition('not '))

string = "Python is fun, isn't it"

# splits at first occurence of 'is'
print(string.partition('is'))
```
## `string.maketrans(x[, y[, z]]):`

```python
# example dictionary
dict = {"a": "123", "b": "456", "c": "789"}
string = "abc"
print(string.maketrans(dict))

# example dictionary
dict = {97: "123", 98: "456", 99: "789"}
string = "abc"
print(string.maketrans(dict))
```

## Sorting sequence in python
### list.sort(key=..., reverse=...)
* reverse - If True, the sorted list is reversed (or sorted in Descending order)
* key - function that serves as a key for the sort comparison

sort() method does not return anything, but sorted() method returns the sorted sequence.

```python
# vowels list
vowels = ['e', 'a', 'u', 'o', 'i']

# sort the vowels
vowels.sort()

# print vowels
print('Sorted list:', vowels)
```
### list.sort(reverse=True)

or 

### sorted(list, reverse=True)

```python
# vowels list
vowels = ['e', 'a', 'u', 'o', 'i']

# sort the vowels
vowels.sort(reverse=True)

# print vowels
print('Sorted list (in Descending):', vowels)
```

## customized sorting

### list.sort(key=len)

or 

### sorted(list, key=len)

```python
# take second element for sort
def takeSecond(elem):
    return elem[1]

# random list
random = [(2, 2), (3, 4), (4, 1), (1, 3)]

# sort list with key
random.sort(key=takeSecond)

# print list
print('Sorted list:', random)
```

```python
# sorting using custom key
employees = [
    {'Name': 'Alan Turing', 'age': 25, 'salary': 10000},
    {'Name': 'Sharon Lin', 'age': 30, 'salary': 8000},
    {'Name': 'John Hopkins', 'age': 18, 'salary': 1000},
    {'Name': 'Mikhail Tal', 'age': 40, 'salary': 15000},
]

# custom functions to get employee info
def get_name(employee):
    return employee.get('Name')


def get_age(employee):
    return employee.get('age')


def get_salary(employee):
    return employee.get('salary')


# sort by name (Ascending order)
employees.sort(key=get_name)
print(employees, end='\n\n')

# sort by Age (Ascending order)
employees.sort(key=get_age)
print(employees, end='\n\n')

# sort by salary (Descending order)
employees.sort(key=get_salary, reverse=True)
print(employees, end='\n\n')
```
```python
# Function calling
def dictionairy():
# Declare hash function	
key_value ={}	

# Initializing value
key_value[2] = 56	
key_value[1] = 2
key_value[5] = 12
key_value[4] = 24
key_value[6] = 18	
key_value[3] = 323

print ("Task 1:-\n")
print ("Keys are")

# iterkeys() returns an iterator over the
# dictionary’s keys.
for i in sorted (key_value.keys()) :
	print(i, end = " ")

def main():
	# function calling
	dictionairy()			
	
# Main function calling
if __name__=="__main__":	
	main()

```

```python
# function calling
def dictionairy():

# Declaring the hash function	
key_value ={}	

# Initialize value
key_value[2] = 56	
key_value[1] = 2
key_value[5] = 12
key_value[4] = 24
key_value[6] = 18	
key_value[3] = 323

print ("Task 2:-\nKeys and Values sorted in",
			"alphabetical order by the key ")

# sorted(key_value) returns an iterator over the
# Dictionary’s value sorted in keys.
for i in sorted (key_value) :
	print ((i, key_value[i]), end =" ")

def main():
	# function calling
	dictionairy()			
	
# main function calling
if __name__=="__main__":	
	main()

```
```python
# Function calling
def dictionairy():

# Declaring hash function	
key_value ={}	

# Initializing the value
key_value[2] = 56	
key_value[1] = 2
key_value[5] = 12
key_value[4] = 24
key_value[6] = 18	
key_value[3] = 323


print ("Task 3:-\nKeys and Values sorted",
"in alphabetical order by the value")

# Note that it will sort in lexicographical order
# For mathematical way, change it to float
print(sorted(key_value.items(), key =
			lambda kv:(kv[1], kv[0])))	

def main():
	# function calling
	dictionairy()			
	
# main function calling
if __name__=="__main__":	
	main()

```
### Sort the dictionary by key

```python
# Creates a sorted dictionary (sorted by key)
from collections import OrderedDict

dict = {'ravi':'10','rajnish':'9','sanjeev':'15','yash':'2','suraj':'32'}
dict1 = OrderedDict(sorted(dict.items()))
print(dict1)

```

### sort a dictionary using for loop

```python
dict1 = {1: 1, 2: 9, 3: 4}
sorted_values = sorted(dict1.values()) # Sort the values
sorted_dict = {}

for i in sorted_values:
    for k in dict1.keys():
        if dict1[k] == i:
            sorted_dict[k] = dict1[k]
            break

print(sorted_dict)
```

### sort by using sorted()

```
