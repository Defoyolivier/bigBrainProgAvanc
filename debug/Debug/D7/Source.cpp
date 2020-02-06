#include <iostream>
using namespace std;

int fib(int n)
{
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 9;
    cout << fib(n) << endl;
    
    system("pause");
    return 0;
}