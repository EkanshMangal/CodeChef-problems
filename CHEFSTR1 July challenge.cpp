// Chef and Strings Problem Code: CHEFSTR1
// https://www.codechef.com/JULY20B/problems/CHEFSTR1

#include<bits/stdc++.h>
using namespace std;
long long fun(long long a, long long b)
{
    if(a>b)
    {
        return a-b-1;
    }
    else
    {
        return b-a-1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        long long count=0;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                count=count + fun(arr[i],arr[i-1]);
            }
        }
        cout<<count<<endl;
    }
    
}