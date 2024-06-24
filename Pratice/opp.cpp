/*Example 1 - Inheritance*/
// #include<iostream>

// class Parent
// {
//     public:
//     std::string name1="Hello";
// };

// class Child : public Parent{
//     public:
//     std::string name2= "Zoho";
// };


// int main(){
//     Child ch;
//     std::cout<<ch.name1 + " " + ch.name2;
//     return 0;
// }


/*Example 2 - Polymorphism*/

// #include<iostream>

// class Animal{
//     public:
//     void speed()
//     {
//         std::cout<<"Who is more faster?";
//     }
// };

// class Dolphin : public Animal
// {
//   public:
//   void speed()
//   {
//     std::cout<<"I'm faster in water"<<std::endl;
//   }
// };

// class Cheetah : public Animal{
//     public:
//     void speed()
//     {
//         std::cout<<"I'm faster on the ground"<<std::endl;
//     }
// };

// int main()
// {
//    Animal a;
//    Cheetah c;
//    Dolphin d;

//    a.speed();
//    c.speed();
//    d.speed();
//    return 0;
// }


/*Example 3*/
#include<iostream>

class Tradefair{
  private:
  int coupon;
  
  public:
  void setCoupon(int c){
     coupon=c;
  }

  int getCoupon()
  {
    return coupon;
  }
};


int main()
{
    Tradefair t;
    // t.coupon=100;
    t.setCoupon(50);
    std::cout<<"Coupon : "<<t.getCoupon()<<std::endl;
    return 0;
}