# Skilling Session (Even or Odd)

```java
package skilling;

public class EvenOrOdd {
	static int n; //class variable or static variable
	
	public static void main(String[] args) {
		//int n = 11; //local variable to main() method
		evenOrOdd(10);
	}
	
	static void evenOrOdd(int n) {
		if(n%2 == 0) { //static method can only access static members (static variable or static method)
			//True block
			System.out.println("Even Number");
		}
		else
		{
			//False Block
			System.out.println("Odd Number");
		}
	}
}

```
# Skilling Session (Swap)

```java
package skilling;

public class Swap {

	public static void main(String[] args) {
		int a = 10;
		int b = 20; //a=20 and b=10 is swapped
		System.out.println("Before Swapping a: "+ a + " b: "+ b);  //"Before Swapping a: " + "10" + " b: " + "20"
									//in println() before printing the value 
		//with temp variable							//every things get converted to string
		/*
		int temp = a;
		a = b;
		b = temp;
		*/
		//using + and -
		a = a+b;
		b = a-b;
		a = a-b;
		System.out.println("After Swapping a: "+ a + " b: "+ b);
		
		//using * and /
		a = 10;
		b = 20;
		System.out.println("Before Swapping a: "+ a + " b: "+ b);
		a = a*b;
		b = a/b;
		a = a/b;
		System.out.println("After Swapping a: "+ a + " b: "+ b);

		//using bitwise XOR
		//using * and /
		a = 10;
		b = 20;
		System.out.println("Before Swapping a: "+ a + " b: "+ b);
		a = a^b;
		b = a^b;
		a = a^b;
		System.out.println("After Swapping a: "+ a + " b: "+ b);
	}

}

```

# Skilling (Circle.java)

```java
package skilling2;

import java.lang.Math; //import Math class for PI value

public class Circle {
	//member variable part
	static double radius;  //class variable
	
	//member method part
	//method for area calculation
	static double area()
	{
		//method body
		double a = Math.PI * radius * radius; //PI is static final variable with value
		return a;
	}
	
	//method for perimeter caluculation
	static double perimeter()
	{
		//method body
		double a = 2 * Math.PI * radius;
		return a;
	}
	
	//main() method
	public static void main(String[] args)
	{
		//this is main method
		radius = 10.0; //assigning value to class variable
		double a = area();
		System.out.println("Area: "+a); //this will print area of circle 
		double p = perimeter();
		System.out.println("Perimeter: "+p); //this will print perimeter of circle
		
	}
}

```
# Skilling (PrimeNumber.java)

```java
package skilling2;
import java.lang.Math;

public class PrimeNumber {

	public static void main(String[] args) {
		int n = 7;
		int count = 0;
		for(int i=1; i<=n; i++)
		{
			//check for divisibility
			if(n%i == 0)
				count++;
		}
		
		//check count
		if(count==2)
			System.out.println("Prime Number");
		else
			System.out.println("Non-Prime Number");
	
		//shortcut
		boolean flag=false;
		for (int i=2; i<=Math.sqrt(n); i++)
		{
			if(n%i == 0)
			{
				flag = true;
				break;
			}
		}
		//check flag
		if(flag == false)
			System.out.println("Prime Number");
		else 
			System.out.println("Non-Prime Number");
	}

}

```

# Skilling (Rectangle.java)

```java
package skilling2;

public class Rectangle {
	//member variables part
	static double length;
	static double width;
	
	//member methods part
	//method to calculate area of Rectangle
	static double area()
	{
		//method body
		double result = length * width;
		return result;
	}
	
	//main() method
	public static void main(String arg[])
	{
		length = 10.0;
		width = 4.0;
		
		double a = area();
		System.out.println("Rectangel Area: "+ a);
		
	}

}

```