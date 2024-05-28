// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******
#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>t;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=t;j++)
        {
            if(i==1||i==n)
            {
                cout<<"*";
            }
            else if(j==1||j==t)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

}