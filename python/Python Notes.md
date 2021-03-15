## Computer: 
> A computer is an electronic device that stores and processes data. 
> A computer includes both hardware and software. 
> Hardware is physical elements of the computer whereas Software provides the invisible instructions that control the hardware and make it perform specific tasks. Knowing computer hardware helps you better understand the effects that a program’s instructions have on the computer and its components. 

## A computer consists of the following major hardware components:
1. A central processing unit (CPU)
1. Memory (main memory)
1. Storage devices (such as disks and CDs)
1. Input devices (such as the mouse and keyboard)
1. Output devices (such as monitors and printers)
1. Communication devices (such as modems and network interface cards)

## Computer programs:
The smallest unit of a software is called an instruction which makes computer to do something. Collection of instructions is called programs to provide solution for a particular problem. The collection of such programs is called software which collectively gives solution for a bigger problem. Generally in a software all these programs are interconnected.

Software is categorised into System Software and Application Software. 
An operating system (OS) is the most important program that runs on a computer. The OS manages and controls a computer’s activities for example, Microsoft Windows, Mac OS, and Linux.

## Types of Programming Langugage:
Machine Language
Assembly Language
High-level Language

# Python Basics
***Programming languages*** help a programmer to convert his/her ideas into a form that the computer can understand. The method of **designing and implementing** the programs using the features of a language is a **programming paradigm**. One such method is the **Procedural programming**.

**Procedural programming** focuses more on **procedure** than on **data**. It separates the functions and the data that uses those functions, which is not a very useful thing as it makes our code less maintainable. This leads us to another technique called the **object oriented programming (OOP in short)**.

**Object** means any **real world entity** like *pen*, *car*, *chair*, etc. **Object oriented programming** is the programming paradigm that focuses more on the *objects* than on the procedure. In other word we can say that OOPS focuses more on **data** than on **logic** or **action**. It is an approach to design a program using **objects** and **classes**.

## what are the benefits of learning programming using Python?
Python is easy to learn and fun to program.
Python code is simple, short, readable, intuitive, and powerful

**Python statement prompt**: In interactive mode the prompt where we give python statement to execute denoted by symbole >>>

# Getting Started with Python
## Launching Python
## Creating Python Source Code Files
## Using Python to Perform Mathematical Computations
# Dynamic Programming
## Fibonacci Series Simple
```python
import time
import matplotlib.pyplot as plt

def fib(n):
  if n <= 0: # base case 1
    return 0
  if n <= 1: # base case 2
    return 1
  else: # recursive step
    return fib(n-1) + fib(n-2)

numbers = 20
```
## Fibonacci Series Using DP

```python
import time
import matplotlib.pyplot as plt

calculated = {}

def fib(n):
  if n == 0: # base case 1
    return 0
  if n == 1: # base case 2
    return 1
  elif n in calculated:
    return calculated[n]
  else: # recursive step
    calculated[n] = fib(n-1) + fib(n-2)
    return calculated[n]

showNumbers = False
numbers = 20
```
## Fibonacci Bottom-Up DP
```python
def fib(n):
  if n == 0:
    return 0
  if n == 1:
    return 1
  # table for tabulation
  table = [None] * (n+1) 
  table[0] = 0        # base case 1, fib(0) = 0
  table[1] = 1        # base case 2, fib(1) = 1
  # filling up tabulation table starting from 2 and going upto n
  for i in range(2,n+1):  
    # we have result of i-1 and i-2 available because these had been evaluated already
    table[i] = table[i-1] + table[i-2]  
  # return the value of n in tabulation table
  return table[n]    

print(fib(100))
```
## Fibonacci Top-Down DP
```python
memo = {} #dictionay for Memoization

def fib(n):
  if n == 0: # base case 1
    return 0
  if n == 1: # base case 2
    return 1
  elif n in memo: # Check if result for n has already been evaluated
    return memo[n] # return the result if it is available
  else: # otherwise recursive step
    memo[n] = fib(n-1) + fib(n-2) # store the result of n in memoization dictionary
    return memo[n] # return the value

print (fib(100))
```

# Course Contents
## 1. Chapter 1: From Recursion to Dynamic Programming

### Introduction
### What is Recursion?
### Thinking Recursively
### The Fibonacci Numbers
### Challenge: Find All Permutations of a String
### Solution Review: Find All Permutations of a String
### Challenge: Place N Queens on an NxN Chessboard
### Solution Review: Place N Queens on an NxN Chessboard
### Is Plain Recursion Good Enough?
### What is Dynamic Programming?
### Approaches of Dynamic Programming
### Where to Use Dynamic Programming
### Quiz
## 2. Chapter 2: Top-Down Dynamic Programming with Memoization

