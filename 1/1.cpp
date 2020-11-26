#include <iostream>
#include <cstdlib>
using namespace std;
#define n 5
int main() 
{
	setlocale(LC_ALL, "Russian");
	int mas[n][n];
	cout << "Интервал [3;4]" << endl;
	const int a = 3, b = 4; //промежуток от 3 до 4
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < n; i++) 
	{
	for (int j = 0; j < n; j++) 
	{
	mas[i][j] = rand() % 10 + 1;
	cout << mas[i][j] << " ";
	}
	cout << endl;
	}
	cout << "Конечный массив:" << endl;
	for (int i = 0; i < n; i++) 
	{
	for (int j = 0; j < n; j++) 
	{
	if (mas[i][j] >= a && mas[i][j] <= b) 
	{
	mas[i][j] = 0;
	}
	cout << mas[i][j] << " ";
	}
	cout << endl;
	}
	return 0;
    }