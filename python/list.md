# List in Python
A list can store a **collection** of data of any size. A list is a **sequence** defined by the list class. It contains the methods for **creating**, **manipulating**, and **processing** lists. Elements in a list can be accessed through an **index**.

## How to create a list?
A **list** is created by placing all the items (or elements) inside square brackets `[` and `]`, separated by commas.

It can have any number of **items** and they may be of different types (integer, float, string etc.).

```python 
list1 = list() # Create an empty list
list2 = list([2, 3, 4]) # Create a list with elements 2, 3, 4
list3 = list(["red", "green", "blue"]) # Create a list with strings list4 = list(range(3, 6)) # Create a list with elements 3, 4, 5 list5 = list("abcd") # Create a list with characters a, b, c, d

list1 = [] # Same as list()
list2 = [2, 3, 4] # Same as list([2, 3, 4])
list3 = ["red", "green"] # Same as list(["red", "green"])

list4 = [2, "three", 4]

# nested list
my_list = ["mouse", [8, 4, 6], ['a']]
```
## Access List Elements
Use the **index** operator `[ ]` to **access** an item in a list. Indices start at 0 and ends with `n - 1` where n is length of the list. For example, a list having 5 elements will have an index from 0 to 4.

Trying to access indexes other than these will raise an `IndexError`. The index must be an integer otherwise result in `TypeError`.

Nested lists are accessed using nested indexing.

```python
# List indexing

my_list = ['p', 'r', 'o', 'b', 'e']

# Output: p
print(my_list[0])

# Output: o
print(my_list[2])

# Output: e
print(my_list[4])

# Nested List
n_list = ["Happy", [2, 0, 1, 5]]

# Nested indexing
print(n_list[0][1])

print(n_list[1][3])

# Error! Only integer can be used for indexing
print(my_list[4.0])
```

## Negative indexing
Index of -1 refers to the last item, -2 to the second last item and so on.

```python
# Negative indexing in lists
my_list = ['p','r','o','b','e']

print(my_list[-1])

print(my_list[-5])
```
![](https://cdn.programiz.com/sites/tutorial2program/files/python-list-index.png)

## Slicing lists in Python?

```python
# List slicing in Python

my_list = ['p','r','o','g','r','a','m','i','z']

# elements 3rd to 5th
print(my_list[2:5])

# elements beginning to 4th
print(my_list[:-5])

# elements 6th to end
print(my_list[5:])

# elements beginning to end
print(my_list[:])
```
## Add/Change List Elements
**Lists** are **mutable**, meaning their elements can be **changed**. This is not allowed in case of string or tuple. We can use the assignment operator = to change an item or a range of items.

```python
# Correcting mistake values in a list
odd = [2, 4, 6, 8]

# change the 1st item    
odd[0] = 1            

print(odd)

# change 2nd to 4th items
odd[1:4] = [3, 5, 7]  

print(odd)                   
```
You can add one item to a list using the `append()` method or can add several items using `extend()` method.

```python
# Appending and Extending lists in Python
odd = [1, 3, 5]

odd.append(7)

print(odd)

odd.extend([9, 11, 13])

print(odd)
```

You can use `+ ` operator to combine two lists (also called list concatenation).

You can use `*` operator to repeat a list for the given number of times.

```python
# Concatenating and repeating lists
odd = [1, 3, 5]

print(odd + [9, 7, 5])

print(["re"] * 3)
```
You can insert one item at a desired location by using the method `insert()` or insert multiple items by **squeezing** it into an empty slice of a list.

```python
# Demonstration of list insert() method
odd = [1, 9]
odd.insert(1,3)

print(odd)

odd[2:2] = [5, 7]

print(odd)
```
## Delete/Remove List Elements
You can delete one or more items from a list using the keyword `del`. It can even delete the list entirely.

```python
# Deleting list items
my_list = ['p', 'r', 'o', 'b', 'l', 'e', 'm']

# delete one item
del my_list[2]

print(my_list)

# delete multiple items
del my_list[1:5]

print(my_list)

# delete entire list
del my_list

# Error: List not defined
print(my_list)

```
You can use `remove()` method to remove the given item or `pop()` method to remove an item at the given index.

The `pop()` method removes and returns the last item if the index is not provided. This helps us implement lists as **stacks** (**first in, last out** data structure).

We can also use the clear() method to empty a list.

```python
my_list = ['p','r','o','b','l','e','m']
my_list.remove('p')

# Output: ['r', 'o', 'b', 'l', 'e', 'm']
print(my_list)

# Output: 'o'
print(my_list.pop(1))

# Output: ['r', 'b', 'l', 'e', 'm']
print(my_list)

# Output: 'm'
print(my_list.pop())

# Output: ['r', 'b', 'l', 'e']
print(my_list)

my_list.clear()

# Output: []
print(my_list)
```
You can also delete items in a list by assigning an **empty list** ie. `[ ]` to a slice of elements.

```console
>>> my_list = ['p','r','o','b','l','e','m']
>>> my_list[2:3] = []
>>> my_list
['p', 'r', 'b', 'l', 'e', 'm']
>>> my_list[2:5] = []
>>> my_list
['p', 'r', 'm']
```
## Python List Methods

1. `append()` - Add an element to the end of the list
1. `extend()` - Add all elements of a list to the another list
1. `insert()` - Insert an item at the defined index
1. `remove()` - Removes an item from the list
1. `pop()` - Removes and returns an element at the given index
1. `clear()` - Removes all items from the list
1. `index()` - Returns the index of the first matched item
1. `count()` - Returns the count of the number of items passed as an argument
1. `sort()` - Sort items in a list in ascending order
1. `reverse()` - Reverse the order of items in the list
1. `copy()` - Returns a shallow copy of the list

```python
# Python list methods
my_list = [3, 8, 1, 6, 0, 8, 4]

# Output: 1
print(my_list.index(8))

# Output: 2
print(my_list.count(8))

my_list.sort()

# Output: [0, 1, 3, 4, 6, 8, 8]
print(my_list)

my_list.reverse()

# Output: [8, 8, 6, 4, 3, 1, 0]
print(my_list)
```
## List Comprehension: Elegant way to create Lists
List comprehension is an elegant and concise way to create a new list from an existing list in Python.

A list comprehension consists of an expression followed by `for` statement inside `[ ]` square brackets.

Here is an example to make a list with each item being increasing power of 2.

```python
pow2 = [2 ** x for x in range(10)]
print(pow2)
```

The above list comprehension statement is equivalent to the statement below:

```python
#This code is equivalent to:

pow2 = []
for x in range(10):
   pow2.append(2 ** x)
```

A list comprehension can optionally contain more for or if statements. An optional if statement can filter out items for the new list. Here are some examples.

```console
>>> pow2 = [2 ** x for x in range(10) if x > 5]
>>> pow2
[64, 128, 256, 512]
>>> odd = [x for x in range(20) if x % 2 == 1]
>>> odd
[1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
>>> [x+y for x in ['Python ','C '] for y in ['Language','Programming']]
['Python Language', 'Python Programming', 'C Language', 'C Programming']

```
## List Membership Test
You can test if an item exists in a list or not, using the keyword `in`.

```python
my_list = ['p', 'r', 'o', 'b', 'l', 'e', 'm']

# Output: True
print('p' in my_list)

# Output: False
print('a' in my_list)

# Output: True
print('c' not in my_list)
```
## Iterating Through a List
Using a for loop you can iterate through each item in a list.

```python
for fruit in ['apple','banana','mango']:
    print("I like",fruit)
```