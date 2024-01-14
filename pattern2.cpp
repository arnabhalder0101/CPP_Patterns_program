#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter n: ";
    cin>> n;

    int i = 0;
    while (i<n)
    {
        int j = 0;
        while (j<n)
        {
            cout<<" "<<i+1<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}