#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Product
{
protected:
    int barCode;
    string* productName;

public:
    Product();
    Product(int, string);
    ~Product();

    void show(ostream&);
    void scanner();

    int getBarCode()
    {
        return barCode;
    }

    string getProductName()
    {
        return *productName;
    }
};

class PrePackedFood : public Product
{
private:
    double unitPrice;

public:
    PrePackedFood();
    PrePackedFood(int, string, double);

    void show(ostream&);
    void scanner();

    double getUnitPrice()
    {
        return unitPrice;
    }
};

class FreshFood : public Product
{
private:
    double unitPrice;
    double weight;

public:
    FreshFood();
    FreshFood(int, string, double, double);

    void show(ostream&);
    void scanner();

    double getUnitPrice()
    {
        return unitPrice;
    }

    double getWeight()
    {
        return weight;
    }
};
