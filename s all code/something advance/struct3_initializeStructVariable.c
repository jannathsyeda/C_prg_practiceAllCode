#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{

    struct Person person1 = { 24, 50000 };
    struct Person person2;
    person2 = person1;

    printf("Age is: %d\n", person1.age);
    printf("Salary is: %.2lf\n", person1.salary);

    printf("Age is: %d\n", person2.age);
    printf("Salary is: %.2lf\n", person2.salary);

    return 0;
}


