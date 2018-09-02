#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<int> arr;
for(int e=0;e<n;e++)
{
int f;
cin>>f;
arr.push_back(f);

}
long long int ans=0;
sort(arr.begin(),arr.end());

int q=n/2;
for(int e=0;e<=q;e++)
{ 
if(arr[e]>m)
	ans=ans+arr[e]-m;
}
for(int e=q;e<arr.size();e++)
{
if(arr[e]<=m)
	{ans+=m-arr[e];
		//cout<<ans;
	}

}

cout<<ans;

}