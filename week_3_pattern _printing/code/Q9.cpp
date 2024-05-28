// Print the following pattern
// Input : n = 4
// Output :
// A
// A B
// A B C
// A B C D
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the dimension: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=65;
        for(int j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            {
                cout<<(char)k;
                k++;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}