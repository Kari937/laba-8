#include <iostream>
#include <iomanip>
#include<cstdlib>
//Задача 7
using namespace std;
int main(int argc, char* argv[])
{
	const int n = 10;
	int x = 0;
	int a[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n - x; i++)
	if (a[i] % 2 == 0)
	{
	x++;
	for (int j = i + 1;j < n;j++)
	a[j - 1] = a[j];
	i--;
	}
	for (int i = 0; i < n - x; i++)
	cout << a[i] << "  ";
	return 0;
}