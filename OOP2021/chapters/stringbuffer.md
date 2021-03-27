# StringBuffer
StringBuffer is used to create **modifiable** String objects. We can use StringBuffer to **append**, **reverse**, **replace**, **concatenate** and **manipulate** Strings or sequence of characters. Corresponding methods under StringBuffer class are respectively created to adhere to these functions.

Strings are known to be **immutable** or **un-editable**, unless overwritten upon. 

* StringBuffer is much alike the String class, but with **mutability** features.
* Unlike Strings where the **length and memory allocation are final**, StringBuffer has existing methods to modify these properties.
* StringBuffer is **thread safe**, most of it’s methods are **synchronized**. So StringBuffer object can’t be accessed or used by multiple threads at the same time.
* **java.lang.StringBuffer** extends AbstractStringBuilder abstract class.
* StringBuffer inherits clone(), equals(), finalize(), getClass(), hashCode(), notify() and notifyAll() methods from java.lang.Object super class.
* StringBuffer implements CharSequence, Appendable and Serializable interfaces.
* StringBuffer **capacity()** method can be used to retrieve the memory available for new character sequences to be added, beyond which the allocation will occur.
* Compared to StringBuilder Class, StringBuffer operates slower due to synchronization.

## StringBuffer Constructors
StringBuffer(): Creates a StringBuffer with empty content and 16 reserved characters by default.
**StringBuffer**:  Creates a StringBuffer with empty content and 16 reserved characters by default.

```java
StringBuffer sb = new StringBuffer();

```
Creates a StringBuffer with the passed argument as the size of the empty buffer.

```java
StringBuffer sb = new StringBuffer(20);
```
Creates a StringBuffer with the passed String as the initial content of the buffer. 16 contingent memory characters are pre-allocated, not including the buffer, for modification purposes.

```java
StringBuffer sb = new StringBuffer("Hello World!");

```
## StringBuffer Methods
* length(): Returns the StringBuffer object’s length.
* capacity(): Returns the capacity of the StringBuffer object.

```java
public class StringBufferExample {

	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer("Hello");
		int sbLength = sb.length();
		int sbCapacity = sb.capacity();
		System.out.println("String Length of " + sb + " is " + sbLength);
		System.out.println("Capacity of " + sb + " is " + sbCapacity);
	}

}


```
**append():** appends the specified argument string representation at the end of the existing String Buffer. This method is overloaded for all the primitive data types and Object.

```java
StringBuffer sb = new StringBuffer("Hello ");

sb.append("World ");

sb.append(2017);

System.out.println(sb);

StringBuffer sb = new StringBuffer("Hello World!");
```
**insert():** insert() method takes two parameters – the index integer value to insert a value and the value to be inserted. The index tells StringBuffer where to insert the passed character sequence. Again this method is overloaded to work with primitive data types and Objects.

```java
StringBuffer sb = new StringBuffer("HelloWorld ");

sb.insert(5, " ");

sb.insert(sb.length(), 2017);

System.out.println(sb);
```
**reverse()**: Reverses the existing String or character sequence content in the buffer and returns it. The object must have an existing content or else a NullPointerException is thrown.

```java
StringBuffer sb = new StringBuffer("Hello World");

System.out.println(sb.reverse());
```
**delete(int startIndex, int endIndex):** accepts two integer arguments. The former serves as the starting delete index and latter as the ending delete index. Therefore the character sequence between startIndex and endIndex–1 are deleted. The remaining String content in the buffer is returned.

```java

StringBuffer sb = new StringBuffer("Hello World");

System.out.println(sb.delete(5,11)); //prints Hello

```
**deleteCharAt(int index)**: deletes single character within the String inside the buffer. The location of the deleted character is determined by the passed integer index. The remaining String content in the buffer is returned.

```java
StringBuffer sb = new StringBuffer("Hello World!");

System.out.println(sb.deleteCharAt(11)); //prints "Hello World"
```

**replace(int startIndex, int endIndex, String str):** Accepts three arguments: first two being the starting and ending index of the existing String Buffer. Therefore the character sequence between startIndex and endIndex–1 are removed. Then the String passed as third argument is inserted at startIndex.

```java

StringBuffer sb = new StringBuffer("Hello World!");

System.out.println(sb.replace(6,11,"Earth")); //prints "Hello Earth!"
```

**ensureCapacity()**: 
This method is used to ensure minimum capacity of StringBuffer object.

