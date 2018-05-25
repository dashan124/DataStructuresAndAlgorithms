#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool isPrime(long long n){
	if(n<=1){
		return false;
	}
	for(long long i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	for(int i1=0;i1<t;i1++){
		cout<<"Enter a number for prime check"<<endl;
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