#include "classSharedPtr.h"
#include <string>

using namespace std;


int Resource::incNum1()
{
  num1 = num1 + 1;
  return(num1);
}

void Resource::printNum1()
{
  cout<< "num1 = "<< num1 <<"\n";
}

void Resource::printMe(string str1, int num)
{
  cout<< str1 << num <<"\n";
}