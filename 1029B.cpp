#include <bits/stdc++.h>
using namespace std;
typedef long long int intz;
int main()
{
intz n;
cin>>n;
vector<intz> arr;
for(intz e=0;e<n;e++)
{
intz f;
cin>>f;
arr.push_back(f);
}
int l=1;
int prev=0;
int mx=1;
for(int e=0;e<arr.size();e++)
{
if(e==0)
{ prev=arr[e];
	l=1;
	continue;
}
else
{
if(arr[e]<=2*prev)
{
prev=arr[e];
++l;
//cout<<arr[e]<<" "<<l<<endl;
mx=max(mx,l);
}
else
{
prev=arr[e];
mx=max(mx,l);
l=1;


}

}
}
cout<<mx;
}