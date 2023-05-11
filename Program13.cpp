#include <iostream>
using namespace std;
int Add(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}
int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    cout << "Enter number1:";
    cin >> number1;
    cout << "Enter number2:";
    cin >> number2;
    sum = Add(number1, number2);
    cout << "Addition of " << number1 << "+" << number2 << "=" << sum;
    return 0;
}