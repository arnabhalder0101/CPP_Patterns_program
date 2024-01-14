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
        int j = (n-i);
        while (j > 0)
        {
            cout << " * ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
