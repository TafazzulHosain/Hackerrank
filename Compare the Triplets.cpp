#include<bits/stdc++.h>
using namespace std;
vector<int> compareTriplets (vector<int> a, vector<int> b)
{
    vector<int> r(2,0);

    for(int i =0; i<3; i++)
    {
        if(a[i]>b[i])
        {
            r[0]++;
        }
        else if(a[i]<b[i])
        {
            r[1]++;
        }
    }
    return r;

}
int main()
{
    vector<int> a;
    vector<int> b;
    vector<int>result;
    int read;
    for(int i =0; i<3; i++)
    {
        cin>>read;
        a.push_back(read);
    }
    for(int i = 0; i<3; i++)
    {
        cin>>read;
        b.push_back(read);
    }

    result = compareTriplets(a,b);

    for(int i = 0; i<result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
