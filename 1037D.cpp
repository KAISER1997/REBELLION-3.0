#include <bits/stdc++.h>
using namespace std;
int check[300000]={0};
int val[300000]={0};
int store[300000]={0};
vector<int> arr[4000000];
int parent[300000]={0};
void DFS(int start,int u)
{

if(check[start]==1)
	return;
check[start]=1;

val[start]=u;
//cout<<start<<" "<<u<<endl;
store[u]+=1;
for(int e=0;e<arr[start].size();e++)
DFS(arr[start][e],u+1);

}


int main()
{

 
int n;
cin>>n;
for(int e=0;e<n-1;e++)
{
int a,b;
cin>>a>>b;
arr[a].push_back(b);
arr[b].push_back(a);
}
vector<int> qt;
for(int e=0;e<n;e++)
{
int f;
cin>>f;
qt.push_back(f);

}
DFS(1,1);



 

int q=1;
int ans=0;
int tv=0;
if(qt[0]!=1)
ans=-1;
for(int e=0;e<n;e++)
{
int k;
k=qt[e];
for(int et=0;et<arr[k].size();et++)
	if(val[arr[k][et]]>val[k])
		parent[arr[k][et]]=e;
	if(parent[k]<tv)
		ans=-1;
	else
		tv=max(tv,parent[k]);
if(val[k]!=q)
	ans=-1;
else
{
	if(store[q]==0)
		ans=-1;
store[q]=store[q]-1;
if(store[q]==0)
++q;

}

}


if(ans==0)
	cout<<"Yes";
else
	cout<<"No";
}