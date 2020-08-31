// HW9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<cmath>
using namespace std;
#include"Point.h"
int main()
{
	Point p1, p2;
	std::cout << "please give two points" << endl;
	std::cin >> p1 >> p2;
	std::cout << p1 << p2;
	std::cout <<"dot product is" <<p1.dot(p2);
	std::cout << -p1 << -p2;
	std::cout << p1 + p2;
	std::cout << p1 - p2;
	std::cout << p1 / p2 << endl;
	std::cout << (p1 > p2) << endl;
	std::cout << (p1 < p2) << endl;
	std::cout << pow(((p1 - p2).getX() * (p1 - p2).getX() + (p1 - p2).getY() * (p1 - p2).getY()), 0.5);
	//2
	ifstream infile1("xy_data.txt");
	if (!infile1)
		cout << "failed" << endl;
	int i = 0;
	Point p[10];
	while (i < 10) {
		infile1 >> p[i];
		i++;
	}
	infile1.close();
	//for (int i = 0; i < 10; i++) {
	//	cout << p[i] << " ";
	//}
	double length[10];
	for (int i = 0; i < 10; i++) {
		length[i] = p[i].length();
	}
	/*for (int i = 0; i < 10; i++) {
		cout << length[i] << " " << endl;
	}*/
	double length_replicator[10];
	for (int i = 0; i < 10; i++) {
		length_replicator[i]=length[i];
	}
	

	cout << "do you want to sort them in ascending  or descending order?" << endl;
	char c;
	cin >> c;
	
	if (c == 'a') {
		for (int i = 0; i <9; i++) {
			for (int j = 0; j < 9-i; j++) {
				if (length[j] > length[j+1]) {
					double temp = length[j];
					length[j] = length[j + 1];
					length[j + 1] = temp;
					


				}
			}
		}
	}
	else {
		for (int i = 0; i <9; i++) {
			for (int j = 0; j < 9 - i; j++) {
				if (length[j] < length[j + 1]) {
					double temp = length[j];
					length[j] = length[j + 1];
					length[j + 1] = temp;
					


				}
			}
		}

	}
	for (int i = 0; i < 10; i++) {
		cout << length[i] << endl;
		
	}
	int Index[10];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (length[i] == length_replicator[j]) {
				Index[i] = j;
			}
		}
	}
	cout << "the corresponding index is" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Index[i] << " ";
	}
	cout << endl<<"the sorted array is: " << endl;
	for (int i = 0; i < 10; i++) {
		
		cout<< p[Index[i]] << " " << endl;
	}
	//3
	cout << "please input another point"<<endl;
	Point p3;
	cin >> p3;
	 double closest[10];
	for (int i = 0; i < 10; i++) {
		closest[i] = pow(((p3 - p[i]).getX() * (p3 - p[i]).getX() + (p3 - p[i]).getY() * (p3 - p[i]).getY()), 0.5);
	}
	double min = closest[0];
	int minIndex = 0;
	for (int i = 0; i < 10; i++) {
		if (closest[i] < min) {
			min = closest[i];
			minIndex = i;
		}
	}
	cout <<"the closet point is"<< p[minIndex] << "and the distance is " << min;
	

	return 0;

	//
	//int i = 0;
	//double a, b ;
	//cout << "please initialize a point as A" << endl;
	//cin >> a;cin>> b;
	//Point point(a, b);
	//Point pointarr[5];
	//	cout << "please input corrdinates x and y 5 times" << endl;
	//	double m, n;
	//while (i < 5) {
	//	
	//	cin >> m; cin >> n;
	//	pointarr[i].setX(m);
	//	pointarr[i].setY(n);
	//	i++;
	//}
	//ofstream outfile;
	//outfile.open("outfile.txt");
	//
	//for (int i = 0; i < 5; i++) {
	//	/*double result[i]=distance_of_*/
	//	outfile << "Distance from (" << pointarr[i].getX() << "," << pointarr[i].getY() << ") to (" << point.getX() << ","<<point.getY() << ") is " << point.distance_to_point(pointarr[i]) << endl;
	//}
	//
	//outfile.close();
	///*pointarr->~Point();*/
	//return 0;

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
