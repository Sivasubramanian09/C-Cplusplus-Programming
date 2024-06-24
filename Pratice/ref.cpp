/*Example 1*/

// #include<iostream>
// int main()
// {
//     int data = 10;
//     int &ref = data;
//     std::cout<<"The Reference Value:"<<ref<<std::endl;
// }


/*Example 2*/

// #include<iostream>

// int n;
// int &club(){
//   return n;
// }

// int main(){
//     club();
//     return 0;
// }



/*Example 3*/

// #include<iostream>
// int main()
// {
//   int a = 10;
//   int &b = a;
//   int &c = a;

//   std::cout<<"The value of a "<<a<<std::endl;
//   std::cout<<"The value of b "<<b<<std::endl;
//   std::cout<<"The value of c "<<c<<std::endl;
//   std::cout<<&a<<&b<<&c;
// }


/*Example 3*/

#include<iostream>
void swap(int &a, int &b);
int main(){
  int x = 12;
  int y = 17;
  std::cout<<"Before Swapping the value of x is : "<<x<<std::endl;
  std::cout<<"Before Swapping the value of y is : "<<y<<std::endl;

  swap(x,y);

  std::cout<<"After swapping the value of x is:"<<x<<std::endl;
  std::cout<<"After Swapping the value of y is:"<<y<<std::endl;
}

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}