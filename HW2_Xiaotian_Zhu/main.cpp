// HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"my_area.h"
#include"my_volume.h"
#include<iostream>
using namespace std;
int main() {
	double a = 2.5, b = 1.0, c = 1.5, d = 2.5, e = 1, f = 1, g = 60.0;
		int z = 1;
		double area_of_circle = area( a);
		double area_of_sphere = area(z,b);
		float area_of_rectangle = area(c, d);
		double area_of_triangle = area(e, f, g);

		double a1 = 1, b1 = 2.5, c1 = 1, d1 = 4, e1 = 2.5, f1 = 4.2, g1 = 6.0;
			int x1 = 1;
			double volume_of_sphere = volume(a1);
			double volume_of_cube = volume(x1, b1);
			double volume_of_cylinder = volume(c1, d1);
			double volume_of_prism = volume(e1, f1, g1);

	cout << "Area of a circle with radius 2.5 is "<<area_of_circle<< endl;
	cout << "Area of a unit sphere is " << area_of_sphere << endl;
	cout << "Area of a 1.5 x 2.5 rectangle is " << area_of_rectangle << endl;
	cout << "Area of  an equal lateral triangle with side length 1 is " << area_of_triangle << endl;
	cout << "Volume of a unit sphere is " << volume_of_sphere << endl;
	cout << "Volume of a cube with edge length 2.5 is " << volume_of_cube << endl;
	cout << "Volume of cylinder of radius 1 and height 4 is " << volume_of_cylinder << endl;
	cout << "Volume of a 2.5x4.2x6 rectangular prism is " << volume_of_prism << endl;



	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
