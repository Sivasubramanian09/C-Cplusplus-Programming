#include<iostream>

int add(int a, int b);
void call_by_ref(int *a,  int *b);


int add(int a, int b)
{
   return a+b;
} 

int main()
{
    int a=5, b=3;
    int z = add(a,b);
    std::cout<<"The Output is "<<z<<std::endl;
    call_by_ref(&a,&b);
}



void call_by_ref(int *a,  int *b)
{
    *a = 4;
    *b = 6;
    std::cout<<"The Output is "<<*a+*b;
}