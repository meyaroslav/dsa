#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void sort_bubble(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sort_insert(int arr[], int n)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr1[] = {5, 2, 9, 1, 7, 3, 8, 4, 6, 0};
    int arr2[] = {5, 2, 9, 1, 7, 3, 8, 4, 6, 0};
    int n = 10;

    auto start1 = high_resolution_clock::now();
    sort_bubble(arr1, n);
    auto end1 = high_resolution_clock::now();

    auto start2 = high_resolution_clock::now();
    sort_insert(arr2, n);
    auto end2 = high_resolution_clock::now();

    cout << "Пузырьковая сортировка: " << duration_cast<microseconds>(end1 - start1).count() << " микросекунд" << endl;
    cout << "Сортировка вставками: " << duration_cast<microseconds>(end2 - start2).count() << " микросекунд" << endl;

    return 0;
}
