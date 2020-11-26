#include <iostream>
#include<cstdlib>
using namespace std;
#define N 255
void main()
{
	setlocale(LC_ALL, "Russian");
	double a = 0, i, n = 0;
	double A[N], max = -32767;
	cout << "Введите количество элементов: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
	cout << "Введите элемент " << i << " : ";
	cin >> a;
	if (a < 0 && max < a)
	{
	max = a;
	}
	}
	cout << "Максимальный отрицательный элемент: " << max;
}