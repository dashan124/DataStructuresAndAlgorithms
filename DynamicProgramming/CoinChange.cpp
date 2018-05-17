#include<iostream>
using namespace std;
int CoinChangeNaive(int s[],int m,int n){
  if(n==0){
    return 1;
  }
  if(n<0){
    return 0;
  }
  if(m<=0 && n>=1){
    return 0;
  }
  return CoinChangeNaive(s,m-1,n)+CoinChangeNaive(s,m,n-s[m-1]);
}
int coinChangeDp(int s[],int m,int n){
  int table[n+1][m];
  int x;
  int y;
  for(int i=0;i<m;i++){
    table[0][i]=1;
  }
  for(int i=1;i<n+1;i++){
    for(int j=0;j<m;j++){
      x=i-s[j];
      if(x>=0){
        x=table[i-s[j]][j];
      }
      else{
        x=0;
      }
      y=j;
      if(j>=1){
        y=table[i][j-1];
      }
      else{
        y=0;
      }
    }
  }
  return table[n][m-1];
}
int main(){
  int arr[]={1,2,3};
  int n=4;
  cout<<CoinChangeNaive(s,3,4)<<endl;
  return 0;
}
