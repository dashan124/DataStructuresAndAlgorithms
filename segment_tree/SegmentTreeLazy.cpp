#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void build_tree(long long *tree,long long *lazy,long long arr[],long long ss,long long se,long long si){
	if(ss>se){
		return;
	}
	if(ss==se){
		tree[si]=arr[ss];
		return;
	}
	long long mid=(ss+se)/2;
	build_tree(tree,lazy,arr,ss,mid,2*si+1);
	build_tree(tree,lazy,arr,mid+1,se,2*si+2);
	tree[si]=tree[2*si+1]+tree[2*si+2];
}
void update_tree(long long arr[],long long *tree,long long *lazy,long long start,long long end,long long left,long long right,long long value,long long si){
	if(lazy[si]!=0){
		tree[si]+=(end-start+1)*lazy[si];
		if(start!=end){
			lazy[2*si+1]+=lazy[si];
			lazy[2*si+2]+=lazy[si];
		}
		lazy[si]=0;
	}
	if(start>end){
		return;
	}
	if(start>right||end<left){
		return;
	}
	if(start>=left&&end<=right){
		tree[si]+=(end-start+1)*value;
		if(start!=end){
			lazy[2*si+1]+=value;
			lazy[2*si+2]+=value;
		}
		return;
	}
	long long mid=(start+end)/2;
	update_tree(arr,tree,lazy,start,mid,left,right,value,2*si+1);
	update_tree(arr,tree,lazy,mid+1,end,left,right,value,2*si+2);
	tree[si]=tree[si*2+1]+tree[2*si+2];

}
long long query_tree(long long arr[],long long *tree,long long *lazy,long long start,long long end,long long left,long long right,long long si){
	if(lazy[si]!=0){
		tree[si]+=(end-start+1)*lazy[si];
		if(start!=end){
			lazy[2*si+1]+=lazy[si];
			lazy[2*si+2]+=lazy[si];
		}
		lazy[si]=0;
	}
	if(start>end){
		return 0;
	}
	if(start>right||end<left){
		return 0;
	}
	if(start>=left&&end<=right){
		return tree[si];
	}
	long long mid=(start+end)/2;
	long long q1=query_tree(arr,tree,lazy,start,mid,left,right,2*si+1);
	long long q2=query_tree(arr,tree,lazy,mid+1,end,left,right,2*si+2);
	long long res=q1+q2;
	return res;
}
int main(){
	int t;
	cin>>t;
	for(int i1=0;i1<t;i1++){
		long long  n,c;
		cin>>n>>c;
		long long arr[n];
		for(long long i=0;i<n;i++){
			arr[i]=0;
		}
		int x=(int)(ceil(log2(n)));
		int max_size=2*((int)pow(2,x))-1;
		long long *tree=new long long[max_size];
		long long *lazy=new long long[max_size];
		memset(lazy,0,sizeof lazy);
		build_tree(tree,lazy,arr,0,n-1,0);
		for(long long i=0;i<c;i++){
			int query_type;
		cin>>query_type;
		if(query_type==0){
			long long p,q,v;
			cin>>p>>q>>v;
			update_tree(arr,tree,lazy,0,n-1,p-1,q-1,v,0);
			
		}
		else{
			long long p,q;
			cin>>p>>q;
			cout<<query_tree(arr,tree,lazy,0,n-1,p-1,q-1,0)<<endl;
		}
		}
	}
	return 0;
}