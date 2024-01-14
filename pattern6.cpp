#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}