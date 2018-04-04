#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


//int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int main(){
    string s;
   char te[3];
    te[0]='S';
    te[1]='O';
    te[2]='S';
    cin >> s;int i=0,j=0,count=0;;
    while(s[i])
        {   if(j==3)j=0;
            if((s[i])!= (te[j]))count++;
            i++;j++;   
        }
    cout<<count;
    return 0;
}
    
