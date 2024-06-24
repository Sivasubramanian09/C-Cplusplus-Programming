// /*Polymorphism-1*/
// // #include<iostream>
// // using namespace std;
// // class King
// // {
// //     public: 

// //     void Pro(int a, int b)
// //     {
// //         cout<<(a+b)<<endl;
// //     }

// //     void Pro(int a, int b, int c, int d, int e)
// //     {
// //         cout<<(a+b+c+d+e)<<endl;
// //     }
// // };

// // int main(){
// //   King k;
// //   k.Pro(10,20);
// //   k.Pro(10,20,30,40,50);
// //   return 0;  
// // }

// #include<iostream>
// using namespace std;

// class Overload
// {
//     private:
//     int n1;
//     int n2;

//     public:
//     Overload(int num1, int num2)
//     {
//         int res;
//         n1 = num1;
//         n2 = num2;
//         res = n1-n2;
//         cout<<"Res : "<<res<<endl;
//     }

//     void operator-()
//     {
//         n1 = -n1;
//         n2 = -n2;
//     }

//     void display()
//     {
//         cout<<"n1 = "<<n1<<"\nn2 = "<<n2<<endl;
//     }
// };


// int main()
// {
//     Overload o1(6,8);
//     -o1;
//     o1.display();
//     return 0;
// }


/*Example 3*/
// #include <iostream>

// class Point {
// private:
//     int x, y;

// public:
//     // Constructor to initialize the coordinates
//     Point(int x = 0, int y = 0) : x(x), y(y) {}

//     // Function to display the coordinates
//     void display() const {
//         std::cout << "(" << x << ", " << y << ")" << std::endl;
//     }

//     // Overload the + operator
//     Point operator+(const Point& other) const {
//         return Point(x + other.x, y + other.y);
//     }
// };

// int main() {
//     Point p1(3, 4);
//     Point p2(1, 2);

//     Point p3 = p1 + p2; // Uses the overloaded + operator
//     p3.display(); // Output: (4, 6)

//     return 0;
// }


