#include "Product.h"

using namespace std;

Product::Product(int newBarCode, string name)
{
	barCode = (newBarCode > 0) ? newBarCode : 0;
	productName = new (nothrow) string;

	if (productName != nullptr)
	{
		*productName = (!name.empty()) ? name : "No name";
	}
	else
	{
		cout << "Memory allocation failed for product name." << endl;
	}
}

Product::~Product()
{
	delete productName;
	productName = nullptr;
}

PrePackedFood::PrePackedFood(int newBarCode, string name, double price) : Product(newBarCode, name)
{
	unitPrice = (price > 0) ? price : 0.0;
}

FreshFood::FreshFood(int newBarCode, string name, double price, double newWeight) : Product(newBarCode, name)
{
	unitPrice = (price > 0) ? price : 0.0;
	weight = (newWeight > 0) ? newWeight : 0.0;
}