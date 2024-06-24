/*Example-1*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int age=20;

//     try
//     {
//         if (age >=24)
//         {
//             cout<<"You have the access to drink the alcohol";
//         }
//         else
//         {
//             throw(age);
//         }
//     }

//     catch(int age)
//     {
//         cout<<"You don't have the access to dirnk alcohol , Since you're age is less than 28\n";
//         cout<<"Your age is: "<<age;
//     }

//     return 0;    
// }


/*Example-2*/

#include<iostream>
using namespace std;
int main()
{
    int num;
    int denum;
    int output;

    cout<<"Please Enter the numbers to do the division"<<endl;
    cin>>num;
    cin>>denum;


    try
    {
        if(denum == 0)
        {
            throw denum;
        }
        else
        {
            output = num/denum;
        }
    }

        catch(int d)
        {
              cout<<"You cannot enter 0 in denominator while doing the division operation!"<<endl;
        }
        cout<<"The output after the division is : "<<output<<endl;
        return 0;
}