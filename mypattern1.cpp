#include <IOSTREAM>
using namespace std;
int main()
{
    int n;
    int i = 0;
    cout << "Enter value of n: ";
    cin >> n;
    while (i < n)
    {
        int j = 0;
        int k = 0;

        if (i == 0 && i == (n - 1))
        {
            while (k < n)
            {
                cout << " * ";
                k++;
            }
            cout << endl;
        }
        else
        {
            cout << " * ";
            while (j < (n - 2))
            {
                cout << " 1 ";
                j++;
            }
            cout << endl;
            
        }
        i++;
    }

    return 0;
}
