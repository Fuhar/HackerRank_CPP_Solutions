#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
    cin >> a >> b;

    int na = a.size();
    int nb = b.size();
    cout << na << " " << nb << endl;

    cout << a + b << endl;

    char ch = a[0];
    a[0] = b[0];
    b[0] = ch;
    cout << a << " " << b;


    return 0;
}
