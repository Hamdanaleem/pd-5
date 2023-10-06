#include<iostream>
#include<cmath>
#include<string>
using namespace std;
string unit;

string volume_of_pyramid(float length, float width, float height);
void units();
main() {

	float length; float width; float height;
	cout << "Enter the length of the pyramid (in meters): ";
	cin >> length;
	cout << "Enter the width of the pyramid (in meters): ";
	cin >> width;
	cout << "Enter the height of the pyramid (in meters): ";
	cin >> height;

	units();
	cout<< volume_of_pyramid(length, width, height);
}

void units()
{

	cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin >> unit;
}
string volume_of_pyramid(float length, float width, float height)
{
	float volume;
	volume = (length * width * height) / 3;
	if(unit=="centimeters")
	{
		volume = volume * pow(10, 6);
	}
	if (unit == "meters")
	{
		volume = volume;
	}
	if (unit == "millimeters")
	{
		volume = volume * pow(10, 9);
	}
	
	if (unit == "kilometers")
	{
		volume = volume * pow(10, -9);
	}
	string al = "The volume of the pyramidis: " + to_string(volume) + " cubic " + unit;
	return al;
}