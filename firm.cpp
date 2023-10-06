#include<iostream>
using namespace std;
void project_time_calculation(float hours, float days, float workers);
main()
{
	float hours, days, workers;
	cout << "Enter the needed hours: ";
	cin >> hours;
	cout << "Enter the days that the firm has: ";
	cin >> days;
	cout << "Enter the number of all workers: ";
	cin >> workers;
	project_time_calculation(hours, days, workers);
	
}
void project_time_calculation(float hours, float days, float workers)
{
	float time, left;
	time = (days - (days * 0.1)) * workers * 10;
	left = time - hours;
	if (time >= hours)
	{
		cout << "yes!" << left << " hours left.";

	}
	if (time < hours)
	{
		cout << "Not enough time! " <<(-1* left) << " hours needed.";

	}


}