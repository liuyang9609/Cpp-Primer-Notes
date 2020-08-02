#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    int i;
    while (cin >> i && i != 42) {
        num.push_back(i);
    }

    for (auto j : num) {
        cout << j << endl;
    }

    return 0;
}
