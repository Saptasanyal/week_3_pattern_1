// Print the following pattern
// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the dimension of the pattern: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=65,t=1;
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<(char)k<<" ";
                k++;
            }
            else{
                cout<<t<<" ";
                t++;
            }
            
        }
        cout<<endl;
    }
}