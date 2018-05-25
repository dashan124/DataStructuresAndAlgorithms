#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n){
	if(n<=1){
		return false;
	}
	if(n<=3){
		return true;
	}
	if(n%2==0||n%3==0){
		return false;
	}
	for(long long i=5;i*i<=n;i+=6){
		if(n%i==0||n%(i+2)==0){
			return false;
		}
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	for(int i1=0;i1<t;i1++){
		cout<<"Enter a number >>->>"<<endl;
	long long n;
	cin>>n;
	if(isPrime(n)==true){
		cout<<"Prime number"<<endl;
	}
	else{
		cout<<"not a prime number"<<endl;
	}
	}
	return 0;
}