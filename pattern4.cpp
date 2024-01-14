#include <IOSTREAM>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i = 0;
    while (i<n)
    {
        int j = n;
        while (j>0)
        {
            /* code */
            cout<<" " <<j<<" ";
            j--;
        }
        cout<<endl;
        i++;        
    }
    
    return 0;
}