If the argument of the ensureCapacity() method is less than the existing capacity, then there will be no change in existing capacity.

If the argument of the ensureCapacity() method is greater than the existing capacity, then there will be change in the current capacity using following rule: **newCapacity = (oldCapacity*2) + 2.**

```java

public class Demo {
	public static void main(String[] args) {
		StringBuffer str = new StringBuffer();
		System.out.println( str.capacity()); //output: 16 (since empty constructor reserves space for 16 characters)
		str.ensureCapacity(30); //greater than the existing capacity
		System.out.println( str.capacity()); //output: 34 (by following the rule - (oldcapacity*2) + 2.) i.e (16*2)+2 = 34.
	}
}
```
## Complete Demo Program
```java
package stringdemo;

public class StringDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s = "programming";
		System.out.println("String Length: "+s.length());
		System.out.println(s.substring(1,4));
		String s1 = "Hello";
		String s2 = "Hello";
		String s3 = new String("Hellowold");
		System.out.println("s1==s2: "+s1==s2);
		System.out.println("s.equals(s2): "+s1.equals(s2));
		String s4 = "Welcome to klu";
		System.out.println(s4.replace('e', 'E'));
		System.out.println(s4.replace("klu", "KLU"));
		System.out.println(s4.charAt(11));
		System.out.println(s4.indexOf('e'));
		System.out.println(s4.indexOf('e', 4));
		System.out.println(s4.indexOf("klu"));
		
		System.out.println(s2.compareTo(s3));
		String s5 = "HelloWorld";
		System.out.println(s3.compareTo(s5));
		System.out.println(s3.compareToIgnoreCase(s5));
		
		String str1 = "     Learn   Java Programming ";
		String str2 = "Learn\nJava Programming\n\n   ";

		System.out.println(str1.trim());
		System.out.println(str2.trim());
		
		
		String language = "Java";
		int number = 30;
		String result;

		// format object as a string
		result = String.format("Language: %s", language);
		System.out.println(result); // Language: Java

		// format number as a hexadecimal number
		result = String.format("Hexadecimal Number: %X", number); // 1e
		System.out.println(result); // Hexadecimal Number: 1e
		float f = 3.5f;
		System.out.println(String.format("%.2f", f));
		
		String date = "23:03:2021";
		String[] result1 = date.split(":");
		System.out.println(result1[0]+" "+result1[1]+" "+result1[2]);
		
		 str1 = "Learn Java";
		 str2 = "Java123";

		// convert to lower case letters
		System.out.println(str1.toLowerCase()); // "learn java"
		System.out.println(str2.toLowerCase()); // "java123"
		
		System.out.println(str1.toUpperCase()); // "learn java"
		System.out.println(str2.toUpperCase()); // "java123"
	
		String str = "Java Programming";

		// creating a char array
		char[] result2;

		result2 = str.toCharArray();
		System.out.println(result2); // Java Programming
		for (int i=0; i<result2.length; i++) {
			System.out.println(result2[i]);
		}
	}

}

```



1. `StringTokenizer(String str)` : str is string to be tokenized.
Considers default delimiters like new line, space, tab, carriage return and form feed.

1. `StringTokenizer(String str, String delim) `:
delim is set of delimiters that are used to tokenize
the given string.

1. `StringTokenizer(String str, String delim, boolean flag)`:
 The first two parameters have same meaning.  The flag 
serves following purpose.

```java
/* A Java program to illustrate working of StringTokenizer
class:*/
import java.util.*;
public class NewClass
{
	public static void main(String args[])
	{
		System.out.println("Using Constructor 1 - ");
		StringTokenizer st1 =
			new StringTokenizer("Hello Geeks How are you", " ");
		while (st1.hasMoreTokens())
			System.out.println(st1.nextToken());

		System.out.println("Using Constructor 2 - ");
		StringTokenizer st2 =
			new StringTokenizer("JAVA : Code : String", " :");
		while (st2.hasMoreTokens())
			System.out.println(st2.nextToken());

		System.out.println("Using Constructor 3 - ");
		StringTokenizer st3 =
			new StringTokenizer("JAVA : Code : String", " :", true);
		while (st3.hasMoreTokens())
			System.out.println(st3.nextToken());
	}
}

```
`public boolean hasMoreTokens()`
**Returns**: True if and only if next token to the current 
         position in the string exists, else false.
         

`public String nextToken()`
**Return**: the next token from the given StringTokenizer
         if present.
Throws: NoSuchElementException - if no more token are left.

