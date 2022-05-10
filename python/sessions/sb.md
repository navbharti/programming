![]()

List of Home Assignment:
1. Complex Number Operations in python
2. Geometrical Shapes Area, Perimeter, Volume (if applicable) and other operations: https://github.com/navbharti/programming/blob/master/python/sessions/session03.md
3. Exercise in List: https://github.com/navbharti/programming/blob/master/python/sessions/session04.md#exercise-in-list
4. Conditional Statement: https://github.com/navbharti/programming/blob/master/python/home_asignment.md
5. Function Exercise: 
https://github.com/navbharti/programming/blob/master/python/sessions/session09.md#exercises-in-function-topic

## How to measure the time elapsed to execute your code in Python
```python
import time

startTime = time.time()

# write your code or functions calls

endTime = time.time()
totalTime = endTime - startTime

print("Total time required to execute code is= ", totalTime)
```

## Get the difference between the two Lists
```python
list1 = ['Scott', 'Eric', 'Kelly', 'Emma', 'Smith']
list2 = ['Scott', 'Eric', 'Kelly']

set1 = set(list1)
set2 = set(list2)

list3 = list(set1.symmetric_difference(set2))
print(list3)
```

## Calculate memory is being used by an object in Python

```python
import sys

list1 = ['Scott', 'Eric', 'Kelly', 'Emma', 'Smith']
print("size of list = ",sys.getsizeof(list1))

name = 'pynative.com'
print("size of name = ",sys.getsizeof(name))
```

## Removing duplicates items from a list

```python
listNumbers = [20, 22, 24, 26, 28, 28, 20, 30, 24]
print("Original= ", listNumbers)

listNumbers = list(set(listNumbers))
print("After removing duplicate= ", listNumbers)
```

## Find if all elements in a list are identical

```python
listOne = [20, 20, 20, 20]
print("All element are duplicate in listOne", listOne.count(listOne[0]) == len(listOne))

listTwo = [20, 20, 20, 50]
print("All element are duplicate in listTwo", listTwo.count(listTwo[0]) == len(listTwo))
```

## How to efficiently compare two unordered lists

```python
from collections import Counter

one = [33, 22, 11, 44, 55]
two = [22, 11, 44, 55, 33]

print("is two list are b equal", Counter(one) == Counter(two))
```

## How to check if all elements in a list are unique

```python
def isUnique(item):
    tempSet = set()
    return not any(i in tempSet or tempSet.add(i) for i in item)

listOne = [123, 345, 456, 23, 567]
print("All List elemtnts are Unique ", isUnique(listOne))

listTwo = [123, 345, 567, 23, 567]
print("All List elemtnts are Unique ", isUnique(listTwo))
```

## Convert Byte to String

```python
byteVar = b"pynative"
str = str(byteVar.decode("utf-8"))
print("Byte to string is" , str )
```

## Use enumerate

```python
listOne = [123, 345, 456, 23]
print("Using enumerate")
for index, element in enumerate(listOne): 
    print("Index [", index,"]", "Value", element)
```

## Merge two dictionaries in a single expression

```python
currentEmployee = {1: 'Scott', 2: "Eric", 3:"Kelly"}
formerEmployee  = {2: 'Eric', 4: "Emma"}

allEmployee = {**currentEmployee, **formerEmployee}
print(allEmployee)
```

```python
currentEmployee = {1: 'Scott', 2: "Eric", 3:"Kelly"}
formerEmployee  = {2: 'Eric', 4: "Emma"}

def merge_dicts(dictOne, dictTwo):
    dictThree = dictOne.copy()
    dictThree.update(dictTwo)
    return dictThree
    
print(merge_dicts(currentEmployee, formerEmployee))

```

## Convert two lists into a dictionary

```python
ItemId = [54, 65, 76]
names = ["Hard Disk", "Laptop", "RAM"]

itemDictionary = dict(zip(ItemId, names))

print(itemDictionary)
```

