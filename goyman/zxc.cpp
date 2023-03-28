#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	cout << "vvedite razmer: ";
	cin>> N;
	int* pon = new int[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		pon[i] = 10 + rand() % 11;
		cout <<pon[i] <<" ";
	}
	system("PAUSE");
	sum = pon[0] + pon[1];
	for (int i = 1, k = 2; k < N; i++, k++) {
		if (pon[i] + pon[k] > sum) {
			sum = pon[i] + pon[k];
		}
	}
	cout<< "Summa = " <<sum « endl;
	cin.get();
	return 0;
}
