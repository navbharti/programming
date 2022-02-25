# Session Seven: Tuple and Dictionary in Python
```pyhton
#function definition
def greetings():
    print("Welcome to KLU")
    a = 10
    print("a: ", a)


#calling a function
greetings()
```

```python
#type-1 No Argument and No Return
def multiply():
    inVal = input("Enter two numbers: ")
    sa, sb = inVal.split()
    a, b = int(sa), int(sb)
    multi = a * b
    print("Multiplication: ", multi)

#calling the multiply()
multiply()
```

```python
#type-2 No Argument and With Return
def multiply1():
    inVal = input("Enter two numbers: ")
    sa, sb = inVal.split()
    a, b = int(sa), int(sb)
    multi = a * b
    return multi

#calling multiply1()
result = multiply1()
print("Multiplication: ", result)

```

```python
#type-3 With Argument and No Return
def multiply2(a, b):
    multi = a * b
    print("Multiplication: ", multi)

#calling multiply2() with int datatype
multiply2(12, 5)

#calling multiply2() with str and int datatype
multiply2("12", 5)

#calling multiply2() with str and str datatype
#multiply2("12", "5")

inVal = input("Enter two numbers: ")
sa, sb = inVal.split()
a, b = int(sa), int(sb)
#calling multiply2()input() from keyboard int datatype
multiply2(a, b)



```

```python
#type-4 With Argument and With Return
def multiply3(a, b):
    print("Id of a:", id(a))
    print("Id of b: ", id(b))

    multi = a*b
    return multi

#calling multiply3()
n = 12
m = 5
print("Outside the function")
print("Id of n: ", id(n))
print("Id of m: ", id(m))
result = multiply3(n, m)
print("Multiplication: ", result)

```

```python
def fun(a, s, f):
    print("This is int: ", a)
    print("This is str: ", s)
    print("This is float: ", f)

fun(12, "hello", 3.1415)#work properly
fun("hello", 3.1415, 12)#may work diffently\
fun() #Error Expected 3 arguments
fun(12, "hello") #Error
fun(12, "hello", 3.1415, 50)#Error
```

```python
def fun(a, s, f):
    print("This is int: ", a)
    print("This is str: ", s)
    print("This is float: ", f)

fun(12, "hello", 3.1415)#work properly
fun("hello", 3.1415, 12)#may work diffently\
fun() #Error Expected 3 arguments
fun(12, "hello") #Error
fun(12, "hello", 3.1415, 50)#Error
```

```python
def multiply(a=1, b=2):
    print("a: ", a, " b: ", b)
    multi = a * b
    return multi

r1 = multiply(12, 5)
print("Result: ", r1)

r2 = multiply()
print("Result: ", r2)

r3 = multiply(12)
print("Result: ", r3)

r4 = multiply(12, 5, 20)
print("Result: ", r4)

r5 = multiply("12", 5)
print("Result: ", r5)



```

## Exercises in Function Topic

1. Write a program in C to show the simple structure of a function.
```python
Expected Output :

The total is :  11  
```

2. Write a program in C to find the square of any number using the function. 
```python
Test Data :
Input any number for square : 20
Expected Output :

The square of 20 is : 400.00
```
3. Write a program in C to swap two numbers using function. 
```python
Test Data :
Input 1st number : 2
Input 2nd number : 4
Expected Output :

Before swapping: n1 = 2, n2 = 4                                                  
After swapping: n1 = 4, n2 = 2 
```
4. Write a program in C to check a given number is even or odd using the function. 
```python
Test Data :
Input any number : 5
Expected Output :

 The entered number is odd.  
```
5. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function. 
```python
Expected Output :

 The sum of the series is : 34 
```
6. Write a program in C to convert decimal number to binary number using the function.
```python
Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001 
 
```
7. Write a program in C to check whether a number is a prime number or not using the function. 
```python
Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number. 
```
8. Write a program in C to get the largest element of an array using the function. 
```python
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5   
```
9. Write a program in C to check armstrong and perfect numbers using the function. 
```python
Test Data :
Input any number: 371
Expected Output :

 The 371 is an Armstrong number.                                                 
 The 371 is not a Perfect number.  
```
10. Write a program in C to print all perfect numbers in given range using the function. 
```python
Test Data :
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :

 The perfect numbers between 1 to 100 are :                                      
 6   28  
 
```
11. Write a program in C to check whether two given strings are an anagram. 
```python
Test Data :
Input the first String : spare
Input the second String : pears
Expected Output :

 spare and pears are Anagram.    
```
12. Write a C programming to find out maximum and minimum of some values using function which will return an array. 
```python
Test Data :
Input 5 values
25
11
35
65
20
Expected Output :

Number of values you want to input: Input 5 values
Minimum value is: 11
Maximum value is: 65 
```


# List Coprehension Exercise:
    
## 1. create a list with given n using list comprehension technique

Input:

n = 10

Output:

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

## 2. create a list with Squres from the above list

Input:

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

Output:

sqrLst =  [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

## 3. create a list with cubes from the given list
Input:

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

Output:

cubeList = [1, 8, 27, 64, 125, 216, 343, 512, 729, 1000]

## 4. create a list of cumulative sum of natural number from the given list
Input:

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

Output:

cumulative = [1, 3, 6, 10, 15, 21, 28, 36, 45, 55]
    
## 5. create list of factorial of given list
Input:

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

Output:

fact = [1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800]

Hint: use
'''
def multiply(inList):
    multi = 1
    for a in inList:
        multi *= a
    return multi
'''

## 6. Find all of the numbers from 1-1000 that are divisible by 7
Output:

list7 = [7, 14, 21, 28, 35, 42, 49, 56, 63, 70, 77, 84, 91, 98]

## 7. Find all of the words in a string that are less than 4 letters
Input:

text = "On a summer day somner smith went simming in the sun and his red skin stung"

Output:

text4 = ['On', 'a', 'day', 'in', 'the', 'sun', 'and', 'his', 'red']

## 8. Produce a list of tuples consisting of only the matching numbers in these lists list_a = [1, 2, 3,4,5,6,7,8,9], list_b = [2, 7, 1, 12].  

Result would look like (4,4), (12,12)


## 9. Get only the numbers in a sentence like 'In 1984 there were 13 instances of a protest with over 1000 people attending'.  

Result is a list of numbers like [3,4,5]

Input:

text = 'In 1984 there were 13 instances of a protest with over 1000 people attending'

Output:

['1984', '13', '1000']

## 10. Find the common numbers in two lists (without using a tuple or set) list_a = [1, 2, 3, 4], list_b = [2, 3, 4, 5]
Input:

list_a = [1, 2, 3, 4]
list_b = [2, 3, 4, 5]

Output:
[2, 3, 4]

## 11. Create a list of all the consonants in the string "Yellow Yaks like yelling and yawning and yesturday they yodled while eating yuky yams"

Input:

text = "Yellow Yaks like yelling and yawning and yesturday they yodled while eating yuky yams"

Ouput:

['Y', 'l', 'l', 'w', 'Y', 'k', 's', 'l', 'k', 'y', 'l', 'l', 'n', 'g', 'n', 'd', 'y', 'w', 'n', 'n', 'g', 'n', 'd', 'y', 's', 't', 'r', 'd', 'y', 't', 'h', 'y', 'y', 'd', 'l', 'd', 'w', 'h', 'l', 't', 'n', 'g', 'y', 'k', 'y', 'y', 'm', 's']


## 12. Count the number of spaces in a string

Input:

text = 'the slow solid squid swam sumptuously through the slimy swamp'

Ouput:

9

