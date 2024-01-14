#include <IOSTREAM>
using namespace std;

int main()
{
    int n, types = 0;
    string character = "*";
    cout << "Enter n: ";
    cin >> n;
    
    cout<< "Which kind of triangle you want?\n";
    cout<< "(Right angle (0)/ Scalene (1)/ Equilateral(2)): ";
    cin>>types;

    if (types < 0 || types > 2)
        cout << "Invalid input. Please enter 0, 1, or 2.\n";
    if (types == 0)
        character = "*";
    if (types == 1)
        character = " * ";
    if (types == 2)
        character = "* ";

    int i = 0;
    while (i < n)
    {
        int j = 0;
        int k = (n - 1);
        while (k > i)
        {
            cout << " ";
            k--;
        }
        while (j <= i)
        {
            cout << character;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}