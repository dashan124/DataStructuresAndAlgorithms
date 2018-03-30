#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int divSum(int num){
  int result=0;
  for(int i=2;i<=sqrt(num);i++){
    if(num%i==0){
      if(i==(num/i)){
        result+=i;
      }
      else{
        result+=(i+num/i);
      }
    }
  }
  return (result+1);
}
int main(){
  int num;
  cin >> num;
  cout <<divSum(num)<<endl;
  return 0;
}
