#include<iostream>
using namespace std;
int main() {
	int n, step=0;
	long long int sum=0;
	cin >> n;
	int **A = new int*[n];
	for (int i = 0; i<n; i++) {
		A[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = pow(2, step);
			step++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			//cout << A[i][j];
			printf("%10d", A[i][j]);
			sum += A[i][j];
		}
		cout << endl;
	}
	cout << "Sum of the elements: " << sum <<'\n';
	system("pause");
	return 0;
}