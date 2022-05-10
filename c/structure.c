#include<stdio.h>
#include<string.h>


//define a structure Student
struct time
{
    int hour;
    int minute;
    int second;
};
struct Student
{
     int id;
    char name[15];
    int age;
    float cgpa;
    char gender;
    struct Date
    {
        int year;
        int month;
        int day;
    }dob;

    struct time class_time;
};

struct Point
{
    int x;
    int y;
} p1;

struct Complex
{
    float real;
    float imag;
} c1, c2, c3;

typedef struct Point Point;

void printPoint( Point p);
void printStudent(struct Student s);
struct Student createStudent();
int main()
{
    //create a variable of structure Student
    struct Student s1;

    //initialize structure variable with value
    s1.id = 123;
    strcpy(s1.name ,"Rakesh");
    s1.age = 19;
    s1.cgpa = 7.7;
    s1.gender = 'M';
    s1.dob.day = 12;
    s1.dob.month = 12;
    s1.dob.year = 1987;

    printf("s1: %d\t%s\t%d\t%0.2f\t%c\n", s1.id, s1.name, s1.age, s1.cgpa, s1.gender);

    //create a variable of structure Student
    struct Student s2 = {2100123, "Lakshmi", 20, 8.3, 'F'};

    //initialize structure variable with value

    printf("s2: %d\t%s\t%d\t%0.2f\t%c\n", s2.id, s2.name, s2.age, s2.cgpa, s2.gender);

    //designated initialization
    struct Student s3 = {.name = "Surabhi", .id = 123};
    printf("s3: %d\t%s\t%d\t%0.2f\t%c\n", s3.id, s3.name, s3.age, s3.cgpa, s3.gender);

    //struct Point p1 = {12, 45};
    Point p2 = {12, 23};
    printf("p1 (%d %d)\n", p1.x, p1.y);
    printf("p2 (%d %d)\n", p2.x, p2.y);

    printf("c1 (%f+%fj)\n", c1.real, c1.imag);
    printf("c2 (%f+%fj)\n", c2.real, c2.imag);
    printf("c3 (%f+%fj)\n", c3.real, c3.imag);
    printPoint(p2);
    printPoint(p1);
    printStudent(s1);
    printStudent(createStudent());
    return 0;
    
}

//prints a given given struct Point
void printPoint(struct Point p)
{
    printf("\nPoint (%d, %d)\n", p.x, p.y);
}

void printStudent(struct Student s)
{
    printf("\nStudent (%d %s %d %0.2f %c %d/%d/%d %d:%d:%d)\n", s.id, s.name, s.age, s.cgpa, s.gender, s.dob.day,s.dob.month, s.dob.year, s.class_time.hour, s.class_time.minute, s.class_time.second);
}

struct Student createStudent()
{
    struct  Student s;
    char name[15];
    printf("Enter Id: "); scanf("%d", &s.id);
    printf("Enter Name: "); scanf("%*c%[^\n]s", name); strcpy(s.name, name);
    printf("Enter Age: "); scanf("%d", &s.age);
    printf("Enter CGPA: "); scanf("%f", &s.cgpa);
    printf("Enter Gender: "); scanf("%*c%c", &s.gender);
    printf("Enter Date of Birth (dd/mm/yyyy): "); scanf("%d/%d/%d", &s.dob.day, &s.dob.month, &s.dob.year);
    printf("Enter Time (hh:mm:ss): "); scanf("%d:%d:%d", &s.class_time.hour, &s.class_time.minute, &s.class_time.second);
    
    return s;
    
}