#include <iostream>

int main()
{
    int val = 0, sum = 0;
    std::cout << "Please enter numbers: " << std::endl;

    while (std::cin >> val) {
        sum += val;
    }

    return sum;
}
