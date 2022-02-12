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