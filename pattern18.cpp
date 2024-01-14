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
        int j = 0;
        while (j <= i)
        {
            int alpha_ascii = 65 + (n - 1);
            cout << (char)(alpha_ascii - i + j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}