#include <iostream>

using namespace std;

int array_max(int arr[], int n) 
{
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}

int array_sum(int arr[], int n) 
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

bool array_check(int arr[], int n, int a)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == a) 
        {
            return true;
        }
    }

    return false;
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Максимальный элемент массива: " << array_max(arr, n) << endl;
    cout << "Сумма всех элементов массива: " << array_sum(arr, n) << endl;
    cout << "Проверка заданного числа: " << (array_check(arr, n, 6) ? "да" : "нет") << endl;

    return 0;
}
