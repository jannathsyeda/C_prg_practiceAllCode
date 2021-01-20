#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
struct Person person1;
int main()
{
    printf("Enter person1 age:  ");
    scanf("%d", &person1.age);

    printf("Enter person1 salary: ");
    scanf("%lf", &person1.salary);


    printf("Age is: %d\n", person1.age);
    printf("Salary is: %.2lf\n", person1.salary);
}

