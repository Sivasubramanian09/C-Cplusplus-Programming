#include "network.h"

#include <iostream>
#include <torch/torch.h>

using namespace torch;

int main()
{
  Net network(50,30,10);
  std::cout << network <<"\n\n";
  Tensor x, output;
  x = torch::randn({2, 50});
  output = network -> forward(x);
  std::cout << output<<std::endl;


  torch::Tensor y = output.clone();
  
  std::cout<<y<<std::endl;
}
