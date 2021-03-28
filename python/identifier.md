# Identifiers
* A Name in Python Program is called Identifier.
* It can be Class Name OR Function Name OR Module Name OR Variable Name.

`a = 10`

## Rules to define Identifiers in Python

### 1.	The only allowed characters in Python are

* alphabet symbols(either lower case or upper case)
* digits(0 to 9)
* underscore symbol(_)

By mistake if we are using any other symbol like `$ then we will get syntax error`.

* cash = 10 √
* ca$h =20 #Wrong

### 2.	Identifier should not starts with digit

* 123total #Wrong
* total123 √

### 3.	Identifiers are case sensitive. Of course Python language is case sensitive language.

* total=10
* TOTAL=999
* print(total) #10
* print(TOTAL) #999

### Identifier:

1. Alphabet Symbols (Either Upper case OR Lower case)
1. If Identifier is start with Underscore (_) then it indicates it is private.
1. Identifier should not start with Digits.
1. Identifiers are case sensitive.
1. We cannot use reserved words as identifiers  Eg: `def = 10 #Wrong`
1. There is no length limit for Python identifiers. But not recommended to use too lengthy identifiers.
1. Dollor ($) Symbol is not allowed in Python.

### Which of the following are valid Python identifiers?

1. 123total #Wrong
1. total123 √
1. java2share √
1. ca$h #Wrong
1. _abc_abc_ √
1. def #Wrong
1. if #Wrong

`Note:`

1. If identifier starts with _ symbol then it indicates that it is private
1. If identifier starts with __(Two Under Score Symbols) indicating that strongly private identifier.
1. If the identifier starts and ends with two underscore symbols then the identifier is language defined special name, which is also known as magic methods.
1. Eg: `__add__` 	

 
#  RESERVED WORDS
 
In Python some words are reserved to represent some meaning or functionality. Such types of words are called reserved words.

### There are 33 reserved words available in Python.

1. True, False, None
1. and, or ,not,is
1. if, elif, else
1. while, for, break, continue, return, in, yield
1. try, except, finally, raise, assert
1. import, from, as, class, def, pass, global, nonlocal, lambda, del, with

`Note:`

1. All Reserved words in Python contain only alphabet symbols.
1. Except the following 3 reserved words, all contain only lower case alphabet symbols.

* True
* False
* None

```python 
a = true #Wrong
a = True √
```
```python
>>> import keyword
>>> keyword.kwlist
['False', 'None', 'True', 'and', 'as', 'assert', 'break', 'class', 'continue', 'def', 'del', 'elif', 'else',
'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal', 'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield']
```