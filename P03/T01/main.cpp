#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string a;
    cin >> a;
    
    int b = 0;
    for (int i = 1; i < a.size(); i++) 
    {
        if (a[i] >= 'a' && a[i] <= 'z') 
        {
            b++;
        }
    }

    if (b == 0) 
    {
        for (int i = 0; i < a.size(); i++) 
        {
            if (a[i] >= 'a' && a[i] <= 'z') 
            {
                a[i] = a[i] - 'a' + 'A';
            } 
            else 
            {
                a[i] = a[i] - 'A' + 'a';
            }
        }
    }

    cout << a << endl;
    return 0;
}
