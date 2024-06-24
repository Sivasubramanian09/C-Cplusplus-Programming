/*Example 1*/
// #include<iostream>
// int main(){
//     int *ptr1;
//     int *ptr2;
//     int *ptr3;

//     int avg;

//      ptr1 = new int;
//      ptr2 = new int;
//      ptr3 = new int;


//      std::cout<<"Enter the first number: ";
//      std::cin>>*ptr1;
//      std::cout<<"Enter the Second number:";
//      std::cin>>*ptr2;
//      std::cout<<"Enter the Third number:";
//      std::cin>>*ptr3;

//      std::cout<<&ptr1<<&ptr2<<&ptr3;
//      avg = (*ptr1+*ptr2+*ptr3)/3;

//      std::cout<<"Average is : "<<avg<<std::endl;
//      delete ptr1;
//      delete ptr2;
//      delete ptr3;
// }


/*Example 2*/
#include<iostream>
int main(){
    int size;
    std::cout<<"Enter the size :";
    std::cin>>size;
    int *ptr;
    ptr = new int[size];

    std::cout<<"Enter the elements:"<<std::endl;
    for (int i =0; i<size; i++){
        std::cout<<"Element :";
        std::cin>>ptr[i];
    }

    std::cout<<"The Elements are:"<<std::endl;
    for (int i=0;i<size;i++){
        std::cout<<ptr[i]<<std::endl;
    }

    delete[] ptr;

}