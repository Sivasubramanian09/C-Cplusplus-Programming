#include<iostream>
#include <vector>

int main()
{
  // Defining a vector
  std::vector <int> my_vector[5];
  my_vector[0] = {1,2,3,4};
  my_vector->push_back(10);
  std::cout<<my_vector;
  std::cout<<sizeof(my_vector)<<std::endl;
//   std::cout<<my_vector;
  return 0;

}