### What is Memoization?
### The Fibonacci Numbers Algorithm with Memoization
### Challenge: The Staircase Problem
### Solution Review: The Staircase Problem
### Challenge 2: The Knapsack Problem
### Solution Review: The Knapsack Problem
### Quiz
## 3. Chapter 3: Bottom-Up Dynamic Programming with Tabulation

### Limitations of Top-Down Dynamic Programming
### What is Tabulation?
### The Fibonacci Numbers Algorithm with Tabulation
### Optimizing the Fibonacci Numbers Algorithm
### Challenge: The Catalan Numbers
### Solution Review: The Catalan Numbers
### Challenge 2: Longest Common Substring
### Solution Review: Longest Common Substring
### Top-Down vs Bottom-Up
### Quiz
## 4. Chapter 4: Practice Problems

### Challenge: Number of Ways to Represent N Dollars
### Solution Review: Number of Ways to Represent N Dollars
### Challenge: The Rod Cutting Problem
### Solution Review: The Rod Cutting Problem
### Challenge: Weighted Scheduling Problem
### Solution Review: Weighted Scheduling Problem
### Challenge: The Matrix Chain Multiplication
### Solution Review: The Matrix Chain Multiplication
### Challenge: The Traveling Salesman Problem
### Solution Review: The Traveling Salesman Problem
### Challenge: Longest Common Subsequence
### Solution Review: Longest Common Subsequence
### Challenge: Longest Palindromic Subsequence
### Solution Review: Longest Palindromic Subsequence
### Challenge: The Edit Distance Problem
### Solution Review: The Edit Distance Problem
## Conclusion

# Practice Dynamic Programming Problems
## Knapsack Problem
### Problem Statement:

Given a list of weights and a list of costs, find the optimal subset of things that form the highest cumulative price bounded by the capacity of the knapsack.

```python
def solveKnapsack(weights, prices, capacity, index, memo):
  # base case of when we have run out of capacity or objects
  if capacity <= 0 or index >= len(weights): 
    return 0
  # check for solution in memo table
  if (capacity, index) in memo: 
    return memo[(capacity, index)]
  # if weight at index-th position is greater than capacity, skip this object
  if weights[index] > capacity: 
    # store result in memo table
    memo[(capacity, index)] = solveKnapsack(weights, prices, capacity, index + 1, memo) 
    return memo[(capacity, index)] 
  # recursive call, either we can include the index-th object or we cannot, we check both possibilities and return the most optimal one using max
  memo[(capacity, index)] = max(prices[index]+solveKnapsack(weights, prices, capacity - weights[index], index+1, memo),
        solveKnapsack(weights, prices, capacity, index + 1, memo)) 
  return memo[(capacity, index)]

def knapsack(weights, prices, capacity):
  # create a memo dictionary
  memo = {} 
  return solveKnapsack(weights, prices, capacity, 0, memo)

print(knapsack([2,1,1,3], [2,8,1,10], 4))
```
### Hint:
Remember in the optimal set of goods, a certain good may be present or it may be absent. Thus you have to explore these two possibilities for each good.

Try a top-down solution.

### Solution Breakdown:

In this problem, it is a little hard to see overlapping problems, since they do not follow a specific pattern. But if you look closely, you will notice capacity and index tuple are oftentimes repeating. All of these sub-problems have the same answers. Look at the following visualization.

# Python for Competitive Programming
For string - we use input()

For Integers - we use int(input())

For floats - we use float(input())

input().split()

[map(datatype, input().split())] #list of n values

list(map(datatype, input().split())) #list of n values

