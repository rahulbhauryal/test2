#include <iostream>
#include "classSharedPtr.h"

using namespace std;

int main()
{
	// allocate a Resource object and have it owned by std::shared_ptr
	Resource *res = new Resource;
	std::shared_ptr<Resource> ptr1(res);
	{
		std::shared_ptr<Resource> ptr2(ptr1); // use copy initialization to make another std::shared_ptr pointing to the same thing
 
		std::cout << "Killing one shared pointer\n";
	} // ptr2 goes out of scope here, but nothing happens
 
	std::cout << "Killing another shared pointer\n";
 
	return 0;
} // ptr1 goes out of scope here, and the allocated Resource is destroyed