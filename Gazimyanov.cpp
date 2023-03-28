#include<iostream>
#include<string>
#include<fstream>
#include<conio.h>
#include<vector>
#include<ctime>
int main() {
	system("chcp 1251");
	srand(int(time(NULL)));
	std::cout << "Введите размер массива: ";
	int size;
	int* sum = new int;
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
		std::cout << arr[i] << "\t";
	}
	int max = arr[0];
	std::cout << std::endl;
	for (int i = 1; i < size/2; i++)
	{
		sum[i] = arr[i] + arr[i + 1];
	}
	std::cout << std::endl;
	for (int i = 0; i < size/2; i++)
	{
	    if (max < sum[i]) 
		{
		max = sum[i];
	    }
	}
		std::cout << "Сумма: " << max << std::endl;
}
/*
Я так жестко срал.....
Показал туалетной двери свой оскал....
Я пробил своё дно!
И вышло оно, славное, сильное говно
Заплакал дракон от возжигающей вони,
в слезах утопил дерьма последние стоны.
Все дороги говну открыты теперь,
Всё то время что срал, смотрел я на дверь.
И кто срал так хотя бы разок,
Любого говна уважает кусок.
Тёмные тернистые густари, лились словно кровь!!
Калла потоки и мочи струи, покрыли толчок словно капли расы.
На заре!!!
Когда солнце восходит на небо,
Я сру и дристаю в пределах туалета.
*/
