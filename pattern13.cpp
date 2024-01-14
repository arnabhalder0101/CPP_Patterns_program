#include <IOSTREAM>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 0;
    int a = 0;
    while (i < n)
    {
        int j = 0;

        while (j < n)
        {
            cout << (char)(65 + a)<<" ";
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}