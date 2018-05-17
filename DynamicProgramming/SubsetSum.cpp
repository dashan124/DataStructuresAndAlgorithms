#include<iostream>
#include<stdio.h>
using namespace std;
int subsetSumNaive(int arr[],int n,int sum){
	//there are two possiblities that 
	// if we include the last element or donot include the last element
	if(sum==0){
		return true;
	}
	if(n==0 && sum!=0){
		return false;
	}
	// if the last element is greater than the
	//sum then exclude that element
	if(arr[n-1]>sum){
		subsetSumNaive(arr,n-1,sum);
	}
	else{
		//1.choose the last element or 
		//not choose element
		return subsetSumNaive(arr,n-1,sum-arr[n-1])||subsetSumNaive(arr,n-1,sum);
	}

}
int subsetSumDp(int arr[],int n,int sum){
	if(sum==0){
		return true;
	}
	if(n==0 && sum!=0){
		return false;
	}
	bool ar[n+1][sum+1];
	for(int i=0;i<=n;i++){
	     ar[i][0]=true;
	}
	for(int i=0;i<=sum;i++){
		ar[0][i]=false;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(j<arr[i-1]){
				ar[i][j]=ar[i-1][j];
			}
			if(j>=arr[i-1]){
				ar[i][j]=ar[i-1][j]||ar[i-1][j-arr[i-1]];
			}
		}
	}
	return ar[n][sum];
}
int main(){
	cout<<"Enter the no of elements in array"<<endl;
	int n;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"given Sum"<<endl;
	int sum;
	cin>>sum;
	if(subsetSumNaive(arr,n,sum)){
		cout<<"Sum exist"<<endl;
	}
	else{
		cout<<"no Subset exist with given sum"<<endl;
	}
	return 0;
}