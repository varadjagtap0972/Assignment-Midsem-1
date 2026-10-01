#include <iostream>
using namespace std;

class Book
{
    int book_id;
    string book_name;
    float price;

public:
    // Parameterized Constructor
    Book(int id, string name, float p)
    {
        book_id = id;
        book_name = name;
        price = p;
    }

    // Copy Constructor
    Book(const Book &b)
    {
        book_id = b.book_id;
        book_name = b.book_name;
        price = b.price;
    }

    // Display Function
    void display()
    {
        cout << "Book ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called for " << book_name << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming", 450.50);

    Book b2 = b1;

    cout << "Original Book Details:" << endl;
    b1.display();

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}