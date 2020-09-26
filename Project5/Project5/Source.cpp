#include<iostream>
using namespace std;
int main() {
	const int n = 10;
	double a[n];
	double MAX = -1, min=101;
	double sr = 0;
	for (int i = 0; i < n; i++) {
		a[i] = rand()%100;
		if (a[i] <= min) {
			min = a[i];
		}
		if (a[i] >= MAX) {
			MAX = a[i];
		}
		sr += a[i];
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "min = " << min << '\n';
	cout << "max = " << MAX << '\n';
	cout << "sr znach = " << (sr / n) << '\n';
	system("pause");
	return 0;
}