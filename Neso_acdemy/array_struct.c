#include<stdio.h>

struct car{
    int fuel_tank_cap;
    int seat;
    float milegae;
};

int main(){
    struct car c[2];
    int i;
    for (int i=0;i<2;i++){
        printf("Enter the car %d fuel tank capacity: ",i+1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("Enter the car %d seat capacity: ",i+1);
        scanf("%d", &c[i].seat);
        printf("Enter the car %d mileage tank capacity: ",i+1);
        scanf("%f", &c[i].milegae);       
    }
    printf("\n");
    for (int i=0;i<2;i++){
        printf("Car %d Details:\n",i+1);
        printf("%d ", c[i].fuel_tank_cap);
        printf("%d ", c[i].seat);
        printf("%f\n",c[i].milegae);       
    }

    return 0;
}