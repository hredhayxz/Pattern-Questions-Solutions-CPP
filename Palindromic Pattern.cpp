/*

Palindromic pattern for N columns and rows
                  1
                2 1 2
              3 2 1 2 3
            4 3 2 1 2 3 4
          5 4 3 2 1 2 3 4 5
        6 5 4 3 2 1 2 3 4 5 6
      7 6 5 4 3 2 1 2 3 4 5 6 7
    8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
  9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
10 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 10


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,j;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(j=1;j<=N-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(;j<=N;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=N+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}




