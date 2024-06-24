/*Example-1*/
// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     for (int i=1;i<=10;i++)
//     {
//         v.push_back(i);
//     }
//     cout<<"Size : "<<v.size();

//     v.resize(7);
//     cout<<"\nAfter resizing it becomes : "<<v.size();

//     if(v.empty() == false)
//     {
//         cout<<"\nnot empty";
//     }
//     else{
//         cout<<"\nIt is empty";
//     }
//     cout<<"\nElements of Vector";
//     for (auto i = v.begin(); i!=v.end(); i++)
//     {
//         cout<<*i<< " "; 
//     }
//     cout<<endl;
//     return 0;
// }


/*Example - 2*/
// #include<iostream>
// #include<iterator>
// #include<vector>

// using namespace std;

// int main()
// {
//     vector<int> a={1,2,3,4,5};

//     vector<int>::iterator ptr;

//     cout<<"The elements of Vector are :";
//     for(ptr=a.begin(); ptr<a.end(); ptr++)
//     {
//         cout<<*ptr<<" ";
//     }
//     return 0;
// }


/*Example -3*/
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i=7;
//     int j=10;

//     cout<<"Value of i "<<i<<endl;
//     cout<<"Value of j "<<j<<endl;

//     swap(i,j);

//     cout<<"After Swapping i "<<i<<endl;
//     cout<<"After Swapping j "<<j<<endl;
// }



/*Example 4*/

#include<iostream>
using namespace std;

class functionObj
{
    public:
    int operator()(int x, int y)
    {
        return x*y;
    }
};

int main()
{
    functionObj obj;
    int mult = obj(4,7);
    cout<<"Multiplication of x and y is :"<<mult<<endl;
    return 0;
}