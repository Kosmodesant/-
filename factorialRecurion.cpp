#include <iostream>

int factorial_recursion(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial_recursion(n - 1);
    }
}

int main()
{
    std::cout << factorial_recursion(6) << std::endl;
    return 0;
}
