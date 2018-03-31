#include <iostream>
using namespace std;



int main() {
int m,n,r;
cin>>m>>n>>r;
int a[300][300];
for(int i = 0 ; i < m ; ++i){
    for(int j = 0; j < n ; ++j)
        cin>>a[i][j];
}

int left = 0;
int right = n-1;
int top = 0;
int down = m-1;
int tleft = 0;
int tright = n-1;
int ttop = 0;
int tdown = m-1;
int b[300][300];
int k,size;
int temp[1200];

while(true){
    k=0;
    for(int i = left; i <= right ; ++i)
    {
        temp[k] = a[top][i];
      //  cout<<temp[k]<<" ";
        ++k;
    }
    ++top;

    if(top > down || left > right) 
        break;

    for(int i = top; i <= down ; ++i)
    {
        temp[k]=a[i][right];
       // cout<<temp[k]<<" ";
        ++k;
    }
    --right;
    if(top > down || left > right) 
        break;

    for(int i = right; i >= left ; --i)
    {
        temp[k] = a[down][i];
      //  cout<<temp[k]<<" ";
        ++k;
    }
    --down;

    if(top > down || left > right) 
        break;

    for(int i = down; i >= top ; --i)
    {   
        temp[k] = a[i][left]; // cout<<temp[k]<<" ";
        ++k;
    }

    ++left;
    if(top > down || left > right) 
        break;

    //________________________________\\

    size = k;
    k=0;
   // cout<<size<<endl;
    for(int i = tleft; i <= tright ; ++i)
    {
        b[ttop][i] = temp[(k + (r%size))%size];
     //   cout<<(k + (r%size))%size<<" ";
     //   int index = (k + (r%size))%size;
       // cout<<index;
        ++k;
    }
    ++ttop;

    for(int i = ttop; i <= tdown ; ++i) {
        b[i][tright]=temp[(k + (r%size))%size];
        ++k;
    }
    --tright;

    for(int i = tright; i >= tleft ; --i)
    {
        b[tdown][i] = temp[(k + (r%size))%size];
        ++k;
    }
    --tdown;

    for(int i = tdown; i >= ttop ; --i)
    {   
        b[i][tleft] = temp[(k + (r%size))%size];
        ++k;
    }

    ++tleft;
}

size=k;
k=0;
if(top != ttop){
    for(int i = tleft; i <= tright ; ++i)
    {
        b[ttop][i] = temp[(k + (r%size))%size]; ++k;
    }
    ++ttop;
}
if(right!=tright){
    for(int i = ttop; i <= tdown ; ++i)
    {
        b[i][tright]=temp[(k + (r%size))%size];
        ++k;
    }
    --tright;
}
if(down!=tdown){
    for(int i = tright; i >= tleft ; --i)
    {
        b[tdown][i] = temp[(k + (r%size))%size];
        ++k;
    }
    --tdown;
}
if(left!=tleft){
    for(int i = tdown; i >= ttop ; --i)
    {   
        b[i][tleft] = temp[(k + (r%size))%size];
        ++k;
    }

    ++tleft;
}
for(int i = 0 ; i < m ;++i){
    for(int j = 0 ; j < n ;++j)
        cout<<b[i][j]<<" ";
    cout<<endl;
}

return 0;
}