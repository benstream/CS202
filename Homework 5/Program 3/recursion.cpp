/*
Benjamin Stream
CS202 HW 5 
recursion
*/
#include <iostream>
#include "stopwatch.h"
int fib(int n)
{
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return fib(n - 1) + fib(n - 2);
}
int fib_loop(int n) {
    int fib1 = 0;
    int it = 0;
    int fib2 = 1;
    if (n == 0) {
        return fib1;
    }
    if (n == 1) {
        return fib2;
    }
    else {
        for (int i = 1; i < n; i++) {
            {
                it = fib2;
                fib2 += fib1;
                fib1 = it;
            }
        }
        return fib2;
    }
    
}
int A(int m,int n) {
    if (m == 0) {
        return n + 1;
    }
    else if (m > 0 && n == 0) {
        A(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        A(m - 1, A(m, n - 1));
    }
}

int main() {
    

    std::cout << "A's Numbers Test" << std::endl;
    long long m = 0;
    long long n = 0;
    
    while (true) {
        std::cout << A(m, n) << std::endl;
        m++;
    }
}