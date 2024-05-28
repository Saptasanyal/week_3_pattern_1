// Print the following pattern
// Input: n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the dimension: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)>=(n+1))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }

        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
    }
}