# Codes discussed in the class

```java
package skilling4;

public class Modularization {
	public static int n= 10;
	
	
	static {
	for(int i=1; i<=n; i++)
		System.out.print(i+ ", ");
	}

	static {
		System.out.println("This is the first static block");
	}
	public static void main(String args[])
	{
		
	}
}

```

```java
package skilling4;

public class ModularizationMethodLevel {
	public static int n=10;
	
	public static void printN()
	{
		for(int i=1; i<= n; i++)
			System.out.print(i + ", ");
	}
	
	
	public static void main(String args[])
	{
		printN();
		n = 20;
		System.out.println();
		printN();
	}
}

```
```java
package skilling4;

public class PrintN {
	public static int n;
	
	public static void printN()
	{
		for (int i=1; i<=n; i++)
		{
			System.out.print(i + ", ");
		}
	}

}

```
```java
package skilling4;

public class Modularization3 {

	public static void main(String[] args) {
		PrintN.n = 10;
		PrintN.printN();
	}

}

```
```java
package p1;

public class PrintN {
	public static int n;
	
	public static void printN()
	{
		for (int i=1; i<=n; i++)
		{
			System.out.print(i + ", ");
		}
	}

}

```
```java
package p2;
import p1.PrintN;
public class Modularization3 {

	public static void main(String[] args) {
		PrintN.n = 10;
		PrintN.printN();
	}

}

```
```java
package bikePackage;

public class Bike {
	int speed;

	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		this.speed = speed;
	}
	
	public void printSpeed()
	{
		if(speed>=60)
			System.out.println("Over Speed...");
		else if(speed>= 40 && speed<=60)
			System.out.println("Average Speed...");
		else if(speed < 40)
			System.out.println("Low Speed...");
	}
}

```
```java
package bikePackage;

public class BikeDemo {

	public static void main(String[] args) {
		//create instance of Bike
		Bike myBike = new Bike();
		myBike.setSpeed(100);
		myBike.printSpeed();
		myBike.setSpeed(50);
		myBike.printSpeed();
		myBike.setSpeed(20);
		myBike.printSpeed();

	}

}

```
```java
package problem3;

public class Divisiblity {
	int n;
	
	public void checkDivisibility()
	{
		//your logic goes here
		
	}
}

```
```java
package problem3;

public class DivisibilityDemo {

	public static void main(String[] args) {
		Divisiblity obj = new Divisiblity();
		obj.n = 21;
		obj.checkDivisibility();
		
		obj.n = 14;
		obj.checkDivisibility();
		
		obj.n = 15;
		obj.checkDivisibility();
		
		obj.n = 10;
		obj.checkDivisibility();
	}

}

```

```java
package priblem1;

import java.lang.Math;


public class Circle {
	private double radius;

	public double getRadius() {
		return radius;
	}

	public boolean setRadius(double radius) {
		if(radius<1)
			return false;
		this.radius = radius;
		return true;
	}
	
	public double area() {
		//logic for area calculation
		double a = Math.PI;
		return a;
	}
	
	public double circumference() {
		//logic for circum calculation
		
		return 0.0;
	}
	
	public String toString()
	{
		String s = String.format("Radius: %f\nArea: %f\nCircumference: %f", this.getRadius(), this.area(), this.circumference() );
		return s;
	}
	
}

```
```java
package priblem1;

public class CircleDemo {

	public static void main(String[] args) {
		Circle c1 = new Circle();
		if(c1.setRadius(10.0)==true) {
			//take action
			double a = c1.area();
			double circum = c1.circumference();
		}
		else {
		// take no action
		}
		
		Circle c2 = new Circle();
		if(c1.setRadius(10.0)==true) {
			//take action
			double a = c2.area();
			double circum = c2.circumference();
		}
		else {
		// take no action
		}
		
		System.out.println(c1);
		System.out.println(c2);
	}

}

```
