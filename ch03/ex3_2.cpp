#include <iostream>
#include <string>

using namespace std;


int main()
{
    string myword;

    //while (getline(cin, myword)) {
    //    cout << myword << endl;
    //}

    while (cin >> myword) {
        cout << myword << endl;
    }

    return 0;

}
