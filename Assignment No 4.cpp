#include <iostream>
#include <string>
using namespace std;

class Product
{
    int product_Id;
    string product_Name;
    float price;
    int Monthly_sale[12];

public:
    void getInfo()
    {
        cout << "Enter Product ID: ";
        cin >> product_Id;

        cout << "Enter Product Name: ";
        cin >> product_Name;

        cout << "Enter Product Price: ";
        cin >> price;

        cout << "Enter Monthly Sales:" << endl;

        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> Monthly_sale[i];
        }
    }

    int Total_Quantity()
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
        {
            total = total + Monthly_sale[i];
        }

        return total;
    }

    void display()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product ID: " << product_Id << endl;
        cout << "Product Name: " << product_Name << endl;
        cout << "Product Price: " << price << endl;

        cout << "\nMonthly Sales:" << endl;

        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": "
                 << Monthly_sale[i] << endl;
        }

        cout << "\nTotal Yearly Sales: "
             << Total_Quantity() << endl;
    }
};

int main()
{
    Product p;

    p.getInfo();
    p.display();

    return 0;
}