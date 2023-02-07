#include <iostream>
#include <cmath>


int gcd(int a, int b)
{
    if (b <= 0) return a;
    gcd(b, a % b);
}

unsigned int factorial(unsigned int n)
{
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

bool isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); ++i)
        if (x % i == 0) return false;
    return true;
}

int main()
{
    std::cout<<isPrime(123)<<"\n";
    std::cout<<gcd(2023,2024)<<"\n";
    std::cout<<factorial(5)<<"\n";
}