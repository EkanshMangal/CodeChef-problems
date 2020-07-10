Contest Code:JULY20B Problem Code:PTMSSNG
https://www.codechef.com/JULY20B/problems/PTMSSNG

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll  t1;
	scanf("%lld",&t1);
	while(t1--)
	{
		
		ll  n;
			scanf("%lld",&n);
		int   p =  (4*n)- 1;
	ll arrx[p];
	ll arry[p];
		for(int i = 0;i<p;i++)
		{
			ll x,y;
			scanf("%lld",&x);
			scanf("%lld",&y);
		arrx[i]  = x;
		arry[i]  = y;
		}
	
map<ll,ll>xmap;
map<ll,ll>ymap;
for(int i = 0;i<p;i++)
{
	xmap[arrx[i]]++;
}
for(int  i = 0;i<p;i++)
{
	ymap[arry[i]]++;
}
ll xcordinates = 0;
for(int  i=0;i<p;i++)
{

	if(xmap[arrx[i]]%2!=0)
	{
		xcordinates = arrx[i];
		break;
	}
}
ll ycordinates =0;
for(int  i=0;i<p;i++)
{

	if(ymap[arry[i]]%2!=0)
	{
		ycordinates = arry[i];
		break;
	}
}
printf("%lld",xcordinates);
cout<<"  ";
printf("%lld",ycordinates);
printf("\n");
}
return 0;

}