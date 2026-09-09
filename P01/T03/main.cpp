#include <iostream>
#include <string>

using namespace std;

string second_largest(string arr[], int n) 
{
    string first = "";
    string second = "";

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > first) 
        {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    string arr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = 5;

    cout << "Вторая по величине строка: " << second_largest(arr, n) << endl;

    return 0;
}
