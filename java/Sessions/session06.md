# Session Six: Modularization Class and Package Level

## 1. Apply modularization – Class and package level.
## 2. Understand the usage of access specifiers – public, private and default.

```
Modularize the Cuboid class to a package level 3 with appropriate access specifiers
```

```
To the above modularized code, add a method isCube () that returns true if all dimensions are 3 same, else returns false.
```
     
```java
//Predict the Output of the following:
class Access {
    public static int x;
    private static int y;
    public static void cal(int a,int b) {
        x = a + 1;
        y = b; }
    }
    public class Access_Specifier {
    public static void main(String args[]) {
        Access.cal(2, 3);
        System.out.println(Access.x + " " + Access.y);
    } 
}
```

```
1. Create a class Student with id, marks for 3 subjects, total as static variables, static method to computethe total, main method to print the student information. Modularize the code to class and package levels.
```