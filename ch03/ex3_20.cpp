#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    vector<int> sum;
    int i;
    int j;

    while (cin >> i) {
        num.push_back(i);
    }

    for (int m = 0; m < num.size() - 1; m++) {
        int x = num[m];
        int y = num[m+1];
        
        j = x + y;
        sum.push_back(j);
        m += 1;
    }

    for (auto n : sum) {
        cout << n << endl;
    }

    return 0;
}