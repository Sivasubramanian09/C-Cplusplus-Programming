// #include<iostream>
// int main()
// {
//     int val=100;
//     int *ptr;

//     ptr = &val;
//     std::cout<<"Value of the val is :"<<val<<std::endl;
//     std::cout<<"The value the ptr val:"<<ptr<<std::endl;
// }



/*This Pointer*/

// #include<iostream>
// using namespace std;
// class O
// {
//     public:
//     void display()
//     {
//         cout<<"The address of Object is : ";
//         cout<<this;
//     }
// };

// int main()
// {
//     O obj;
//     obj.display();
//     return 0;
// }



/*Example for This Method*/

// #include<iostream>

// class A
// {
//     private:
//     int x;
//     int y;
//     int z;

//     public:
//     void set(int x, int y, int z)
//     {
//        x = x;
//        this->y = y;
//        this->z = z;
//     }
//     void print()
//     {
//         std::cout<<"X value is :"<<x<<std::endl;
//         std::cout<<"Y value is :"<<y<<std::endl;
//         std::cout<<"Z value is :"<<z<<std::endl;
//     }
// };

// int main(){
//     A Obj;
//     Obj.set(20,54,65);
//     Obj.print();
//     return 0;
// }




/*Example 2*/

// #include<iostream>

// class King
// {
//     public:
//     void call();
//     void Text()
//     {
//         std::cout<<"Hello Brother!"<<std::endl;
//         this->call();
//     }
// };

// void King :: call()
// {
//     std::cout<<"A"<<std::endl;
//     std::cout<<"B"<<std::endl;
//     std::cout<<"C"<<std::endl;
// }


// int main()
// {
//     King Obj;
//     Obj.Text();
//     return 0;
// }



/*Example 4*/

#include<iostream>

class Test
{
  int num;
  public:

  Test & assign (int num)
  {
    this->num=num+1000;
    return *this;
  }
  void display()
  {
    std::cout<<"The value of num is :"<<num<<std::endl;
  }
};


int main()
{
    Test n1;
    n1.assign(100).display();

    return 0;
}