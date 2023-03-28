#include<iostream>
#include<ctime>
using namespace std;


void summa(int arr[], int size)
{
	int sum = arr[0] + arr[1];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] + arr[i + 1] > sum)
		{
			sum = arr[i] + arr[i + 1];
		}
	}
	cout << sum;
}
int main() {
	srand(time(0));
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
}

