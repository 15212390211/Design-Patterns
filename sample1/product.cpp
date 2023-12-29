#include <iostream>
#include "product.h"
using namespace std;

void ConcreateProdunctA::methodDiff()
{
    cout << "priduct_A" << endl;
}

void ConcreateProdunctB::methodDiff()
{
    cout << "priduct_B" << endl;
}


Product* Factory::getProduct(string str)
{
    Product* product = NULL;
    if (str == "A")
        product = new ConcreateProdunctA();
    else if (str == "B")
        product = new ConcreateProdunctB();
        
    return product;
}

