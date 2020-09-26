#include<iostream>
using namespace std;
double ploshadTreugolnika(int a, int b, int c) {
	double p = (a + b + c) / 2;
	return (sqrt(p*(p - a)*(p - b)*(p - c)));
}
#include<iostream>
using namespace std;
int oleg  :: f1() {
	return 77;
}
namespace oleg {
	int f1(void);
}