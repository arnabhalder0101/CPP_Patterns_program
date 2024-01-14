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
        int j = (n - i), k = 0, l = 0;
        
        // printing the space loop
        while (j > 0)
        {
            cout << " ";
            j--;
        }
        // printing the 1st number loop
        while (k <= i)
        {
            cout <<(k + 1);
            k++;
        }
        // printing the 2nd number loop
        while (l < i)
        {
            cout <<(i-l);
            l++;
        }
        cout << endl;
        i++;
    }

    return 0;
}