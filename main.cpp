#include <iostream>
#include <cmath>


int gcd(int a, int b)
{
    if (b <= 0) return a;
    gcd(b, a % b);
}



/*int gcd(int a, int b)
{
    int temp;
    while (b > 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}*/

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
}