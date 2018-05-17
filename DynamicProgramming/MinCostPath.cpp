#include<iostream>
using namespace std;
#define int_max 100000000
#define R 3
#define C 3
int min(int x,int y,int z);

int minCostNaive(int cost[R][C],int m,int n){
  if(n<0||m<0){
    return int_max;
  }
  else if(m==0 && n==0){
    return cost[m][n];
  }
  else{
    return cost[m][n]+min(
      minCostNaive(cost,m-1,n),
      minCostNaive(cost,m-1,n-1),
      minCostNaive(cost,m,n-1)
    );
  }
}
int minCostDP(int cost[R][C],int m,int n){
  int i,j;
  int total[R][C];
  total[0][0]=cost[0][0];
  for(i=1;i<=m;i++){
    total[i][0]=total[i-1][0]+cost[i][0];
  }
  for(j=0;j<=n;j++){
    total[0][j]=total[0][j-1]+cost[0][j];
  }
  for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
      total[i][j]=cost[i][j]+min(total[i-1][j-1],total[i-1][j],total[i][j-1]);
    }
  }
  return total[m][n];
}
int min(int x,int y,int z){
  if(x<y){
    if(x<z){
      return x;
    }
    else{
      return z;
    }
  }
  else{
    if(y<z){
      return y;
    }
    else{
      return z;
    }
  }
}

int main(){
  int cost[R][C]={
    {1,2,3},
    {4,8,2},
    {1,5,3}
  };
  cout<<minCostNaive(cost,2,2)<<endl;
  cout<<minCostDP(cost,2,2)<<endl;
}
