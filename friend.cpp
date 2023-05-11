#include <iostream>
using namespace std;

class Hello
{
public:
    void sun();
};
class Marvellous
{
public:
    void tun();
    void run();
};
class Demo
{
public:
    int A;

private:
    int B;

protected:
    int C;

public:
    Demo(int i, int j, int k)
    {
        A = i;
        B = j;
        C = k;
    }
    void fun()
    {
        cout << "Value of A : " << A << "\n";
        cout << "Value of B : " << B << "\n";
        cout << "Value of C : " << C << "\n";
    }
    friend void gun();
    friend void Hello::sun();
    friend class Marvellous;
};

void Hello::sun()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}
void Marvellous::tun()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}

void Marvellous::run()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}
void gun()
{
    Demo obj(10, 20, 30);
    cout << "Value of A : " << obj.A << "\n";
    cout << "Value of B : " << obj.B << "\n";
    cout << "Value of C : " << obj.C << "\n";
}

int main()
{
    gun();

    Hello obj1;
    obj1.sun();

    Marvellous obj2;
    obj2.run();
    obj2.tun();

    return 0;
}