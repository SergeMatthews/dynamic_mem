#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	int arr_size = 0;
	cout << "Введите размер массива: ";
	cin >> arr_size;

	int* arr = new int[arr_size];

	for (int i = 0; i < arr_size; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	cout << "Введённый массив: ";
	for (int i = 0; i < arr_size; ++i)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	delete[] arr;
	return 0;
}


