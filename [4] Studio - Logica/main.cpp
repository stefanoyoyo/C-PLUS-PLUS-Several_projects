#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string print (bool val) {
	string s = "";
	if (val) {
		s = "condition is true";
	} else {
		s = "condition is false";
	}
		return s;
}

int main(int argc, char** argv) {
	
	bool a = true;
	bool b = false;
	
	cout<< print(a & b);
	
	return 0;
	
}


