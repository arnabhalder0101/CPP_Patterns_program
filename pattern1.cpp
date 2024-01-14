#include <IOSTREAM>
using namespace std;
int main(){
    int n = 0;
    char sign;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter sign: ";
    cin>>sign;
    int i = 0;
    while (i<n)
    {
        int j = 0;
        while (j < n)
        {
            cout<<" "<< sign<< " ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
    return 0;
}