#include <iostream>


void Print(int* ptr, int n)
{
	for (int i = 0; i < n; i++) 
	{
		std::cout << *(ptr + i) << std::endl;
	}
}


int main() 
{
	int a[5] = { 10, 12, 21, 13, 51 };
	int b[5] = { -1, -1, -1, -1, -1 };

	//std::cout << a << std::endl;
	//std::cout << *a << std::endl;

	//std::cout << *(a + 2) << std::endl;


	Print(a, 5);

	int* ptr1 = a;
	int* ptr2 = b;

	for (int i = 0; i < 5; i++)
	{
		*(b + i) = *(a + i);
	}


	Print(b, 5);


	system("pause");
}