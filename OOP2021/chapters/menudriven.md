# Code discussed in the class
## Student.java

```java
package menudrive;

public class Student {
	//properties section
	private long id;
	private String name;
	private String branch;
	private String section;
	
	//Constructor section
	public Student() {
		id = 2000000000;
		name = "";
		branch="";
		section="";
	}
	//setters
	public void setStudent(long id, String name, String branch, String section)
	{
		this.id = id;
		this.name = name;
		this.branch = branch;
		this.section = section;
	}
	
	//generated getters and setters
	public long getId() {
		return id;
	}
	public void setId(long id) {
		this.id = id;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getBranch() {
		return branch;
	}
	public void setBranch(String branch) {
		this.branch = branch;
	}
	public String getSection() {
		return section;
	}
	public void setSection(String section) {
		this.section = section;
	}
	
	//getters
	
	public String toString()
	{
		String str = String.format("Id: %d \nName: %s\nBranch: %s\n Section: %s", this.getId(), this.getName(), this.getBranch(), this.getSection());
		return str;
	}
	
	
}

```

## MenuDriven.java

```java
package menudrive;

import java.util.Scanner;

public class MenuDriven {
	
	public static void main(String[] args)
	{  
		Student arr[] = new Student[10];
		int index = -1;
		Scanner sc = new Scanner(System.in);
		boolean flag = true;
		while(flag)
		{
			menu(); //display main menu
			int ch = sc.nextInt();
			
			//System.out.println("you entered "+ch);
			switch(ch)
			{
			case 1:
				if(index<10) {
					Student s = new Student();
					long id = sc.nextLong();
					s.setId(id);
					String name = sc.next();
					s.setName(name);
					String branch = sc.next();
					s.setBranch(branch);
					String section = sc.next();
					s.setSection(section);
					index++;
					arr[index] = s;
					
				}
				
				break;
				
			case 2:
				if(index == -1) {
					System.out.println("No Students are present");
					break;
				}
				System.out.println("Enter Student ID; ");
				long id = sc.nextLong();
				for(int i=0; i<index; i++) {
					if(id == arr[i].getId())
						arr[i]=null;
				}
				break;
				
			case 3:
				System.out.println();
				break;
				
			case 4:
				for (int i=0; i<index; i++)
					System.out.println(arr[i]);
				break;
				
			case 5:
				flag = false;
				break;
				
			default:
				System.out.println("Wrong Option!!!!");
				
			
			}
		}
	}
	
	//method to displau main menu
	public static  void menu()
	{
		System.out.println("Main Menu");
		System.out.println("1. Insert Student");
		System.out.println("2. Delete Student");
		System.out.println("3. Update Student");
		System.out.println("4. Display Students");
		System.out.println("5. Exit...");
		System.out.println("Your choice...");
		
	}
}

```