[Number Mirror | CodeChef](https://www.codechef.com/problems/START01)

[Decrement OR Increment | CodeChef](https://www.codechef.com/problems/DECINC)

[Chef and SnackDown | CodeChef](https://www.codechef.com/problems/SNCKYEAR)

[First and Last Digit | CodeChef](https://www.codechef.com/problems/FLOW004)

[Servant | CodeChef](https://www.codechef.com/problems/FLOW008)

[Id and Ship | CodeChef](https://www.codechef.com/problems/FLOW010)

[Two vs Ten | CodeChef](https://www.codechef.com/problems/TWOVSTEN)

[Add Two Numbers | CodeChef](https://www.codechef.com/problems/FLOW001)

[Cut the Board | Codechef](https://www.codechef.com/problems/CUTBOARD)

[Chef And Operators | Codechef](https://www.codechef.com/problems/CHOPRT)

[Buying New Tablet | Codechef](https://www.codechef.com/problems/TABLET)

[Mahasena | Codechef](https://www.codechef.com/problems/AMR15A)

[Chef and Cook-Off | Codechef](https://www.codechef.com/problems/CCOOK)

[Digit Longest Increasing Subsequences 2 | Codechef](https://www.codechef.com/problems/LISDIGIT)

[ATM Machine | Codechef](https://www.codechef.com/problems/ATM2)

[That Is My Score! Codechef](https://www.codechef.com/problems/WATSCORE)

[600A - Extract Numbers | Codeforces](https://codeforces.com/contest/600/problem/A)

```python
",".join(lst) # outputs list with comma seperated
```

Codechef Python IDE allows the following packages:
```python
import pip 
print(sorted(["%s==%s" % (i.key, i.version) for i in pip.get_installed_distributions()]))
```
['absl-py==0.3.0', 
'arcade==1.3.4', 
'astor==0.7.1', 
'astroid==2.0.2', 
'cs50==2.4.1', 
'future==0.15.2', 
'gast==0.2.0', 
'glu==0.0.18', 
'grpcio==1.14.0', 
'isort==4.3.4', 
'lazy-object-proxy==1.3.1', 
'llvmlite==0.24.0', 
'markdown==2.6.11', 
'mccabe==0.6.1', 
'numba==0.39.0', 
'pandas==0.23.4', 
'protobuf==3.6.0', 
'pyglet==1.3.2', 
'pylint==2.1.1', 
'pyyaml==3.11', 
'scikit-learn==0.19.2', 
'setuptools==39.1.0', 
'sqlalchemy==1.2.10', 
'sqlparse==0.2.4', 
'tensorboard==1.9.0', 
'tensorflow==1.9.0', 
'termcolor==1.1.0', 
'theano==1.0.2', 
'typed-ast==1.1.0', 
'typing==3.6.4', 
'werkzeug==0.14.1', 
'wrapt==1.10.11']

```python
import pkg_resources
print(*pkg_resources.working_set, sep='\n')
```
wrapt 1.10.11
Werkzeug 0.14.1
typing 3.6.4
typed-ast 1.1.0
Theano 1.0.2
termcolor 1.1.0
tensorflow 1.9.0
tensorboard 1.9.0
sqlparse 0.2.4
SQLAlchemy 1.2.10
setuptools 39.1.0
scikit-learn 0.19.2
PyYAML 3.11
pylint 2.1.1
pyglet 1.3.2
protobuf 3.6.0
pandas 0.23.4
numba 0.39.0
mccabe 0.6.1
Markdown 2.6.11
llvmlite 0.24.0
lazy-object-proxy 1.3.1
isort 4.3.4
grpcio 1.14.0
glu 0.0.18
gast 0.2.0
future 0.15.2
cs50 2.4.1
astroid 2.0.2
astor 0.7.1
arcade 1.3.4
absl-py 0.3.0
wheel 0.30.0
webencodings 0.5
six 1.11.0
simplejson 3.15.0
SecretStorage 2.3.1
scipy 1.1.0
pyxdg 0.25
pytz 2018.5
python-dateutil 2.6.1
pyparsing 2.2.0
pygobject 3.28.2
pycurl 7.43.0.1
pycrypto 2.6.1
pip 9.0.1
Pillow 5.2.0
olefile 0.45.1
numpy 1.14.5
matplotlib 2.2.2
lxml 4.2.3
kiwisolver 1.0.1
keyrings.alt 3.0
keyring 13.1.0
idna 2.6
html5lib 1.0.1
entrypoints 0.2.3.post2
decorator 4.3.0
cycler 0.10.0
cryptography 2.3
chardet 3.0.4
beautifulsoup4 4.6.0
asn1crypto 0.24.0

```python
#Running the following code on Codechef IDE lists all the present modules
import sys
print("\n".join(sys.modules.keys()))
#print(sys.modules.keys()) will print all the modules in a same line which is obviously inconvenient for Github
```

### String
#### ex: hello
```python
s = input()
print(s) # => "hello"
```
### Number
#### ex: 10
```python
n = int(input())
print(n + 1) # => 11
```
### Multiple String
#### ex: hello world
```python
s1, s2 = input().split()
print(s1) # => "hello"
print(s2) # => "world"
```
### Multiple Number
#### ex: 2 3
```python
a, b = map(int, input().split())
print(a * b) # => 6
```
#### ex: 1 2 3 4 5 6 7 8 9 10
```python
l = [ int(x) for x in input().split() ]
print(sum(l)) # => 55
```


