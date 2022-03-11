# Session Twelve

#Practice Problems

### Problem Statement-1
```
Design a class named BankAccount that contains: 
A private int data field named id for the account. 
A private float data field named balance for the account. 
A private float data field named annualInterestRate that stores the currentinterest rate. 
A constructor that creates an account with the specified id (default 0), initialbalance (default 100), and annual interest rate (default 0). 
The accessor and mutator methods for id, balance, and annualInterestRate. 
A method named getMonthlyInterestRate() that returns the monthlyinterest rate. 
A method named getMonthlyInterest() that returns the monthly interest. 
A method named withdraw that withdraws a specified amount from the account. 
A method named deposit that deposits a specified amount to the account. 

Draw the class diagram for the class, and then implement the class. 
(Hint: The method getMonthlyInterest() is to return the monthly interest amount, not the interest rate. Use this formula to calculate the monthly interest: 

balance * monthlyInterestRate

monthlyInterestRate is annualInterestRate / 12

Note that annualInterestRate is a percent (like 4.5%). You need to divide it by 100.) 

Write a test/drive code program that creates an Account object with an account id of 98769834, a balance of $65,000, and an annual interest rate of 6.5%. 
Use the withdraw method to withdraw $4,500, use the deposit method to deposit $5,000, and print the id, balance, monthly interest rate, and monthly interest.
```

### Problem Statement-2
```
(Check password) Some Company impose certain rules for passwords. 
Write a function that checks whether a string is a valid password. 
Suppose the password rules are as follows: 
- A password must have at least eight characters. 
- A password must consist of only letters and digits. 
- A password must contain at least two digits. 

Write a program that prompts the user to enter a password and displays valid password if the rules are followed or invalid password otherwise.
```

### Problem Statement-3
```
Design a class named Rectangle to represent a rectangle.
The class contains: Two data fields named width and height. 
A constructor that creates a rectangle with the specified width and height. 
The default values are 1 and 2 for the width and height, respectively. 
A method named getArea() returns the area of this rectangle. 
A method named getPerimeter() returns the perimeter. 

Draw the UML diagram for the class, and then implement the class. 
Write a test/drive program that creates two Rectangle objects—one with width 12 and height 45 and the other with width 8.5 and height 12.7. 
Display the width, height, area, and perimeter of each rectangle in this order.
```

### Problem Statement-4
```
Define a class called Bike that accepts a string and a float as input, and assigns those inputs respectively to two instance variables, color and price. 
Assign to the variable testOne an instance of Bike whose color is blue and whose price is 89.99. 
Assign to the variable testTwo an instance of Bike whose color is purple and whose price is 25.0.
Bike price should not be greater than 100.00. 
Use setters and getters. 
Include __str__() method to print price of a bike and color
```