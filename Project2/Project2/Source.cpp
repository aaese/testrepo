#include<iostream>
using namespace std;
int howfeel(double a) {
	a = a - (33.8);
	int n;
	if (a > 22) {
		n = 0;
	}
	if ((a < 23) && (a > 5)) {
		n = 1;
	}
	if (a < 6) {
		n = 2;
	}
	switch (n){
	case 0: return 1; break;
	case 1: return 2; break;
	case 2: return 3; break;
	}
}
int main() {
	double start, kon, shag;
	cin >> start >> kon >> shag;
	for (double far = start; far <= kon; far += shag) {
		int a = howfeel(far);
		double cel = ((5.0 / 9)*(far - 32));
		cout << "fahrenheit: " << far << " celsius: " << cel << " it is";
		if(cel > 22) {
			cout << " hot";
		}
		if ((cel < 23) && ( cel > 5)){
			cout << " warm";
		}
		if (cel < 6) {
			cout << " cold";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}