#include <stdio.h>

//Defines the struct Person
struct Person {
    char name[50];
    int age;
    int salary;
};

int main() {
    //Initializes a person1 from struct Person
    struct Person person1;
    
    //Assigns a name to person1 
    strcpy(person1.name, "James Benjamin");
    
    //Enters their age and salary
    person1.age = 26;
    person1.salary = 3000;
    
    //Prints person1s variables
    printf("Person: %s \n", person1.name);
    printf("Age: %d \n", person1.age);
    printf("Salary: %d \n", person1.salary);
    
    return 0;
}
