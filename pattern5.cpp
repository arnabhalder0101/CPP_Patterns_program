#include <IOSTREAM>
using namespace std;

int main()
{
    int n = 0;
    int num = 1;
    cout << "Enter n: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            /* code */
            cout << " " << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}