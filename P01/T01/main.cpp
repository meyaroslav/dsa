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
    int a[] = {4, 7, 11};

    cout << max_element_value(a, 3) << endl;
    cout << sum_elements(a, 3) << endl;
    cout << contains(a, 3, 7) << endl;

    return 0;
}
