#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> num;
    int i;

    while (cin >> i) {
        num.push_back(i);
    }

    for (auto j = num.begin(); j != num.end() && !isspace(*j); ++j) {
        *j = (*j) * 2;
    }
    
    for (auto m : num) {
        cout << m << endl;
    }

    return 0;
}