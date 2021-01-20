#include<stdio.h>
struct Person
{
    int age;
    double salary;
};
int main()
{
    struct Person person1, person2;
    person1.age = 18;
    person1.salary = 2000;

    printf("Age is: %d\n", person1.age);
    printf("Salary is: %.2lf\n", person1.salary);
}

//global structure: Je kunu function theke access kora jay easily
//local structure: main function chara ar function theke etake access kora jay na
