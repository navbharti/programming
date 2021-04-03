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
