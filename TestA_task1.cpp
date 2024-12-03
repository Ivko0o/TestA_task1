#include <iostream>
#include <cmath>

using namespace std;

//This program will calculate how two circles interact with each other by given coordinates and radius

int main()
{
	int x1, y1, r1, x2, y2, r2 = 0;
	int distance = 0;				//Needed for calculating if the circles intersect


	//This part will take the coordinates and the radius of the first circle
	cout << "Enter three integers for the coordinates and radius of the first circle: " << endl << endl;

	cout << "Enter first coordinate(x1): ";
	cin >> x1;

	cout << "Enter second coordinate(y1): ";
	cin >> y1;

	cout << "Enter radius(r1): ";
	cin >> r1;
	cout << endl;

	//This validates if the radius is positive number
	while (r1 <= 0) {
		cout << "You need to enter a positive number for the radius" << endl;
		cout << "Try again: ";
		cin >> r1;
	}

	//This part will take the coordinates and the radius of the second circle
	cout << "Enter three integers for the coordinates of the first circle: " << endl;

	cout << "Enter first coordinate(x2): ";
	cin >> x2;

	cout << "Enter second coordinate(y2): ";
	cin >> y2;

	cout << "Enter radius(r2): ";
	cin >> r2;
	cout << endl << endl;


	//This validates if the radius is positive number
	while (r2 <= 0) {
		cout << "You need to enter a positive number for the radius" << endl;
		cout << "Try again: ";
		cin >> r2;
	}

	//This caclulates the distance needed between the two circle centers
	distance= sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));


	if (distance <= (r1 - r2)) {
		cout << "The second circle is inside the first circle!";
	}
	else if (distance <= (r2 - r1)) {
		cout << "The first circle is inside the second circle!";
	}
	else if (distance < (r1 + r2)) {
		cout << "The circles intersect each other!";
	}
	else if (distance == (r1 + r2)) {
		cout << "The circles touch each other!";     //He-he-he-he :D
	}
	else {
		cout << "The circles do not overlap!";
	}

}

