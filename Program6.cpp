#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    // Using modulu operator on normal numbers
    cout << a % b << endl;
    cout << endl;
    // Condition for number
    cout << 2 % 2 << endl;
    cout << 3 % 4 << endl; // if a<b then a%b=a
    cout << endl;
    // Negative number
    cout << -40 % 6 << endl;
    cout << 40 % -6 << endl;
    cout << -40 % -9;

    return 0;
}