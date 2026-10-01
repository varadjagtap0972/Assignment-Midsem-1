#include <iostream>
using namespace std;

class A
{
private:
    int number;

public:
    A()
    {
        number = 100;
    }

    friend class B;
};

class B
{
public:
    void display(A obj)
    {
        cout << "Private Number: " << obj.number << endl;
    }
};

int main()
{
    A obj1;
    B obj2;

    obj2.display(obj1);

    return 0;
}