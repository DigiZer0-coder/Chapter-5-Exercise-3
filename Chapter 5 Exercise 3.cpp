
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double distance;
	double speed = 0.00;
	int time = 0;
	
	cout << "Enter the speed in miles per hour: ";
	cin >> speed;
	cout << "Enter the time in hours: ";
	cin >> time;

	cout << "Hours        Distance" << endl;
	cout << "------------------------" << endl;

	if (speed <= 0 || time <= 0)
	{
		cout << "Please enter positive values for speed and time." << endl;
		cout << "Enter the speed in miles per hour: ";
		cin >> speed;
		cout << "Enter the time in hours: ";
		cin >> time;
	}

	for (time = 1; time <= 10; time++)
	{
		distance = speed * time;
		cout << time << "            " << distance << endl;
	}
}