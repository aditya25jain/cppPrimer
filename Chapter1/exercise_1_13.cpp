#include <iostream>

int main()
{
    int sum = 0, val =1;
    for (val =1; val <= 10; val++)
    {
        sum += val;
    }
    std::cout << "sum of 1 to 10 is " << sum << std::endl;
    return 0;
}