#include <iostream>
using namespace std;

double* create_array(int size);

int main()
{
    setlocale(LC_ALL, "RU");

    int arr_size = 0;
    cout << "Введите размер массива: ";
    cin >> arr_size;

    double* arr = create_array(arr_size);
    cout << "Массив: ";
    for (int i = 0; i < arr_size; ++i)
    {
        cout << arr[i] << ' ';
    }

    delete[] arr; 
    return 0;
}

double* create_array(int size) {
    return new double[size] {};
}


