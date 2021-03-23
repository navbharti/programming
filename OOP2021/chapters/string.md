# Introducing String in java
A String variable contains a collection of characters surrounded by double quotes:

## Getting length of a string str.length()

```java
String s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
System.out.println("The length of the txt string is: " + s.length());
```
## Join two Strings

```java 
// create first string
    String s1 = "Java ";

    // create second
    String s2 = "Programming";
    

    // join two strings
    String joinedStr = s1.concat(s2);
    System.out.println("Joined String: " + joinedStr);
```

We can also join two strings using the + operator in Java. To learn more, visit Java String concat().

## Compare two Strings (true/false)

```java
// create 3 strings
    String first = "java programming";
    String second = "java programming";
    String third = "python programming";

    // compare first and second strings
    boolean result1 = first.equals(second);
    System.out.println("Strings first and second are equal: " + result1);

    // compare first and third strings
    boolean result2 = first.equals(third);
    System.out.println("Strings first and third are equal: " + result2);
    
```

* `==` checks if the reference to string objects are equal or not. Here, name1 and name2 are two different references. Hence, it returns false.
* `equals()` checks if the content of the string object are equal. Here, the content of both the objects name1 and name2 is the same Programiz. Hence, it returns true.

## Methods of Java String

Methods	Description

1. `substring()`	returns the substring of the string
1. `replace()`	replaces the specified old character with the specified new character
1. `charAt()`	returns the character present in the specified location
1. `getBytes()`	converts the string to an array of bytes
1. `indexOf()`	returns the position of the specified character in the string
1. `compareTo()`	compares two strings in the dictionary order
1. `trim()`	removes any leading and trailing whitespaces
1. `format()`	returns a formatted string
1. `split()`	breaks the string into an array of strings
1. `toLowerCase()`	converts the string to lowercase
1. `toUpperCase()`	converts the string to uppercase
1. `valueOf()`	returns the string representation of the specified argument
1. `toCharArray()`	converts the string to a char array

## Escape character in Java Strings

```java
// use the escape character
String example = "This is the \"String\" class.";
```

## Java Strings are Immutable
once we create a string, we cannot change that string.

```java
// create a string
String example = "Hello! ";

// add another string "World"
// to the previous tring example
example = example.concat(" World");
```
1. JVM takes the first string "Hello! "
1. creates a new string by adding "World" to the first string
1. assign the new string "Hello! World" to the example variable
1. the first string "Hello! " remains unchanged

## Creating strings using the new keyword
The String class provides various other constructors to create strings. 

```java
// create a string using the new keyword
String name = new String("Java String");
```

## Create String using literals vs new keyword
JVM maintains a string pool to store all of its strings inside the memory. The string pool helps in reusing the strings.

* If the string already exists, the new string is not created. Instead, the new reference points to the existing string.
* If the string doesn't exist, the new string is created.

## Java String substring()

```java
string.substring(int startIndex, int endIndex)
```
You will get an error if,

* startIndex/endIndex is negative or greater than string's length
* startIndex is greater than endIndex

```java
String str1 = "program";

// from the first character to the end
System.out.println(str1.substring(0));  // program

// from the 4th character to the end
System.out.println(str1.substring(3));  // gram

// from 1st to the 7th  character
System.out.println(str1.substring(0, 7));  // program

// from 1st to the 5th  character
System.out.println(str1.substring(0, 5));  // progr

// from 4th to the 5th character
System.out.println(str1.substring(3, 5));  // gr
```
## Java String replace()

The Java String replace() method replaces each matching occurrences of the old character/text in the string with the new character/text.

```java
string.replace(char oldChar, char newChar)

or 

string.replace(CharSequence oldText, CharSequence newText)

```

```java
     String str1 = "abc cba";

    // all occurrences of 'a' is replaced with 'z'
    System.out.println(str1.replace('a', 'z')); // zbc cbz

    // all occurences of 'L' is replaced with 'J'
    System.out.println("Lava".replace('L', 'J')); // Java

    // character not in the string
    System.out.println("Hello".replace('4', 'J')); // Hello
```
If the substring to be replaced is not in the string, replace() returns the original string.

```java
String str1 = "C++ Programming";

// all occurrences of "C++" is replaced with "Java"
System.out.println(str1.replace("C++", "Java")); // Java Programming

// all occurences of "aa" is replaced with "zz"
System.out.println("aa bb aa zz".replace("aa", "zz")); // zz bb zz zz

// substring not in the string
System.out.println("Java".replace("C++", "C")); // Java
```
## Java String charAt()
The Java String charAt() method returns the character at the specified index.

```java
string.charAt(int index)

```
 If the index passed to chartAt() is negative or out of bounds, it throws an exception.

```java
String str1 = "Learn Java";
String str2 = "Learn\nJava";

// first character
System.out.println(str1.charAt(0)); // 'L'

// seventh character
System.out.println(str1.charAt(6)); // 'J'

// sixth character
System.out.println(str2.charAt(5)); // '\n'
```
## Java String indexOf()
The String indexOf() method returns the index of the first occurrence of the specified character/substring within the string.

