#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary;
    float bonus;

public:
    // Default constructor
    Employee()
    {
        empId = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s, float b)
    {
        empId = id;
        name = n;
        salary = s;
        bonus = b;
    }

    // Display employee details
    void display()
    {
        cout << "\nEmployee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << salary + bonus << endl;
    }
};

int main()
{
    Employee e1;
    Employee e2(101, "Prem", 25000, 5000);

    cout << "--- Default Constructor ---" << endl;
    e1.display();

    cout << "\n--- Parameterized Constructor ---" << endl;
    e2.display();

    return 0;
}