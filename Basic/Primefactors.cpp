#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> gl;
vector <int> ::iterator itr;

void Primefactors(int n){
  int j=0;
  while(n%2==0){
    printf("%d\n",2);
    gl.push_back(2);
    j+=1;
    n=n/2;
  }
  for(int i=3;i<=sqrt(n);i=i+2){
    while(n%i==0){
      printf("%d\n",i);
      gl.push_back(i);
      j+=1;
      n=n/i;
    }
  }
  if(n>2){
    printf("%d\n",n);
    gl.push_back(n);
  }
}
int main(){
  int n;
  printf("Enter a Number\n");
  scanf("%d",&n);
  Primefactors(n);
  //int n1 = sizeof(arr) / sizeof(arr[0]);
  for(itr=gl.begin();itr!=gl.end();itr++){
    cout << *itr <<'\t';
  }
  printf("\n");
  return 0;
}
