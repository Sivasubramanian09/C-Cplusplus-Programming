// /*Encapsulation-1*/

// #include<iostream>
// using namespace std;

// class Company
// {
//     private:
//     int salary;


//     public:
//     void setsalary(int fulltime, int overtime)
//     {
//         salary = fulltime+overtime;
//     }

//     int getSalary()
//     {
//         return salary;
//     }
// };

// int main(){
//     Company obj;
//     obj.setsalary(3000,6000);
//     cout<<"Total salary: "<<endl;
//     cout<<obj.getSalary();
//     return 0;
// }


/*Encapsulation-2*/

#include<iostream>
using namespace std;

class Ball
{
    private:
    float area;

    public:
    void setArea(int radius)
    {
        area = 3.14*radius*radius;
    }

    float getArea()
    {
        return area;
    }
};

int main()
{
   Ball obj;
   obj.setArea(6);
   cout<<"Area of ball is : ";
   cout<<obj.getArea()<<endl;
   return 0;
}