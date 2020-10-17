#include<iostream>
using namespace std;
int main() {
	int n, m, a, b, counter = -1;
	cin >> n >> m >> a >> b;
	int **A = new int*[n];
	for (int i = 0; i<n; i++) {
		A[i] = new int[m];
		for (int j = 0; j < m; j++) {
			A[i][j] = rand() % b + a;
		}
	}
	int *B = new int[n*m];
	for (int d = 0; 2 * d < n && 2 * d < m; d++) {
		for (int y = d; y < m - d && counter < n * m; y++)
			B[++counter] = A[d][y];
		for (int x = d + 1; x < n - d && counter < n * m; x++)
			B[++counter] = A[x][m - d - 1];
		for (int y = m - d - 2; y >= d && counter < n * m; y--)
			B[++counter] = A[n - d - 1][y];
		for (int x = n - d - 2; x > d && counter < n * m; x--)
			B[++counter] = A[x][d];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n*m; i++) {
		cout << B[i] << " ";
	}
	system("pause");
	return 0;
}