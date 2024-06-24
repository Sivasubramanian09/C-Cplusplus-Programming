/*Example 1*/

// #include<iostream>

// class Salary
// {
//     private:
//     int sal;

//     friend int increment(Salary s);
// };


// int increment(Salary s)
// {
//     s.sal = s.sal+7000;
//     return s.sal;
// }

// int main()
// {
//   Salary s;
//   std::cout<<"Increment is :";
//   std::cout<<increment(s)<<std::endl;
//   return 0;  
// }

/*Example 2*/


// #include<iostream>

// class Num1
// {
//     private:
//     int n1;

//     friend class Num2;
//     public:
//     Num1()
//     {
//         n1 =11;
//     }

// };


// class Num2
// {
//     private:
//     int n2;
//     public:

//     Num2(){
//         n2=65;        
//     }

// int avg()
// {
//  Num1 obj1;
//  return (obj1.n1+n2)/2;
// }
// };

// int main()
// {
//     Num2 obj2;
//     std::cout<<"Average is:";
//     std::cout<<obj2.avg()<<std::endl;
//     return 0;
// }




/*Example 3*/


#include<iostream>

class B;
class A
{
    int x;
    public:
    void assign(int i)
    {
        x=i;
    }
    friend void product(A,B);
};

class B
{
    int y;
    public:
    void assign(int i)
    {
        y=i;
    }
    friend void product(A,B);
};

void product(A a, B b)
{
    std::cout<<a.x*b.y<<std::endl;
}

int main(){
    A a;
    B b;
    a.assign(45);
    b.assign(20);
    product(a,b);

    return 0;
}