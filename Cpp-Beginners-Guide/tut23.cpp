// Object Memory Allocation &
// usng Arrays in classes

#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << " Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << " Enter Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " the price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop Dukaan;
    Dukaan.initCounter();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.displayPrice();

    return 0;
}