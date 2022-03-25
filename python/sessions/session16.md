# Session Sixteen : Polymorphism: Static Polymorphism , Dynamic Polymorphism (Overriding)

## Operator Overloading in Python

In case of Inheritance by default all the attributes and all the methods are inheritade in Chile class.

When we redefine method body in Child class to the Inheritade method is called Method Overriding.

When in the same class same method performs different actions based on the number of arguments and types of arguments is called Method Overloading.

Similar to the Method Overloading we can redifine the action taken by any operator, that is called Operator Overloading.

```python
class ComplexNumber:
    def __init__(self, real, imag):
        self.real = real
        self.imag = imag

    def add(self, obj):
        real = self.real + obj.real
        imag = self.imag + obj.imag
        temp = ComplexNumber(real, imag)
        return temp

    def __add__(self, obj):
        real = self.real + obj.real
        imag = self.imag + obj.imag
        temp = ComplexNumber(real, imag)
        return temp

    def __sub__(self, obj):
        real = self.real - obj.real
        imag = self.imag - obj.imag
        temp = ComplexNumber(real, imag)
        return temp
    
    def __str__(self):
        s = "({}+{}j)".format(self.real, self.imag)
        return s

if __name__=="__main__":
    c1 = ComplexNumber(12, 8)
    c2 = ComplexNumber(7, 4)
    c3 = c1.add(c2)
    print(c1)
    print(c2)
    print(c3)

    c4 = c1 + c2
    print("c4: ", c4)

    c5 = c1 - c2
    print("c5: ", c5)

```



```python
class Rectangle:
    def __init__(self, l, b):
        self.l = l
        self.b = b

    def __add__(self, obj):
        a = Rectangle(self.l + obj.l, self.b + obj.b)
        return a

    def __sub__(self, obj):
        a = Rectangle(self.l - obj.l, self.b - obj.b)
        return a
        

    def __str__(self):
        s = "Length: {} and Breadth: {}".format(self.l, self.b)
        return s
    
r1 = Rectangle(12, 8)
r2 = Rectangle(6, 4)
print(r1)
print(r2)
r3 = r1+r2
print(r3)
r4 = r1 - r2
print(r4)

```

Implement the following for ComplexNumver as well as Rectangle classes.

## List of magic methods for Operator overloading

|Operator|	Magic Method|
|--------|--------------|
|+|	`__add__(self, other)`|
|–	| `__sub__(self, other)`|
|*	|`__mul__(self, other)`|
|/	|`__truediv__(self, other)`|
|//	|`__floordiv__(self, other)`|
|%	|`__mod__(self, other)`|
|**	|`__pow__(self, other)`|
|>>	|`__rshift__(self, other)`|
|<<	|`__lshift__(self, other)`|
|&	|`__and__(self, other)`|
| 	\| |`__or__(self, other)`|
|^	|`__xor__(self, other)`|
| |
|<	|`__lt__(self, other)`|
|>	|`__gt__(self, other)`|
|<=	|`__le__(self, other)`|
|>=	|`__ge__(self, other)`|
|==	|`__eq__(self, other)`|
|!=	|`__ne__(self, other)`|
| |
|-=	|`__isub__(self, other)`|
|+=	|`__iadd__(self, other)`|
|*=	|`__imul__(self, other)`|
|/=	|`__idiv__(self, other)`|
|//= |`__ifloordiv__(self, other)`|
|%=	|`__imod__(self, other)`|
|**=|`__ipow__(self, other)`|
|>>=|`__irshift__(self, other)`|
|<<=|`__ilshift__(self, other)`|
|&=	|`__iand__(self, other)`|
| \|= |`__ior__(self, other)`|
|^=	|`__ixor__(self, other)`|
| | 