#include<iostream>
using namespace std;
void move(char x, char y);
void move_rings(int n, char from, char to, char spare) {
	void move(char x, char y);
	if (n == 1) {	
		move( from , spare);
	}
	else {
		move_rings(n - 1, from, spare, to);
		move(from, spare);
		move_rings(n - 1, to, from, spare);
	}
}
void move(char x, char y)

{

	cout << "move from " << x << " to " << y<<endl;

}