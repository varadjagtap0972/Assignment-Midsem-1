#include <iostream>
using namespace std;

class Student
{
    int rollno;
    static int count;

public:
    Student(int r)
    {
        rollno = r;
        count++;
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
    }

    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1(1), s2(2), s3(3);

    s1.display();
    s2.display();
    s3.display();

    Student::showCount();

    return 0;
}