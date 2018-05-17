#include <iostream>
#include<limits.h>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int CutRodNaive(int arr[],int size){
	//there are two possiblities if we choose element or not choose
	if(size<=0){
		return 0;
	}
	int max_val=INT_MIN;
	for(int i=0;i<size;i++){
		max_val=max(max_val,arr[i]+CutRodNaive(arr,size-i-1));
	}
	return max_val;
}
int CutRodDP(int arr[],int size){
	if(size<=0){
		return 0;
	}
	int val[size+1];
	val[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			max_val=max(max_val,arr[j]+val[i-j-1]);
		}
		val[i]=max_val;
	}
	return val[n];
}
int main(){
	cout<<"Enter the no of elements in Array"<<endl;
	int size;
	cin>>size;
	cout<<"Enter the array elements"<<endl;
	int arr[size];
	int s[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
		s[i]=i+1;
	}
	cout<<CutRodNaive(arr,size)<<endl;
	return 0;
}