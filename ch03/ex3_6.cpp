#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    s = "Hello1 World";

    for (auto& c : s) {
        c = 'X';
    }
    
    cout << s << endl;

    return 0;
}
