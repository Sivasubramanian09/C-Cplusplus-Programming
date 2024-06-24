/*Example 1*/

// #include<iostream>
// class student
// {
//     public:
//     int a;
//     int b;

//     void add(int a , int b)
//     {
//         int c = a+b;
//         std::cout<<"Print the C Value:"<<c<<std::endl;
//     }
// };


// int main()
// {
//     student s1;
//     s1.add(10,20);
//     return 0;
// }


/*Example 2*/
// #include<iostream>
// class franchise
// { 
//     public:
//     void kfc()
//     {
//         std::cout<<"We are Number 1"<<std::endl;
//     }

//     void burgerman()
//     {
//         std::cout<<"We are Best sellers"<<std::endl;
//     }
// };


// int main(){
//     franchise f1;
//     f1.kfc();
//     f1.burgerman();
//     return 0;
// }



/*Example 2*/
// #include<iostream>


// class Billboard
// {
//     private:
//     std::string title;

//     public:
//     void setTitle(std::string x)
//     {
//         title=x;
//     }

//     std::string getTitle()
//     {
//         return title;
//     }
// };

// int main()
// {
//     Billboard bill;
//     bill.setTitle("Top 5 Songs of 2024");
//     std::cout<<bill.getTitle()<<std::endl;
//     return 0;
// }


/*Example 3*/
// #include<iostream>

// class Billboard{
    
//     private:
//     std::string title;

//     public:
//     Billboard(std::string b){
//        setTitle(b);
//     }


//     void setTitle(std::string a)
//     {
//         title=a;
//     }

//     std::string getTitle()
//     {
//         return title;
//     }
// };

// int main(){
//     Billboard bill("Top three songs of 2024");
//     std::cout<<bill.getTitle();
//     return 0;
// }


/*Example 4*/
#include<iostream>

class Gambit{

    public:
    Gambit(){
        std::cout<<"I'm in Constructor";

    }

    ~Gambit()
    {
        std::cout<<"I'm in Destructor";
    }

    void display()
    {
        std::cout<<"Hello!"<<std::endl;
    }
};
int main()
{
    Gambit gam;
    gam.display();
}