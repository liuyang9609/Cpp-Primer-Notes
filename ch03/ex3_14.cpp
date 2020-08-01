#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i = 0;
    vector<int> inter;

    while (cin >> i) {
        inter.push_back(i);
    }

    for (auto j : inter) {
        cout << j <<" "<< endl;
    }

    return 0;
}
