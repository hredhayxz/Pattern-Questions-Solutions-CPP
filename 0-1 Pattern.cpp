/*
0-1 pattern for N columns and rows
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1 ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
