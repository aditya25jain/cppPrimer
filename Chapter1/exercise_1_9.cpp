#include <iostream>

int main()
{
    int sum = 0;
    int loop = 50;
    while(loop <= 100)
    {
        sum += loop;
        loop++;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
