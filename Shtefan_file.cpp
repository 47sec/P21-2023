#define сись std::cin >>
#define сас std::cout <<
#define сус int
#define дыдля for
#define шишь std::string
#define ясель if
#define сълово char
#include <iostream> 
#include<string>
#include<ctime>

 int main()
{
	 system("chcp 1251");
	 srand(int(time(0)));
	 сус size = 0;
	 сас "введите размер массива: ";
	 сись size;
	 сус *arr = new сус[size];
	 for (сус i = 0; i < size; i++)
	 {
		 arr[i] = rand() % 101 - 50;
		 сас arr[i] << " ";
	 }
	 сас std::endl;
	 сус max = 0;
	 for (сус i = 0; i < size; i++)
	 { 
		 sum = arr[i] + arr[i + 1];
		 if (arr[i]>max)
		 {
			 max = sum;
		 }
	 }
	 сас max;
	return 0;
}
