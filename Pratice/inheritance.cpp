/*Example 1*/

// #include<iostream>

// class Beverage{
//     public:
//     void drinks(){
//         std::cout<<"All drinks are available"<<std::endl;
//     }
// };


// class coffee : public Beverage
// {
//     public:
//     void mocha(){
//         std::cout<<"Mocha tastes the best";
//     }
// };

// int main(){
//    coffee c;
//    c.drinks();
//    c.mocha();
//    return 0;

// }


/*Example 2*/

// #include<iostream>
// using namespace std;

// class party
// {
//     public:

//     int meals;
//     void food()
//     {
//         cout<<"Enter number of meals";
//         cin>>meals;
//     }
// };

// class Drinks
// {
//     public:
//     int drinks;

//     void Liquor()
//     {
//         cout<<"Enter the number of drinks";
//         cin>>drinks;
//     }
// };

// class Bill : public party, public Drinks{
//     int total_meals;
//     int total_drinks;
//     int total_bill;

//     public:
//     void total()
//     {
//         total_meals = meals*90;
//         total_drinks = drinks*60;

//         total_bill=total_meals+total_drinks;
//         cout<<"Total bill for the party is : "<<total_bill;
//     }
// };


// int main()
// {
//     Bill b;
//     b.food();
//     b.Liquor();
//     b.total();
//     return 0;
// }


/*Example 3*/

#include<iostream>
using namespace std;

class Chemistry{
    public:
    int marks1;

    void chemistry_marks()
    {
        cout<<"Enter the marks scored in chemistry : ";
        cin>>marks1;
    }
};


class Physics : public Chemistry
{
    public:
    int marks2;

    void Physics_marks()
    {
        cout<<"Enter the marks scored in physics : ";
        cin>>marks2;
    }
};

class Maths : public Physics{
    public:
    int marks3;
    int total;

    void Maths_marks()
    {
        cout<<"Enter the marks scored in maths :";
        cin>>marks3;
    }

    void result(){
        total = marks1+marks2+marks3;
        cout<<total<<endl;
    }
};


int main()
{
    Maths m;
    m.chemistry_marks();
    m.Physics_marks();
    m.Maths_marks();
    m.result();

    return 0;
}