#include<bits/stdc++.h>
using namespace std;
int lonlyInteger(vector<int> a)
{
    int res =0;
    for(int i =0; i<a.size(); i++)
    {
        res = res ^ a[i];
    }
    return res;
}
int main()
{
    vector<int> a;
    int n,read;
    cin>>n;
    for(int i =0; i<n; i++)
    {
        cin>>read;
        a.push_back(read);
    }
    cout<<lonlyInteger(a)<<endl;;
    return 0;
}
