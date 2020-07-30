#include <iostream>
#include <string>

using namespace std;


int main()
{
    string sq1, sq2;
    cout << "Please enter string1:\n" << endl;
    cin >> sq1;
    cout << "Please enter string2:\n" << endl;
    cin >> sq2;

    if (sq1 == sq2) {
        cout << "两字符串相等！\n" << endl;
    }
    else {
        cout << "两字符串不相等！\n" << endl;
        if (sq1.length() < sq2.length()) {
            cout << "The longer one is " << sq2 << endl;
        }
        else {
            cout << "The longer one is " << sq1 << endl;
        }

        if (sq1 < sq2) {
            cout << "The bigger one is " << sq2 << endl;
        }
        else {
            cout << "The bigger one is " << sq1 << endl;
        }
    }

    return 0;
}
