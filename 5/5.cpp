#include <iostream>
#include <iomanip>
#include<cstdlib>
int main()
{
	setlocale(LC_ALL, "Rus");
	size_t size_arr;
	std::cin >> size_arr;
	int** matrix = new int* [size_arr];
	for (size_t i = 0; i < size_arr; i++)
	matrix[i] = new int[size_arr];
	for (size_t i = 0; i < size_arr; i++)
	{
	for (size_t j = 0; j < size_arr; j++)
	std::cout << std::setw(5) << (matrix[i][j] = rand() % 100) << " ";
	std::cout << "\n";
	}
	double sum(0), count_elem(0);
	for (size_t i = 0; i < size_arr; i++)
	{
	for (size_t j = 0; j < size_arr; j++)
	if (i > j && matrix[i][j] % 2 == 0)
	{
	sum += matrix[i][j];
	count_elem++;
	}
	}
	std::cout << "\nСреднее арифметическое= " << (double) sum / count_elem;
	return 0;
}