#include<stdio.h>
struct car{
    char engine[30];
    int fuel_Capacity;
    int seating;
    float mileage;
};

int main(){
    struct car c1 = {"DDis 190 Engine",37,5,20.02};
    struct car c2 = {"Kappa",22,8,14.5};
    printf("%s %d %d %f\n",c1.engine,c1.fuel_Capacity,c1.seating,c1.mileage)  ;
    return 0;
}