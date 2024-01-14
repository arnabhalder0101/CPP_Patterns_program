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
        int j = 0, k = (n - i), l = (2 * i), m = 0;

        // Printing the 1st number loop
        while (j < (n - i))
        {
            cout << (j + 1);
            j++;
        }

        // Printing the stars in order

        if (i > 0)
        {
            while (l > 0)
            {
                cout << "*";
                l--;
            }
        }

        // Printing the reverse number(2nd) loop
        while (k > 0)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }

    return 0;
}