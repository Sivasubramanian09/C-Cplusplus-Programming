#include<stdio.h>

//Union - Shares the same memory location
union car{
    char engine[20];
    int fuel_capacity;
    int seat;
    float mileage;
};

//Structure
struct cars{
    char engine[20];
    int fuel_capacity;
    int seat;
    float mileage;
};

struct{
    short s[5];
    union 
    {
        float y;
        long z;
    }u;
}t;

int main(){
    union car car1;
    struct cars car2;
    printf("%ld\n",sizeof(car1)); //size of Union - 20
    printf("%ld\n",sizeof(car2)); //size of structure - 32
    printf("%ld\n",sizeof(t)); //size of structure - 32
    printf("%ld\n",sizeof(long));
    printf("%ld\n",sizeof(short));
}
