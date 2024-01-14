#include <IOSTREAM>
using namespace std;
int main(){
    int n = 0;
    int i = 1;
    cout<<"Enter n: ";
    cin>> n;
    while (i<=n)
    {
        int j = 0;
        while (j<i)
        {
            cout<<" "<<(i+j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}