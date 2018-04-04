#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;
#define ll long long
int main()
{
 int n,k; cin>>n>>k;
 int a[n];
 int max =0;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 if(a[i]>max)
 max = a[i];
 }
 int ans=0;
 if(k<max)
 ans = max-k;
 cout<<ans<<endl;
 
}
