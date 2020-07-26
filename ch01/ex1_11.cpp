#include <iostream>

int main()
{
    int num1 = 0, num2 = 0;
    int val = 0, term = 0, sum = 0;
    std::cout << "Please enter two numbers:" << std::endl;
    std::cin >> num1 >> num2;
    if (num1 > num2) {
        val = num2;
        term = num1;
    }
    else {
        val = num1;
        term = num2;
    }
    while (val <= term) {
        sum += val;
        val++;
    }

    return sum;
}