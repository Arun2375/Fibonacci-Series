//C++ Function to find nth Fibonacci number (Iterative Method)
#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n == 1) return 0;              //1st term
    if(n == 2) return 1;              //2nd term 

    int t1 = 0, t2 = 1, nextTerm;

    for(int i = 3; i <= n; i++){
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
         return t2;
    }

    int main(){
        int n;
        cout << "Enter n: ";
        cin >> n;
        
        cout << "Fibonacci number at position " << n << " is " << fibonacci(n);
        return 0;
    }


