#include <iostream>
#include "product.h"
using namespace std;

int main()
{
    Product* product = NULL;
    Factory* myfactry = new Factory;
    product = myfactry->getProduct("A");
    product->methodSame();
    product->methodDiff();
    return 0;
}


