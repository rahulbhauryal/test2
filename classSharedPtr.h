#include <memory>
#include <iostream>
#include <string>

using namespace std;

class Resource
{
  private:
        int num1;
        int num2;
public:
	Resource(int n1, int n2):num1(n1),num2(n2) 
  { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }

  int incNum1();
  void printNum1();

  void printMe(string,int);
};
 