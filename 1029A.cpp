#include <bits/stdc++.h>
using namespace std;
int main()
{

int a,b;
string s;
cin>>a>>b;
cin>>s;
int extra=s.length();
for(int q=1;q<s.length();q++)
{
	int t=0;
for(int r=q;r<s.length();r++)
{
if(s[r]!=s[r-q])
	t=1;

}
if(t==0)
{
extra=min(extra,q);
}


}
//cout<<s.length()+(b-1)*extra;
string g=s.substr(s.length()-extra);
for(int e=0;e<b-1;e++)
s=s+g;
cout<<s;


}