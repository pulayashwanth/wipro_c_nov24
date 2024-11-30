#include <stdio.h>

// bit fields means to allocate the memory in bits 

// structure.4

#include <stdio.h>

typedef struct StudentAge
{
    int minAge : 5; // we are giving 5 bits 
    int maxAge : 7; // 7 bits 
    int actualAge : 7; // 7 bits 
} StudentAge; // whoch in total it should have 19 bits which should have 3 bytes 

typedef struct Address
{
    int doorNum;
    char areaName[32];
    char cityName[32];
    unsigned int pin;
} Address;

typedef struct Student
{
    int id;
    char name[32];
    short int semester;
    char branch[32];
    Address address;
    StudentAge age;
} Student;

int main()
{
    Student student = {101, "ntihin", 5, "cse", {500, "Srirampura", "mysuru", 570014}, {18, 75, 35}};
    printf("Size of Student = %d \n", sizeof(Student));
    printf("Size of Address = %d \n", sizeof(Address));
    printf("Size of StudentAge= %d \n", sizeof(StudentAge));
    printf("Size of student = %d \n", sizeof(student));
    printf("Size of student.age = %d \n", sizeof(student.age));
    // printf("Size of student.age.minAge = %d \n", sizeof(student.age.minAge));
    printf("Size of student.address = %d \n", sizeof(student.address));
    puts("-------------------------------------");
    printf("Student Name = %s \n", student.name);
    printf("Student City = %s \n", student.address.cityName);
    printf("Student Age = %d \n", student.age.actualAge);
    printf("Student Branch = %s \n", student.branch);
}