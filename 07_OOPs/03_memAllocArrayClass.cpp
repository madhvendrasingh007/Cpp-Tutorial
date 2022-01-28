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
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{   int it;
    cout<<"Enter the no. of item"<<endl;
    cin>>it;
    Shop dukaan;
    dukaan.initCounter();
    
    for(int i=0;i<it;i++){
        dukaan.setPrice();
    }
    
    dukaan.displayPrice();

    /* Memory allocation using heap
    int a=10;
    int *p = new int();
    *p=10;
    delete(p);
    p = new int[4];

    delete[]p;
    p=NULL;
    */
    return 0;
}