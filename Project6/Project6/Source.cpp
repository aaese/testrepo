#include<iostream>
using namespace std;
int main() {
	cout << "vertical = 1" << '\n';
	cout << "horizontal = 0" << '\n';
	cout << "Which do you prefer? : ";
	int flag;
	cin >> flag;
	//cout << '\n';
	const int x = 5, y = 5;
	int a[x][y];
	int counter = 0;
	for (int i = 0; i < x; i++) {
		if ((i % 2) == 0) {
			for (int j = 0; j < y; j++) {
				a[i][j] = counter;
				counter++;
			}
			cout << endl;
		}
		else {
			for (int j = (y - 1); j >= 0; j--) {
				a[i][j] = counter;
				counter++;
			}
			cout << endl;
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (flag) {
				printf("%4d", a[j][i]);
			}
			else {
				printf("%4d", a[i][j]);
			}
		}
		cout<< endl;
	}
	system("pause");
	return 0;
}