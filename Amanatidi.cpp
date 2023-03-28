пирожки
#include<iostream>
#include<ctime>
using namespace std;


void summa(int arr[], int size) {
	int sum = arr[0] + arr[1];

	for (int i = 1; i < size; i++)
	{
		for (int j = 2; j < size; j++)
		{
			if (arr[i] + arr[j] > sum) {
				sum = arr[i] + arr[j];
			}
		}
		

	}
	cout << sum;
}

int main() {
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}


	cout << endl;

	summa(arr, size);






	return 0;
}
