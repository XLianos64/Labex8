#include <iostream>
#include "Product.h"

using namespace std;

int main()
{
	Product product(00001, "Milk");

	cout << "--- Product ---" << endl;
	cout << "Bar Code: " << product.getBarCode() << endl;
	cout << "Name: " << product.getProductName() << endl;

	PrePackedFood product2(00002, "Cereal", 5.00);

	cout << "--- Pre-Packed Food ---" << endl;
	cout << "Bar Code: " << product2.getBarCode() << endl;
	cout << "Name: " << product2.getProductName() << endl;
	cout << "Price: $" << product2.getUnitPrice() << endl;

	FreshFood product3(00003, "Banana", 10.00, 2.5);

	cout << "--- Fresh Food ---" << endl;
	cout << "Bar Code: " << product3.getBarCode() << endl;
	cout << "Name: " << product3.getProductName() << endl;
	cout << "Price: $" << product3.getUnitPrice() << endl;
	cout << "Weight: " << product3.getWeight() << endl;

	return 0;
}