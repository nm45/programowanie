#include "complex.cpp";
#include <string>
#include <iostream>
using namespace std;
int main() {
	complex *n1=new complex("8.4454B");
	cout << n1->ToString() << endl;
	delete n1;
	system("pause");
	return 0;
}