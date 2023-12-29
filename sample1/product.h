#pragma once

#include <iostream>
#include <string>
using namespace std;

class Product{
    public:
        void methodSame()
        {

        }
        virtual void methodDiff() = 0;
};

class ConcreateProdunctA : public Product{
public:
    void methodDiff();
};

class ConcreateProdunctB : public Product{
public:
    void methodDiff();
};

class Factory
{
public:
    Product* getProduct(string str);
};