`public int countTokens()`
**Return** : the number of tokens remaining in the 
         string using the current delimiter set.

```java
// Program in Java illustrates the methods of StringTokenizer class:
// hasMoreToken	 nextToken countTokens
import java.util.*;
public class NewClass
{
	public static void main(String args[])
	{
		String mydelim = " : ";
		String mystr = "JAVA : Code : String : Tokenizer : Geeks";

		// Use of Constructor 2
		// Here we are passing Delimiter - "mydelim"
		StringTokenizer geeks3 =
						new StringTokenizer(mystr, mydelim);

		// Printing count of tokens and tokens
		int count = geeks3.countTokens();
		System.out.println("Number of tokens : " + count + "\n");
		for (int i = 0; i <count; i++)
			System.out.println("token at [" + i + "] : "
							+ geeks3.nextToken());

		// .hasMoreTokens() method checks for more Tokens.
		// Here not working as no Tokens left
		while (geeks3.hasMoreTokens())

			// .nextToken is method is returning next token.
			System.out.println(geeks3.nextToken());
	}
}

```

`public Object nextElement()`
**Return**: the next token from the given StringTokenizer.
Throws:NoSuchElementException - if there are no more tokens left.

`public boolean hasMoreElements()`
**Return**: true if tokens are present in the string, else false

```java
// Program in Java illustrates the methods of StringTokenizer
// class: hasMoreElements, nextElement and nextElement
import java.util.*;
public class NewClass
{
	public static void main(String args[])
	{
		String mydelim = " : ";
		String mystr = "JAVA : Code : String : Tokenizer : Geeks";

		// Use of Constructor 2
		// Here we are passing Delimiter - "mydelim"
		StringTokenizer geeks =
					new StringTokenizer(mystr, mydelim);

		// .countTokens() method counts no. of tokens present.
		int count = geeks.countTokens();
		System.out.println("Number of tokens : " + count);

		// use of hasMoreElements() - true if tokens are present
		while (geeks.hasMoreElements())

			// use of nextElement() - returns the next token
			System.out.println(geeks.nextElement());
	}
}

```
# StringTokenizerDemo.java

```java
package stringtokenizer;

import java.util.StringTokenizer;

public class StringTokenizerDemo {
	public static void main(String[] args) {
		StringTokenizer st = new StringTokenizer("Welcome to klu Btech");
		if(st.hasMoreTokens())
		{
			System.out.println("Token: "+st.nextToken());
		}
		
		System.out.println(st.nextToken());
		System.out.println(st.nextToken());
		System.out.println(st.nextToken());
		//System.out.println(st.nextToken());
		
		String date = "27:03:2021";
		StringTokenizer st1 = new StringTokenizer(date, ":");
		System.out.println("Total Tokens: "+st1.countTokens());
		while(st1.hasMoreTokens())
		{
			System.out.println(st1.nextToken());
		}
		
		StringTokenizer st2 = new StringTokenizer(date, ":", true);
		System.out.println("Total Tokens: "+st2.countTokens());
		while(st2.hasMoreTokens())
		{
			System.out.println(st2.nextToken());
		}
	}

}

```

# StringBufferDemo

```java
package sringbuffer;

public class StringBufferDemo {

	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer();
		int len = sb.capacity();
		System.out.println("Total Capacity of sb: "+len);
		System.out.println("Length of sb: "+sb.length());
		
		StringBuffer sb1 = new StringBuffer(30);
		len = sb1.capacity();
		System.out.println("Total Capacity of sb1: "+len);
		System.out.println("Length of sb1: "+sb1.length());
		
		StringBuffer sb2 = new StringBuffer("kluniversity");
		len = sb2.capacity();
		System.out.println("Total Capacity of sb2: "+len);
		System.out.println("Length of sb2: "+sb2.length());
		
		sb.append("kluniversity");
		System.out.println(sb.capacity());
		sb.append("hello");
		System.out.println(sb.capacity());
		System.out.println(sb);
		sb.insert(12, " ");
		System.out.println(sb);
		System.out.println(sb.reverse());
		sb.reverse();
		sb.delete(3,12);
		
		System.out.println("sb.delete(3,12): "+sb);
		sb.deleteCharAt(3);
		System.out.println("sb.deleteCharAt(3): "+sb);
		sb.insert(3, " ");
		sb.replace(0, 3, "KLU");
		System.out.println("sb.repalce(0, 3, \"KLU\"): "+sb);
	}

}

```