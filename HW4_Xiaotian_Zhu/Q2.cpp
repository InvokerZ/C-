#include <iostream>
#include<string>

using namespace std;

int  oddeven(int i);
  void game() {
	
	L2:cout << "Do you want to play(Y/N)" << endl;
	string answer;
	cin >> answer;
	switch (answer == "Y" || answer == "y") {
	case true:
		cout << "please enter a positive integer" << endl;
		int integer;
		cin >> integer;
	L1:	switch (integer > 0) {
	case true: {
		
		int t = oddeven(integer);
		cout << "it took " << t << " steps to reduce " << integer << " to 1" << endl;
		
		goto L2;
		break;
	}
	case false:
		cout << "try again" << endl;
		cin >> integer;
		goto L1;
		break;
	}
	case false:
		break;
		
	}
}

  int time = 0;
  int t1 = 0;
  int oddeven(int i) {

	  switch (i) {
	  case 1: {
		  t1 = time;
		  time = 0;
		  return t1;

	  }
	  default:switch (i % 2) {
	  case 0: {
		  i = i / 2;
		  time += 1;
		  return oddeven(i);
	  }
	  case 1: {
		  i = 3 * i + 1;
		  time += 1;
		  return oddeven(i);
	  }
	  }
	  }
  }



