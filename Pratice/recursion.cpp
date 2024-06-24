#include<iostream>

// void printFibonacci(int m){

// static int m1=0,m2=1,m3;

// if(m>0){

//   m3 = m1 + m2;
//   m1 = m2;
//   m2 = m3;
//   std::cout<<m3;
//   printFibonacci(m-1); 
//  }
// }

// int main(){
//  int m;
//  std::cout<<"Please enter your preferred number of elements here: ";
//  std::cin>>m;
//  std::cout<<"The Fibonacci Series will be:";
//  std::cout<<0<<1;
//  printFibonacci(m-2); //We have used m-2 because we have 2 numbers already printed here
//  return 0;
// }



// Sum of the Numbers
// int sum(int n);

// int sum(int n)
// {
//   if(n != 0)
//   {
//     return n+sum(n-1);
//   }
// }


// int main(){
//     int n;
//     std::cout<<"Enter the Number: "<<std::endl;
//     std::cin>>n;
//     std::cout<<sum(n);

// }



// factorial

int fact(int n);


int main()
{
    int n;
    std::cout<<"Enter the Number:"<<std::endl;
    std::cin>>n;
    std::cout<<"The Factorial of the Number :"<<fact(n)<<std::endl;
}

int fact(int n)
{
    while(n>1)
    {
        return n*fact(n-1);
    }
}
