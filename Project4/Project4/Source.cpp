#include<iostream>
using namespace std;
int main() {
	unsigned char val = 0;
	do {
		cout << int(val) << '\n';
	} 
	while (val++ < 255);
	system("pause");
	return 0;
}