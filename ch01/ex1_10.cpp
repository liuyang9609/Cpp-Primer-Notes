﻿#include <iostream>

int main()
{
    int sum = 0, val = 10;
    while (val >= 0) {
        sum += val;
        --val;
    }

    return sum;
}