## Convert hex string, String to int

```python
hexNumber = "0xfde"
stringNumber="34"

print("Hext toint", int(hexNumber, 0))
print("String to int", int(stringNumber, 0))
```

## Format a decimal to always show 2 decimal places

```python
number= 88.2345
print('{0:.2f}'.format(number))
```

## Return multiple values from a function

```python
def multiplication_Division(num1, num2):
  return num1*num2, num2/num1

product, division = multiplication_Division(10, 20)
print("Product", product, "Division", division)
```

## The efficient way to check if a value exists in a NumPy array

```python
import numpy

arraySample = numpy.array([[1, 2], [3, 4], [4, 6], [7, 8]])

if value in arraySample[:, col_num]:
    print(value)
```


![](www.google.com)
# Codechef Practice Problems

Day-1 

[ATM](https://www.codechef.com/problems/HS08TEST)

[Add Two Numbers](https://www.codechef.com/problems/FLOW001)

[Enormous Input Test](https://www.codechef.com/problems/INTEST)

[Sum of Digits](https://www.codechef.com/problems/FLOW006)

[Find Remainder](https://www.codechef.com/problems/FLOW002)

[First and Last Digit](https://www.codechef.com/problems/FLOW004)

[Lucky Four](https://www.codechef.com/problems/LUCKFOUR)

[Turbo Sort](https://www.codechef.com/problems/TSORT)

[Reverse The Number](https://www.codechef.com/problems/FLOW007)

[Small factorials](https://www.codechef.com/problems/FCTRL2)


Cuboid Class:
* Create a Cuboid class with 3 private instance variables length, breadth and height of type double, and a public method volume of return type float.
* Add 3 setter methods with return type boolean (the instance variable is set when the argument is +ve) for each of the 3 instance members
* Also add 3 getter methods of return type str, which return the value appended with m (meters) with the value.
Use __str__() method to print the details of Cuboid as
Length : 10.0 m
Breadth : 10.0 m
Height: 10.0 m Volume : 100.0 cu.m

* Access each of these methods through an object of Cuboid from the main module (if __name__ == "__main__") 
* Set the instance variables by obtaining input from console. (Use Scanner)

## How can you get better at Competitive Programming?

1. Develop a problem-solving mindset
2. Never give up attitude
3. Figure out what went wrong and read the solutions
4. Focus on quality more than quantity
5. Give more hours into deliberate practice
6. Discuss the CP problems with your colleagues
7. Keep a track of your progress
8. Attempt to explain your thought process to your friend, this will help immensely during interviews.

Write list comprehension to keep all int elements from a list of mixed datatype.

lst = [1, "hello", 3.209, "klu", 3, 6, 2, ]


Draw class diagram and develop python code for the following:

Write a Cuboid class with 3 static variables length, breadth and height of type float, and a static method volume(), access them using static method main(). Call main() method  within if __name__ == "__main__": .

Draw a Class Diagram and Develop python code for the following:
* Create a class Student with private instance variables id, marks for 3 subjects, total as static variables, static method to computethe total.
* Create a static method printStident() that prints the student information.
Write the demo code in if __name__ == "__main__": block.

Draw a Class Diagram and Develop python code for the following:
Create a class Utility with three static methods. sort() which accepts a list of integers to sort them, findSmallest() which accepts a list of integers to find smallest value, findLargest() which accepts a list of integers to find largest value. Access these methods from another static method main(). 
Write the demo code in if __name__ == "__main__": block.

Draw a Class Diagram and Develop python code for the following:
* Create a Cuboid class with 3 private instance variables length, breadth and height of type float, and a public instance method volume(). 
Write Accessors (Getters) and Mutators (Setters) also.
* Create 2 objects with different values obtained from keyboard and print the volume of each. (The program must take 6 values as input)
Write the demo code in if __name__ == "__main__": block.