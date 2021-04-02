```java
package skilling17;

import java.util.Scanner;

public class MenuDrivenPrograms {

	//definition
	static	void menu() {
			System.out.println("Main Menu");
			System.out.println("1. Fried Rice");
			System.out.println("2. Veg Biriyani");
			System.out.println("3. Chicken Biriyani");
			System.out.println("4. Remove Item from order");
			System.out.println("5. Display Order");
			System.out.println("6. Generate Bill");
			System.out.println("7. Exit...");
			System.out.println("Your choice...");
		}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Item placeOrder[] = new Item[10];
		int index = -1;
		boolean flag=true;
		while(flag) {
		menu(); //call
		
		int choice = sc.nextInt();
		switch(choice) {
		case 1:
			//create object of Item
			Item obj = new Item();
			int id = 123;
			String name = "Fried Rice";
			double price = 60.0;
			System.out.println("How manu Units? ");
			int unit = sc.nextInt();
			obj.setId(id);
			obj.setiName(name);
			obj.setPrice(price);
			obj.setUnit(unit);
			//insert in placeOrder array
			index++;
			placeOrder[index] = obj;
			break;
			
		case 2: 
			//create object of Item
			obj = new Item();
			id = 124;
			name = "Veg Biriyani";
			price = 160.0;
			System.out.println("How manu Units? ");
			unit = sc.nextInt();
			obj.setId(id);
			obj.setiName(name);
			obj.setPrice(price);
			obj.setUnit(unit);
			//insert in placeOrder array
			index++;
			placeOrder[index] = obj;
			break;
			
		case 3:
			//create object of Item
			 obj = new Item();
			 id = 125;
			 name = "Chicken Biriyani";
			 price = 180.0;
			System.out.println("How manu Units? ");
			 unit = sc.nextInt();
			obj.setId(id);
			obj.setiName(name);
			obj.setPrice(price);
			obj.setUnit(unit);
			//insert in placeOrder array
			index++;
			placeOrder[index] = obj;
			break;
			
		case 4:
			
			break;
			
		case 5:
			
			break;
			
		case 6:
			
			break;
			
		case 7:
			flag = false;
			System.out.println("Exited...");
			break;
			
		default:
			System.out.println("Sorry Wrong Option!!!");
		}
		
		}

	}
	
	
}

```

```java
package skilling17;

public class Item {
	int id;
	String iName;
	double price;
	int unit;
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getiName() {
		return iName;
	}
	public void setiName(String iName) {
		this.iName = iName;
	}
	public double getPrice() {
		return price;
	}
	public void setPrice(double price) {
		this.price = price;
	}
	public int getUnit() {
		return unit;
	}
	public void setUnit(int unit) {
		this.unit = unit;
	}
	
	//override toString() method
	public String toString() {
		String s = String.format("Id: %d\tName: %s\tPrice: %f\tUnit: %d", getId(), getiName(), getPrice(), getUnit());
		return s;
	}

}

```