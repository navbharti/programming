# Session Four: Control Flow Statement

![](../images/python-flow-control-statements.webp)

## 1. Conditional Statement
### 1. Sim;ple if Statement

![](../images/python-if-statements.webp)

The `Simple if statement` is the simplest form. It takes a `condition` and evaluates to either `True` or `False`. 

If the condition is `True`, then the `True block` of code will be executed, and if the condition is `False`, then the `block of code is skipped`, and The controller moves to the next line

### Syntax:

```python
if condition:
     statement 1
     statement 2
     statement n
```

`NOTE`: The `block of code` is represented by `Indentation`. Indentation if collection of space or tab.

`Example`: Read an integer value and print the value is Greater than 10 if the input value is greater than then.

```python
strVal = input("Enter a Number: ")
n = int(strVal)
if n > 10:
    print("Greater than 10")
print("Outside of if block")
```


### 2. if-else Statement

![](../images/python-if-else-statement.webp)

The `if-else statement` checks the condition and `executes the if block` of code when the condition is `True`, and if the condition is `False`, it will `execute the else block` of code.

## Syntax: 

```python
if condition:
    statement 1
else:
    statement 2
```

`Example`: Write a python program to read an integer value and print the integer is Even of Odd.

```python
strVal = input("Enter a Number: ")
n = int(strVal)
if n % 2 == 0:
    print("Even")
else: 
    print("Odd")
print("Outside if-else")
```

### 3. if-elif-else Ladder/Chaining Statement

![](../images/if-else-if-statement.png)

The `elif statement` checks multiple conditions one by one and if the condition fulfills, then executes that code. After executing matched condition it skips all other conditions checking.

This is useful when you need to check multiple conditions.

## Syntax:

```python
if condition-1:  
     statement 1 
elif condition-2:
     stetement 2 
elif condition-3:
     stetement 3 
     ...         
else:            
     statement 
```
`Example`: Write a python program to read a single digit integer and print its word form. 

```python
strVal = input("Enter a Number: ")
n = int(strVal)
if n == 0:
    print("Zero")
elif n == 1:
    print("One")
elif n == 2:
    print("Two")
elif n == 3:
    print("Three")
elif n == 4:
    print("Four")
elif n == 5:
    print("Five")
elif n == 6:
    print("Six")
elif n == 7:
    print("Seven")
elif n == 8:
    print("Eight")
elif n == 9:
    print("Nine")
else:
    print("Not a Sigle Digit Number")
print("Outside if-else")
```

### 4. nested if-else

![](../images/nested-if-else-statement.png)

`Nested if-else` statement is an `if statement inside another if-else statement`. It is allowed in Python to put any number of if statements in another if statement.

Indentation is the only way to differentiate the level of nesting. The nested if-else is useful when we want to make a series of decisions.

### Syntax:

```python
if conditon_outer:
    if condition_inner:
        statement of inner if
    else:
        statement of inner else:
    statement ot outer if
else:
    Outer else 
statement outside if block
```
Example: Write a python program to read three integers and print the Greates integer.

```python
val1 = input("Enter First Number: ")
a = int(val1)

val2 = input("Enter Second Number: ")
b = int(val2)

val3 = input("Enter Third Number: ")
c = int(val3)

if a > b:
    if a > c:
        print("First Number is the Greatest: ", a)
    else:
        print("Third Number is the Greatest: ", c)
else:
    if b > c:
        print("Second Number is the Greatest: ", b)
    else:
        print("Third Number is the Greatest: ", c)
```

Whenever we write a block of code with multiple if statements, indentation plays an important role. But sometimes, there is a situation where the block contains only a single line statement.

Instead of writing a block after the colon, we can write a statement immediately after the colon.

```python
number = 56
if number > 0: print("positive") 
else: print("negative")
```

## 2. Transfer Statement
### 1. break statement
### 2. continue statement
### 3. pass statements
## 3. Iterrative Statement
### 1. for loop

![](../images/python-for-loop.webp)

### 2. while loop

![](../images/python-while-loop.webp)


# CodeChef Practice Problem

[ATM](https://www.codechef.com/problems/HS08TEST) 

[Add Two Numbers](https://www.codechef.com/problems/FLOW001)

[Inormous Input Test](https://www.codechef.com/problems/INTEST)

[Sum of Digits](https://www.codechef.com/problems/FLOW006)

[Find Remainder ](https://www.codechef.com/problems/FLOW002)

[First and Last Digit](https://www.codechef.com/problems/FLOW004)

[Lucky Four](https://www.codechef.com/problems/LUCKFOUR)

[Reverse the Number](https://www.codechef.com/problems/FLOW007)

[Small Factorials](https://www.codechef.com/problems/FCTRL2)

[Turbo Sort](https://www.codechef.com/problems/TSORT)

[Finding Square Root](https://www.codechef.com/problems/FSQRT)

[Second Largest](https://www.codechef.com/problems/FLOW017)

[Small Factorial](https://www.codechef.com/problems/FLOW018)

[Chef and Operator](https://www.codechef.com/problems/CHOPRT)

[Helping Chef](https://www.codechef.com/problems/FLOW008)

[Valid Triangle](https://www.codechef.com/problems/FLOW013)

[Decrement and Increment](https://www.codechef.com/problems/DECINC)

[Chef and Remissness](https://www.codechef.com/problems/REMISS)

[Mahasena](https://www.codechef.com/problems/AMR15A)

