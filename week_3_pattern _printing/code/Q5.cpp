// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the dimension of the pattern: ";
    cin>>n;
    // int t=n/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<"*";
            // k++;
        }
        cout<<endl;
    }
}