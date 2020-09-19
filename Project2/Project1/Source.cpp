#include<iostream>
using namespace std;
int main() {
	int start, kon, shag;
	cin >> start >> kon >> shag;
	for (int i = start; i <= kon; i += shag) {
		cout << " farenhgeit" << i << "celcius" << i - 30 <<endl;
	}
	system("pause");
	return 0;
}