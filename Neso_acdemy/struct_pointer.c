#include<stdio.h>

struct student{
    char name[20];
    int age;
};

int main(){
    struct student s1 = {"Siva",22};
    struct student *ptr = &s1;

    printf("%s %d\n",ptr->name, ptr->age);
    printf("%s %d\n",(*ptr).name, (*ptr).age);
    printf("%s %d\n",(*&s1).name, (*&s1).age);
}