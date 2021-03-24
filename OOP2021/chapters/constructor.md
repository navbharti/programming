# Constructor in Java
# Rules for creating Java constructor
A **constructor** is a special type of *method* which is called when an object of a class is created. The *constructor does not have a return* type.

There are **two rules** defined for the constructor.

1. Constructor *name must be the same* as its class name
1. A Constructor must have *no explicit return type*
1. A Java constructor cannot be **abstract**, **static**, **final**, and **synchronized**

`Note:` We can use access modifiers while declaring a constructor. It controls the object creation. In other words, we can have **private**, **protected**, **public** or **default** constructor in Java.

![](https://static.javatpoint.com/images/core/java-constructor.png)


`Rule:` If there is no constructor in a class, compiler automatically creates a default constructor.

![](https://static.javatpoint.com/images/default-constructor1.png)

The default constructor is used to provide the **default values** to the object like 0, null, etc., depending on the type.

A constructor which has a specific number of parameters is called a **parameterized constructor**.

The parameterized constructor is used to provide different values to distinct objects or variables. 

# Constructor Overloading in Java

A constructor is just like a method but without return type. Similar to method overloading, constructor can also be overloaded.

**Costructor Overloading**: Having more than one constructor with different parameter lists. 

Different constructors definitions are differentiated by the compiler by the number of parameters in the list and their types.

![](https://static.javatpoint.com/images/constructor-vs-method-in-java.jpg)

# Java Copy Constructor
There is no copy constructor in Java but we can make constructor to work like copy constructor like in c++.

1. By constructor
1. By assigning the values of one object into another
1. By clone() method of Object class

# Using this() in constructor overloading
`this()` reference can be used during constructor overloading to call default constructor implicitly from parameterized constructor. Please note, this() should be the first statement inside a constructor.

```java
// Java program to illustrate role of this() in
// Constructor Overloading
class Box
{
	double width, height, depth;
	int boxNo;

	// constructor used when all dimensions and
	// boxNo specified
	Box(double w, double h, double d, int num)
	{
		width = w;
		height = h;
		depth = d;
		boxNo = num;
	}

	// constructor used when no dimensions specified
	Box()
	{
		// an empty box
		width = height = depth = 0;
	}

	// constructor used when only boxNo specified
	Box(int num)
	{
		// this() is used for calling the default
		// constructor from parameterized constructor
		this();

		boxNo = num;
	}

	public static void main(String[] args)
	{
		// create box using only boxNo
		Box box1 = new Box(1);

		// getting initial width of box1
		System.out.println(box1.width);
	}
}

```
this() should be the very first statement in the constructor definition body otherwise will give error.

```java
Box(int num)
{
    boxNo = num;

    /* Constructor call must be the first
       statement in a constructor */
    this();  /*ERROR*/
}
```

# Points be Remember
1. Constructor calling must be the first statement of constructor in Java.
1. If we have defined any parameterized constructor, then compiler will not create default constructor and vice versa if we don’t define any constructor, the compiler creates the default constructor(also known as no-arg constructor) by default during compilation
1. Recursive constructor calling is invalid in java.

# Constructor Chaining In Java

Constructor chaining is the process of calling one constructor from another constructor with respect to current object.

Constructor chaining can be done in two ways:

1. **Within same class**: It can be done using this() keyword for constructors in same class
1. **From base class:** by using super() keyword to call constructor from the base class.

* Constructor chaining occurs through inheritance. 
* A sub class constructor’s task is to call super class’s constructor first. This ensures that creation of sub class’s object starts with the initialization of the data members of the super class. 
* There could be any numbers of classes in inheritance chain. 
* Every constructor calls up the chain till class at the top is reached.

![](https://media.geeksforgeeks.org/wp-content/uploads/Constructor-Chaining-In-Java1.png)
# Rules of constructor chaining :

1. The this() expression should always be the first line of the constructor.
1. There should be at-least be one constructor without the this() keyword (constructor 3 in above example).
1. Constructor chaining can be achieved in any order.

# Constructor Chaining to other class using super() keyword :

```java
// Java program to illustrate Constructor Chaining to
// other class using super() keyword
class Base
{
	String name;

	// constructor 1
	Base()
	{
		this("");
		System.out.println("No-argument constructor of" +
										" base class");
	}

	// constructor 2
	Base(String name)
	{
		this.name = name;
		System.out.println("Calling parameterized constructor"
											+ " of base");
	}
}

class Derived extends Base
{
	// constructor 3
	Derived()
	{
		System.out.println("No-argument constructor " +
						"of derived");
	}

	// parameterized constructor 4
	Derived(String name)
	{
		// invokes base class constructor 2
		super(name);
		System.out.println("Calling parameterized " +
						"constructor of derived");
	}

	public static void main(String args[])
	{
		// calls parameterized constructor 4
		Derived obj = new Derived("test");

		// Calls No-argument constructor
		// Derived obj = new Derived();
	}
}

```

# Alternative method : using Init block :
Init block is executed ever before any constructor is executed.

If more than one blocks are there then those blocks are executed in the same sequence how they are ordered.

```java
class Temp
{
	// block to be executed before any constructor.
	{
		System.out.println("init block");
	}

	// no-arg constructor
	Temp()
	{
		System.out.println("default");
	}

	// constructor with one arguemnt.
	Temp(int x)
	{
		System.out.println(x);
	}

	public static void main(String[] args)
	{
		// Object creation by calling no-argument
		// constructor.
		new Temp();

		// Object creation by calling parameterized
		// constructor with one parameter.
		new Temp(10);
	}
}

```

```java
class Temp
{
	// block to be excuted first
	{
		System.out.println("init");
	}
	Temp()
	{
		System.out.println("default");
	}
	Temp(int x)
	{
		System.out.println(x);
	}

	// block to be executed after the first block
	// which has been defined above.
	{
		System.out.println("second");
	}
	public static void main(String args[])
	{
		new Temp();
		new Temp(10);
	}
}

```

# Code Discussed in the class on Date: 24.03.2021 
**Rectangle.java**

```java
package constructordemo;

public class Rectangle {
	double l;
	double b;
	
	public Rectangle() {
		l = 10;
		b = 20;
		System.out.println("Constructor Called!!!");
	}
	
	public Rectangle(double a) {
		l = a;
		b = a;
		System.out.println("Constructor with one value is called!!!");
	}
	
	public Rectangle(double a, double b) {
		this();
		l = a;
		this.b = b;
		System.out.println("Constructor with two values is called!!!");
	}
	
	public Rectangle(Rectangle obj) {
		this.l = obj.l;
		this.b = obj.b;
		System.out.println("Copy Constructor!!!");
	}
	public double area() {
		return l*b;
	}

}

```
**RectangleDemo.java**

```java
package constructordemo;

public class RectangleDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle rec; //reference variable
		rec = new Rectangle();
		System.out.println("Area: "+rec.area());
		
		Rectangle obj1 = new Rectangle(12.0);
		double a = obj1.area();
		System.out.println("Area: "+a);
		
		Rectangle obj2 = new Rectangle(12.0, 15.0);
		double b = obj2.area();
		System.out.println("Area: "+b);
		
		Rectangle obj3 = new Rectangle(obj2);
		double c = obj3.area();
		System.out.println("Area: "+c);
	}

}

```
**Output:**

```console
Constructor Called!!!
Area: 200.0
Constructor with one value is called!!!
Area: 144.0
Constructor Called!!!
Constructor with two values is called!!!
Area: 180.0
Copy Constructor!!!
Area: 180.0
```
