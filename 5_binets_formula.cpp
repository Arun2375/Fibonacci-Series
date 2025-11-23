//C++ Program to find nth fibonacci number using Binet's formula.
#include <iostream> 
#include <cmath>
using namespace std;
long long fibonacci(int n){
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;

    //Binet's formula: F(n)=(phi^n-psi^n)/sqrt(5)
    double fib = (pow (phi, n - 1) - pow(psi, n - 1)) /sqrt(5);

    return round(fib); 
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci number at position " << " is " << fibonacci (n);
    return 0;
}

