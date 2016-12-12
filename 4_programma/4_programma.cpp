#include <iostream>
using namespace std;
int main()
{
	int a = 1, n, n1, i, j, k;
	int M[3][3];
	int M1[3][3];
	for (i = 1; i<4; i++)
		for (j = 1; j<4; j++)
		{
			M[i][j] = a;
			a++;
		}
	setlocale(LC_ALL, "Russian");
	cout << "¬ведите число поворотов ";
	cin >> n;
	n1 = n % 4;
	for (k = 1; k<n1 + 1; k++)
	{
		for (i = 1; i<4; i++)
			for (j = 1; j<4; j++)
				M1[j][4 - i] = M[i][j];
		for (i = 1; i<4; i++)
			for (j = 1; j<4; j++)
				M[i][j] = M1[i][j];
	}
	for (i = 1; i<4; i++)
	{
		cout << "\n";
		for (j = 1; j<4; j++)
			cout << M[i][j];
	}
	return 0;
}