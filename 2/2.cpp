#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите размер массива: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
	cout << "a[" << i << "]=";
	cin >> a[i];
	}
	int x, y;
	cout << "Введите интервал: ";
	cin >> x >> y;
	cout << "Не попавшие элементы: ";
	for (int i = 0; i < n; i++)
	if (a[i] < x || a[i] > y) cout << a[i] << " ";
	cout << "\n\n";
	return 0;
}