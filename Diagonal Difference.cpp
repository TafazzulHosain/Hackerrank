#include<bits/stdc++.h>
using namespace std;
int n;
int arr[15][15];
int diagonalDifference(){
    int ld =0 ;
    int rd =0;
    ///Time Complexity O(n*n)
    /*for(int i =0 ; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i==j) {ld += arr[i][j];}
            ///or if(i+j==n-1) {rd += arr[i][j];}
            if(i==n-j-1) {rd += arr[i][j];}
        }
    }*/
    ///Time complexity O(n)
    for(int i = 0; i<n; i++)
    {
        ld += arr[i][i];
        rd += arr[i][n-i-1];
    }


return abs(ld-rd);
}
int main()
{
    cin>>n;
    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<diagonalDifference()<<endl;
  //diagonalDifference();

    return 0;
}