```java
string.indexOf(int ch, int fromIndex)

or 

string.indexOf(String str, int fromIndex)

```
* returns the index of the first occurrence of the specified character/string
* returns -1 if the specified character/string is not found.

```java
String str1 = "Learn Java";
int result;

// getting index of character 'J'
result = str1.indexOf('J');
System.out.println(result); // 6

// the first occurrence of 'a' is returned
result = str1.indexOf('a');
System.out.println(result); // 2

// character not in the string
result = str1.indexOf('j');
System.out.println(result); // -1

// getting the index of "ava"
result = str1.indexOf("ava");
System.out.println(result); // 7

// substring not in the string
result = str1.indexOf("java");
System.out.println(result); // -1

// index of empty string in the string
result = str1.indexOf("");
System.out.println(result); // 0
```
If the empty string is passed, indexOf() returns 0 (found at the first position. It is because the empty string is a subset of every substring.

```java
String str1 = "Learn Java programming";
    int result;

    // getting the index of character 'a'
    // search starts at index 4
    result = str1.indexOf('a', 4);
    System.out.println(result); // 7

    // getting the index of "Java"
    // search starts at index 8
    result = str1.indexOf("Java", 8);
    System.out.println(result); // -1
```
## Java String compareTo()
The Java String compareTo() method compares two strings lexicographically (in the dictionary order). The comparison is based on the Unicode value of each character in the strings.

```java
string.compareTo(String str)

```
* returns 0 if the strings are equal
* returns a negative integer if the string comes before the str argument in the dictionary order
* returns a positive integer if the string comes after the str argument in the dictionary order

```java
String str1 = "Learn Java";
String str2 = "Learn Java";
String str3 = "Learn Kolin";
int result;

// comparing str1 with str2
result = str1.compareTo(str2);
System.out.println(result); // 0

// comparing str1 with str3
result = str1.compareTo(str3);
System.out.println(result); // -1

// comparing str3 with str1
result = str3.compareTo(str1);
System.out.println(result); // 1
```
check if two strings are equal

```java
String str1 = "Learn Python";
String str2 = "Learn Java";
    
// if str1 and str2 are equal, the result is 0
if (str1.compareTo(str2) == 0) {
    System.out.println("str1 and str2 are equal");
}
else {
    System.out.println("str1 and str2 are not equal");
```
## compareTo() With Case
```java
String str1 = "Learn Java";
String str2 = "learn Java";
int result;

// comparing str1 with str2
result = str1.compareTo(str2);
System.out.println(result); // -32
```
## Java String compareToIgnoreCase()
The Java String compareTo() method compares two strings lexicographically (in the dictionary order), ignoring case differences.

```java
string.compareToIgnoreCase(String str)

```
```java
String str1 = "Learn Java";
String str2 = "learn java";
String str3 = "Learn Kolin";
int result;

// comparing str1 with str2
result = str1.compareToIgnoreCase(str2);
System.out.println(result); // 0

// comparing str1 with str3
result = str1.compareToIgnoreCase(str3);
System.out.println(result); // -1

// comparing str3 with str1
result = str3.compareToIgnoreCase(str1);
System.out.println(result); // 1
```
## Java String trim()
The Java String trim() method returns a string with any leading (starting) and trailing (ending) whitespace removed.

* returns a string with leading and trailing whitespace removed
* If there are no whitepace in the start or the end, it returns the original string.

In programming, **whitespace** is any character or series of characters that represent horizontal or vertical space. For example: space, newline \n, tab \t, vertical tab \v etc.

```java
String str1 = "     Learn   Java Programming ";
String str2 = "Learn\nJava Programming\n\n   ";

System.out.println(str1.trim());
System.out.println(str2.trim());
```
## Java String format()
The Java String format() method returns a formatted string based on the argument passed.

```java
String.format(String format, Object... args)

```
* format() is a static method. We call the format() method using the class name String.
* ... in the above code signifies you can pass more than one object to format().

```java
String language = "Java";
int number = 30;
String result;

// format object as a string
result = String.format("Language: %s", language);
System.out.println(result); // Language: Java

// format number as a hexadecimal number
result = String.format("Hexadecimal Number: %x", number); // 1e
System.out.println(result); // Hexadecimal Number: 1e
```

* %b, %B	"true" or "false" based on the argument
* %s, %S	a string
* %c, %C	a Unicode character
* %d	a decimal integer (used for integers only)
* %o	an octal integer (used for integers only)
* %x, %X	a hexadecimal integer (used for integers only)
* %e, %E	for scientific notation (used for floating-point numbers)
* %f	for decimal numbers (used for floating-point numbers)

```java
int n1 = 47;
float n2 = 35.864f;
double n3 = 44534345.76d;

// format as an octal number
System.out.println(String.format("n1 in octal: %o", n1));  // 57

// format as hexadecimal numbers
System.out.println(String.format("n1 in hexadecimal: %x", n1));  // 2f
System.out.println(String.format("n1 in hexadecimal: %X", n1));  // 2F

// format as strings
System.out.println(String.format("n1 as string: %s", n1));  // 47
System.out.println(String.format("n2 as string: %s", n2));  // 35.864

// format in scientific notation
System.out.println(String.format("n3 in scientific notation: %g", n3)); // 4.45343e+07
```

Using more than one format specifier

```java
int n1 = 47;
String text = "Result";

System.out.println(String.format("%s\nhexadecimal: %x", text, n1));
```
## Padding Numbers With Spaces and 0
```java
int n1 = 46, n2 = -46;
String result;

// padding number with spaces
// the length of the string will be 5
result = String.format("|%5d|", n1); // |   46|
System.out.println(result);

// padding number with numbers 0
// the length of the string will be 5
result = String.format("|%05d|", n1); // |00046|
System.out.println(result);

// using signs before numbers
result = String.format("%+d", n1); // +46
System.out.println(result);
result = String.format("%+d", n2); // -46
System.out.println(result);

// enclose negative number within parenthesis
// and removing the sign
result = String.format("%(d", n2); // (46)
System.out.println(result);
```
## Java String split()
The Java String split() method divides the string at the specified regex and returns an array of substrings.

```java
string.split(String regex, int limit)

```
**Note**: If the regular expression passed to split() is invalid, the split() method raises PatternSyntaxExpression exception.

```java
String vowels = "a::b::c::d:e";

// splitting the string at "::"
// storing the result in an array of strings
String[] result = vowels.split("::");

// converting array to string and printing it
System.out.println("result = " + Arrays.toString(result));
```
* If the limit parameter is 0 or negative, split() returns an array containing all substrings.
* If the limit parameter is positive (let's say n), split() returns the maximum of n substrings.

```java
String vowels = "a:bc:de:fg:h";

// splitting array at ":"

// limit is -2; array contins all substrings
String[] result = vowels.split(":", -2);
System.out.println("result when limit is -2 = " + Arrays.toString(result));

// limit is 0; array contains all substrings
result = vowels.split(":", 0);
System.out.println("result when limit is 0 = " + Arrays.toString(result));

// limit is 2; array contains a maximum of 2 substrings
result = vowels.split(":", 2);
System.out.println("result when limit is 2 = " + Arrays.toString(result));

// limit is 4; array contains a maximum of 4 substrings
result = vowels.split(":", 4);
System.out.println("result when limit is 4 = " + Arrays.toString(result));

// limit is 10; array contains a maximum of 10 substrings
result = vowels.split(":", 10);
System.out.println("result when limit is 10 = " + Arrays.toString(result));
```
## Java String toLowerCase()
The Java String toLowerCase() method converts all characters in the string to lower case characters.

```java
String str1 = "Learn Java";
String str2 = "Java123";

// convert to lower case letters
System.out.println(str1.toLowerCase()); // "learn java"
System.out.println(str2.toLowerCase()); // "java123"
```
## Java String toUpperCase()
The Java String toUpperCase() method converts all characters in the string to upper case characters.

```java
String str1 = "Learn Java";
String str2 = "Java123";

// convert to upper case letters
System.out.println(str1.toUpperCase()); // "LEARN JAVA"
System.out.println(str2.toUpperCase()); // "JAVA123"
```
## Java String valueOf()
The Java String valueOf() method returns the string representation of the argument passed.

* String.valueOf(boolean b)
* String.valueOf(char c)
* String.valueOf(char[] data)
* String.valueOf(double d)
* String.valueOf(float f)
* String.valueOf(int b)
* String.valueOf(long l)
* String.valueOf(Object o)

```java
int a = 5;
long l = -2343834L;
float f = 23.4f;
double d = 923.234d;

// convert numbers to strings
System.out.println(String.valueOf(a));  // "5"
System.out.println(String.valueOf(l));  // "-2343834"
System.out.println(String.valueOf(f));  // "23.4"
System.out.println(String.valueOf(d));  // "923.234"
```
```java
char c = 'J';
char ch[] = {'J', 'a', 'v', 'a'};

// convert char to string
System.out.println(String.valueOf(c));  // "J"

// convert char array to string
System.out.println(String.valueOf(ch));  // "Java"
```
## Subarray of a char Array to String

```java
char ch[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm'};
int offset = 2;
int length = 4;
String result;

// subarray {'o', 'g', 'r', 'm'} is converted to string
result = String.valueOf(ch, offset, length);
System.out.println(result);  // "ogrm"
```

Convert Object to String

```java
ArrayList<String> languages = new ArrayList<String>();
languages.add("Java");
languages.add("Python");
languages.add("Kotlin");

String result;

// Output: "[Java, Python, Kotlin]"
result = String.valueOf(languages);
System.out.println(result);
```
## Java String toCharArray()
The Java String toCharArray() method converts the string to a char array and returns it.

```java
string.toCharArray(int startIndex, int endIndex)

```
```java
String str = "Java Programming";

// creating a char array
char[] result;

result = str.toCharArray();
System.out.println(result); // Java Programming
```

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