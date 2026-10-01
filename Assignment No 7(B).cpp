#include <iostream>
using namespace std;

class B;

class A
{
private:
    int value1;

public:
    A(int x)
    {
        value1 = x;
    }

    friend void compare(A, B);
};

class B
{
private:
    int value2;

public:
    B(int y)
    {
        value2 = y;
    }

    friend void compare(A, B);
};

void compare(A a, B b)
{
    if (a.value1 > b.value2)
        cout << "Value in class A is greater";
    else if (a.value1 < b.value2)
        cout << "Value in class B is greater";
    else
        cout << "Both values are equal";

    cout << endl;
}

int main()
{
    A obj1(50);
    B obj2(30);

    compare(obj1, obj2);

    return 0;
}