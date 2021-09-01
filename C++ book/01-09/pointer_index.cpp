
#include <iostream>

int main()
{
	int *p;
	int (*ptr)[5];
	int arr[5]={0,1,2,3,4};
	p = arr;
	ptr = &arr;
	
	std::cout <<p  <<"    " <<ptr <<std::endl;
	std::cout <<*p  <<"    " <<*ptr <<std::endl;
	p++;
	ptr++;
	
	std::cout <<p  <<"    " <<ptr <<std::endl;
    std::cout <<*p  <<"    " <<*ptr <<std::endl;
	
	return 0;
}
