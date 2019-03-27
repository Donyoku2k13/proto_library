#define INTEGER
#define DOUBLE
#include "function.h"

int main()
{
	int* a;
	double* d;
	int n;
	cin >> n;

	a = new int[n];
	fill(a, n);
	print(a, n);
	delete[]a;


	d = new double[n];
	fill(d, n);
	print(d, n);
	delete[]d;


	system("pause");
}

