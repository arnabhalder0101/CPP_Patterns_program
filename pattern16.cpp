#include <IOSTREAM>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i =0;
    int a =0;
    while (i<n)
    {
        /* code */
        int j = 0;
        while (j<=i)
        {
            cout<<(char)(65+a)<<" ";
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}