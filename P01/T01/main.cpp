#include <iostream>

using namespace std;

int max_element_value(const int a[], int n)
{
    int max = a[0];

    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

long long sum_elements(const int a[], int n)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

bool contains(const int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return true;

    return false;
}

int main()
{
    {
        int a[] = {};

        cout << "=== Тест 1 ===" << endl;
        cout << "Максимум: не вызываем" << endl;
        cout << "Сумма: " << sum_elements(a, 0) << endl;
        cout << "Проверка contains: " << contains(a, 0, 5) << endl;
    }

    {
        int a[] = {5};

        cout << "=== Тест 2 ===" << endl;
        cout << "Максимум: " << max_element_value(a, 1) << endl;
        cout << "Сумма: " << sum_elements(a, 1) << endl;
        cout << "Проверка contains: " << contains(a, 1, 5) << endl;
    }

    {
        int a[] = {-8, -3, -10};

        cout << "=== Тест 3 ===" << endl;
        cout << "Максимум: " << max_element_value(a, 3) << endl;
        cout << "Сумма: " << sum_elements(a, 3) << endl;
        cout << "Проверка contains: " << contains(a, 3, -3) << endl;
    }

    {
        int a[] = {4, 7, 11};

        cout << "=== Тест 4 ===" << endl;
        cout << "Максимум: " << max_element_value(a, 3) << endl;
        cout << "Сумма: " << sum_elements(a, 3) << endl;
        cout << "Проверка contains: " << contains(a, 3, 6) << endl;
    }

    {
        int a[] = {7, 7, 9};

        cout << "=== Тест 5 ===" << endl;
        cout << "Максимум: " << max_element_value(a, 3) << endl;
        cout << "Сумма: " << sum_elements(a, 3) << endl;
        cout << "Проверка contains: " << contains(a, 3, 7) << endl;
    }

    return 0;
}
