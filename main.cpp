#include <iostream>
#include <cmath>


bool isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    std::cout<<isPrime(123);
}