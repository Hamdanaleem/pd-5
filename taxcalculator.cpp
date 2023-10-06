#include<iostream>
using namespace std;
float total_price(char type, float price);
main() {
	char type; float price;
	cout << "Enter the vehicle type code (M, E, S, V, T): ";
	cin >> type;
	cout << "Enter the price of the vehicle: $";
	cin >> price;
	cout << "The final price of a vehicle of type " << type << " after adding the tax is $" << total_price(type, price);


}
float total_price(char type, float price)
{
	float total_price;
	if(type=='M')
	{
		total_price = price + (price * (.06));
	}
	if (type == 'E')
	{
		total_price = price + (price * (.08));
	}
	if (type == 'S')
	{
		total_price = price + (price * (.1));
	}
	if (type == 'V')
	{
		total_price = price + (price * (.12));
	}
	if (type == 'T')
	{
		total_price = price + (price * (.15));
	}
	return total_price;
}