#include <IOSTREAM>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter n: ";
    cin>> n;
    int i = 0;
    while (i<n)
    {
        /* code */
        int j=0;
        while (j<n)
        {
            /* code */
            cout<<(char) (65+i)<<" ";
            j++;
        }cout<<endl;
        i++;
    }
    
    return 0;
}