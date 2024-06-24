/*Example 1*/

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     vector<int>n;
    
//     n.assign(4,3);

//     cout<<"The contents are : ";
//     cout<<n.size()<<endl;
//     cout<<n[0];
//     for(int i=0; i<n.size() ; i++)
//     {
//         cout<<n[i]<< " ";
//         cout<<endl;
//     }
//      n.push_back(2);
//      int no=n.size();
//      cout<<"Last Element : "<<n[no-1]<<endl;

//      n.pop_back();

//      cout<<"Now the contents are: ";
//      for(int i=0; i<n.size(); i++)
//      {
//         cout<<n[i]<<" ";
//         cout<<endl;
//      }

//      n.insert(n.begin(),7);
//      cout<<"First element is : "<<n[0]<<endl;

// n.clear();
// cout<<"Now the size is : "<<n.size();
// }


/*Example 2*/

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     vector<int>num;

//     for(int i=0;i<5;i++)
//     {
//         num.push_back(i);
//     }
//     cout<<"Output from the begining to the end :";
//     for(auto a=num.begin();a != num.end();a++)
//     {
//         cout<<*a<< " "; 
//     }
// }


/*Example 3*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Vectors are:\n";
    for(int x=0;x<33;x++)
    {
        v.push_back(x);
        cout<<x<<endl;
    }

    cout<<"Vector size is:"<<v.size()<<endl;
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;

    cout<<"Maximum size of the vector is : "<<v.max_size()<<endl;
    v.resize(5);
    cout<<v.capacity()<<endl<<v.max_size();
    cout<<"Vector size after resizing is :"<<v.size()<<endl;

    if(v.empty() == false)
    {
        cout<<"vector is not empty"<<endl;
    }
    else{
        cout<<"Vector is empty";
    }
    return 0;
}