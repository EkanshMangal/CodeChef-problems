Chef and Card Game 
Problem Code: CRDGAME

https://www.codechef.com/JULY20B/problems/CRDGAME/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(long long t)
{
    int i,sum=0;
    string s=to_string(t);
    for (i=0;i<s.length();i++)
    {
         sum= sum + (int(s[i])-48);
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0;
        cin>>n;
        long long a,b;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a>=10)
            {
                a=fun(a);
            }
            if(b>=10)
            {
                b=fun(b);
            }
            if(a>b)
            {
                c1++;
            }
            if(b>a)
            {
                c2++;
            }
            if(a==b)
            {
                c1++;
                c2++;
            }
        }
        if(c1>c2)
        {
            cout<<0<<" "<<c1<<endl;
        }
        if(c2>c1)
        {
            cout<<1<<" "<<c2<<endl;
        }
        if(c1==c2)
        {
            cout<<2<<" "<<c1<<endl;
        }
    }

}
