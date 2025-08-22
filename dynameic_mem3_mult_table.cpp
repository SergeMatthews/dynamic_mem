#include <iostream>
using namespace std;

int** create_two_dim_array(int rows, int cols);
void fill_two_dim_array(int** arr, int rows, int cols);
void printf_two_dim_array(int** arr, int rows, int cols);
void delete_two_dim_array(int** arr, int rows, int cols);


int main()
{
	setlocale(LC_ALL, "RU");
	
	int rows(0), cols(0);
	cout << "Введите количество строк: ";
	cin >> rows;
	cout << "Введите количество столбцов: ";
	cin >> cols;

	int** mult_table = create_two_dim_array(rows, cols);
	fill_two_dim_array(mult_table, rows, cols);
	printf_two_dim_array(mult_table, rows, cols);
	delete_two_dim_array(mult_table, rows, cols);
	
	return 0;
}

int** create_two_dim_array(int rows, int cols) {
	int** arr = new int* [rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}
	return arr;
}
void fill_two_dim_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = (i + 1) * (j + 1);
		}
}
void printf_two_dim_array(int** arr, int rows, int cols) {
	cout << "Таблица умножения: " << endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
			cout << arr[i][j] << '\t';
		cout << endl;
	}
}
void delete_two_dim_array(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; ++i)
		delete[] arr[i];
	delete[] arr;
}
