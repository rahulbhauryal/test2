#include <iostream>
#include "classSharedPtr.h"

using namespace std;

int main()
{
	// allocate a Resource object and have it owned by std::shared_ptr
	Resource *res = new Resource(3,4);
	std::shared_ptr<Resource> ptr1(res);
  ptr1->printNum1();
  ptr1->printMe("use_count = " , ptr1.use_count());
  ptr1->incNum1();
	{
		std::shared_ptr<Resource> ptr2(ptr1); // use copy initialization to make another std::shared_ptr pointing to the same thing
    ptr2->incNum1();

		
    ptr1->printMe("use_count = " , ptr1.use_count());
    std::cout << "Killing one shared pointer\n";
	} // ptr2 goes out of scope here, but nothing happens
  
  ptr1->printMe("use_count = " , ptr1.use_count());
	std::cout << "Killing another shared pointer\n";
  ptr1->printMe("use_count = " , ptr1.use_count());

  ptr1->printNum1();
	return 0;
} // ptr1 goes out of scope here, and the allocated Resource is destroyed