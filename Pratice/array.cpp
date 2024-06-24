/*Example 1*/

// #include<iostream>
// int main()
// {
//     int arr[6]= {5,6,7,8,9,1};
//     for (int i =0;i<6;i++)
//     {
//         std::cout<<arr[i]<<std::endl;
//     }
// }




/*Example 2*/
// #include<iostream>
// int main(){
//    int sum=0;
//    int n;
//    std::cin>>n;
//    int array[n];
//    for(int i=0;i<n;i++){
//     std::cin>>array[i];
//    }
//    for (int i =0;i<n;i++)
//    {
//      sum = sum+array[i];
//    }

//    std::cout<<"The Sum of the array:"<<sum<<std::endl;
//    return 0;
// }


/*Example 3*/

#include<iostrem>
int main(){
    int a[3][3]={{,2,3},{4,5,6},{7,8,9}};
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

}