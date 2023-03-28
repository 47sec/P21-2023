#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int size, fmax = 0, sum = 0, tmax;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 201 - 100;
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		sum = arr[i] + arr[i + 1];
		if (fmax < sum)
		{
			fmax = sum;
		}
	}
	std::cout << std::endl << fmax;
	return 0;
}
