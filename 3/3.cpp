#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int arr[5] = { 1,2,3,4,5 };
	int min = arr[0];
	int index = 0;
	for (int i = 1;i < 5;i++)
	{
	if (arr[i] < min)
	{
	min = arr[i];
    index = i;
	}
	}
	cout << "Минимальный элмент = " << min << endl;
	cout << "Индекс элемента = " << index << endl;
	return 0;
}