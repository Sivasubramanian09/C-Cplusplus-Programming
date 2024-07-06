#include<stdio.h>

struct car {
    char engine[50];
    char duel_type[10];
    int fuel_tank_cap;
    int seat;
    float mileage;
};

typedef struct car {
    char engine[50];
    char duel_type[10];
    int fuel_tank_cap;
    int seat;
    float mileage;
}car;

//Here Struct car is typedefed to car
//So, we can use "car" instead of "struct car".