#include <IOSTREAM>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = n - i;
        int k = 0;
        while (k < i)
        {
            cout << " ";
            k++;
        }
        while (j > 0)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}