/*
Задание для github
Пользователь вводит размер одномерного массива
Заполните массив случайными числами
Выведите массив на экран
Найдите наибольшую сумму двух соседних элементов
Выведите на экран эту наибольшую сумму
*/
#include <iostream>
#include <ctime>
int main()
{
	srand(int(time(NULL)));
	int size = 0, sum = 0, max = 0;
	std::cin >> size;
	int* arr = new int[size];
	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 - 10;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < size-1; i++)
	{
		sum = arr[i] + arr[i+1];
		if (sum > max) max = sum;
	}
	std::cout << max;
}
