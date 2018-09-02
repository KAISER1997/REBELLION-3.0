#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
string a,b;
cin>>a>>b;

int cost=0;
for(int q=0;q<a.length();q++)
{
if(a[q]==b[q])
	continue;
if(q<(a.length()-1) && a[q]==b[q+1] && a[q+1]==b[q])
	{++cost;
		a[q]=b[q];
		a[q+1]=b[q+1];
}
else
cost+=1;



}
cout<<cost;
}