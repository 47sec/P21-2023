#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int N;
    int sum = 0;
    cout << "vvedite razmer: ";
    cin >> N;
    int* A = new int[N];
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        A[i] = 10 + rand() % 11;
        cout << A[i] << " ";
    }
    system("PAUSE");
    sum = A[0] + A[1];
    for (int i = 1, k = 2; k < N; i++, k++) {
        if (A[i] + A[k] > sum) {
            sum = A[i] + A[k];
        }
    }
    cout << "Summa = " << sum << endl;
    cin.get();
    return 0;
}
