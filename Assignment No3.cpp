#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    // Function defined inside the class
    int Area(int L, int B)
    {
        int area = L * B;
        return area;
    }

    // Function declaration
    int Perimeter(int L, int B);

    void display(int L, int B)
    {
        cout << "Area of Rectangle: " << Area(L, B) << endl;
        cout << "Perimeter of Rectangle: "
             << Perimeter(L, B) << endl;
    }
};

// Function defined outside the class
int Rectangle::Perimeter(int L, int B)
{
    return 2 * (L + B);
}

int main()
{
    Rectangle r;
    int length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    r.display(length, breadth);

    return 0;
}