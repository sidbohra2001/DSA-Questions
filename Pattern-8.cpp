#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i - 1; j > 0; j--) cout << " ";
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 )
                cout << i + 1;
            else
                cout << ' ';
        }
        for (int j = 0; j < i; j++)
        {
            if (j == i-1)
                cout << i + 1;
            else
                cout << ' ';
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j <= i; j++) cout << " ";
        for (int j = n - 1 - i; j > 0; j--)
        {
            if (j == n - 1 - i)
                cout << n - 1 - i;
            else
                cout << ' ';
        }
        for (int j = n - i - 1; j > 1; j--)
        {
            if (j == 2)
                cout << n - 1 - i;
            else
                cout << ' ';
        }
        cout << endl;
    }
}
