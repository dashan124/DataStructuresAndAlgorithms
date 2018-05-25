#include <bits/stdc++.h>
#include <iostream>

using namespace std;
long long power(long long x,long long y,long long p){
	long long re=1;
	x=x%p;
	while(y>0){
		if(y&1){
			re=(re*x)%p;
		}
		y=(long long)y/(long long)2;
		x=(x*x)%p;
	}
	return re;
}
bool millerTest(long long d,long long n){
	long long a=(long long)2+rand()%(n-4);
	long long x=(long long)power(a,d,n);
	if(x==1||x==n-1){
		return true;
	}
	while(d!=n-1){
		x=(long long)(x*x)%n;
		d*=2;
		if(x==1){
			return false;
		}
		if(x==n-1){
			return true;
		}
	}
	return false;
}
bool isPrime(long long n,long long k){
	if(n<=1){
		return false;
	}
	if(n<=3){
		return true;
	}
	if(n==4){
		return false;
	}
	long long d=n-1;
	while(d%2==0){
		d=d/(long long)2;
	}
	d=(long long)d;
	for(long long i=0;i<k;i++){
		if(millerTest(d,n)==false){
			return false;
		}
	}
	return true;

}

int main(){
	int t;
	cin>>t;
	for(int i1=0;i1<t;i1++){
		long long n;
		long long m;
		cin>>m>>n;
		for(long long i=m;i<=n;i++){
			if(isPrime(i,2)){
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
	return 0;
}