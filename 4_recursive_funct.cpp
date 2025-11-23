// Recursive function to find nth fibonacci number 
#include <iostream> 
using namespace std;
int fibonacci(int n){
    if (n == 1) return 0;
    if (n == 2) return 1;

    //Recursion: f(n) = f(n-1)+f(n-z);
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n);
    return 0;
}