#include<iostream>
// int main()
// {
//     int i,j;
//     int fact =1;
//     int n;
//     std::cout<<"Ente the Number:"<<std::endl;
//     std::cin>>n;
//     for (i=1;i<=n;i++)
//     {
//         fact = fact*i;
//     }
//     std::cout<<"The Total of Factorial is:"<<fact<<std::endl;
// }


// fibonacci
int main(){
    int n;
    int n1=0,n2=1;
    int f = 0;
    std::cin>>n;
    if(n==1)
    {
        std::cout<<n1<<std::endl;
    }
    else if (n ==2)
    {
        std::cout<<n1<<n2<<std::endl;
    }
    else
    {
     std::cout<<"The Numbers are:"<<std::endl;
     for (int i =0;i<n;i++)
     {
        std::cout<<" "<<f;
        n1=n2;
        n2= f;
        f = n1+n2;
     }
    }
}


