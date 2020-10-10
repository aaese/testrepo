#include<iostream>
using namespace std;
int main() {
	int n, m, chisl = 1, sumD1 = 0, sumD2 = 0;
	cin >> n >> m;
	int k = (n-1);
	int l = 0;
	int **A = new int*[n];
	for (int i = 0; i<n; i++) {
		A[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			A[i][j] = chisl;
			chisl++;
			if (i == j) {
				sumD1 += A[i][j];
			}
		}
	}
	for (int i = (n-1); i >=0; i--) {
		for (int j = (m-1); j >=0; j--) {
			if (i==k && j == l) {
				sumD2 += A[i][j];
				k--;
				l++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//cout << A[i][j];
			printf("%4d", A[i][j]);
		}
		cout << endl;
	}
	cout << "Sum of glav diag: " << sumD1 << endl;
	cout << "Sum of poboch diag: " << sumD2 << endl;
	system("pause");
	return 0;
}