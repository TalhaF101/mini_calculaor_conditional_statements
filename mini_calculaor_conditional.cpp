// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int option ;

	cout << " --------- MENU ---------" << endl;
	cout << "Press (1) to find the sum of two Integers" << endl;
	cout << "Press (2) to find the Power of a number" << endl;
	cout << "Press (3) to find the Square Root of a number" << endl;
	cout << "Press (4) to find the distance between two points" << endl;
	cout << "Press (0) to exit the Program...." << endl;
	cin >> option;

	
	
	if (option == 0)  //program exit
	{
		cout << "Exiting the Program...." << endl;
	}

	else if (option == 1) //sum
	{
		double a, b;

		cout << "Enter the first integer: " << endl;

		cin >> a;

		cout << "Enter the second integer: " << endl;

		cin >> b;

		double sum = a + b;

        cout << "Sum is: " << sum << endl;


	} //end sum

	else if (option == 2)  //finding power
	{
		double base, exponent;

        cout << "Enter base & exponent:" << endl;

		cin >> base >> exponent;

		double power = pow(base, exponent);

		cout << "Power = " << power << endl;

	} //end power

	else if (option == 3)  // finding sqrt
	{
		double num;

		cout << "Enter a number: " << endl;

		cin >> num;

		double ans = sqrt(num);

		cout << "The square root is: " << ans << endl;
	}  //end sqrt

	else if (option == 4)  // finding distance bw two points
	{
		double x1, x2, y1, y2;

		cout << "Enter the coordinates of first point (x1,y1)" << endl;

		cin >> x1 >> y1;

		cout << "Enter the coordinates of second point (x2,y2)" << endl;

		cin >> x2 >> y2;

		double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		cout << "The distance between two points is: " << distance << endl;

	}  // end find distance
		
	else
	{
		cout << "Enter a valid Input please..." << endl;
	}
	
	return 0;
}



