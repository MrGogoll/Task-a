//Oleg
//09.10.22
//L1

#include <iostream>
using namespace std;
int main() {
	cout << " hello me!";
	int a;
	cin >> a;
	int fd, sd;
	sd = a % 10;
	sd *= 10;
	cout << sd;
	cout << &a <<endl;
}
