// #include<iostream>
// using namespace std;

// class Increase{
//     private:
//     int value;

//     public:
//     Increase()
//     {
//         value=10;
//     }

//     void operator ++() 
//     {
//         value=value+5;
//     }  
//     void display()
//     {
//         cout<<"Value is :"<<value<<endl;
//     }
// };


// int main()
// {
//    Increase Inc;
//    ++Inc;
//    Inc.display();
//    return 0;
// }


/*Example 2*/

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;

    public:
    void input(){
        cout<<"Enter real and imaginary parts respectively :\n";
        cin>>real;
        cin>>imag;
    }


    Complex operator + (Complex obj)
    {
        Complex temp;
        temp.real = real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }

    void output()
    {
        cout<<"Output is :" <<real<<"+"<<imag<<"i";
    }
};

int main(){
    Complex com1, com2, res;
    cout<<"Enter the first complex number:\n";
    com1.input();
    cout<<"Enter the second complex number:\n";
    com2.input();

    res =com1+com2;
    res.output();
    return 0;
}