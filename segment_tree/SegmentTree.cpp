#include<iostream>
#include<math.h>
#include<cstdio>
#include<string.h>
#include<limits.h>

using namespace std;

void build_tree(int *tree,int *lazy,int arr[],int ss,int se,int si){
	if(ss>se){
		return;
	}
	if(ss==se){
		tree[si]=arr[ss];
		return;
	}
	int mid=(ss+se)/2;
	build_tree(tree,lazy,arr,ss,mid,2*si+1);
	build_tree(tree,lazy,arr,mid+1,se,2*si+2);
	tree[si]=tree[2*si+1]+tree[2*si+2];
}
void update_tree(int *tree,int *lazy,int arr[],int start,int end,int left,int right,int value,int si){
	/*if(lazy[si]!=0){
		tree[si]+=lazy[si];
		if(start!=end){
			lazy[2*si+1]+=lazy[si];
			lazy[2*si+2]+=lazy[si];
		}
		lazy[si]=0;
	}*/
	if(start>end||start>right||end<left){
		return;
	}
	/*if(start>=left||end<=right){
		tree[si]+=value;
		if(start!=end){
			lazy[2*si+1]+=value;
			lazy[2*si+2]+=value;
		}
		return;
	}*/
	tree[si]=tree[si]+value;
	if(start!=end){
		int mid=(start+end)/2;
	update_tree(tree,lazy,arr,start,mid,left,right,value,2*si+1);
	update_tree(tree,lazy,arr,mid+1,end,left,right,value,2*si+2);
	tree[si]=tree[2*si+1]+tree[2*si+2];
	}

}
int query_tree(int *tree,int *lazy,int arr[],int start,int end,int left,int right,int si){
	if(start>end||start>right||end<left){
		return 0;
	}
	if(left<=start&&right>=end){
		return tree[si];
	}
	int mid=(start+end)/2;
	return query_tree(tree,lazy,arr,start,mid,left,right,2*si+1)
	+query_tree(tree,lazy,arr,mid+1,end,left,right,2*si+2);
}
int main()
{
	int t;
	cin>>t;
	for(int i1=0;i1<t;i1++){
		int n,c;
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++){
			arr[i]=0;
		}
		int x=(int)(ceil(log2(n)));
		int max_size=2*((int)pow(2,x))-1;
		//cout<<"size"<<max_size<<endl;
		int *tree=new int[max_size];
		int *lazy=new int[max_size];
		build_tree(tree,lazy,arr,0,n-1,0);
		/*for(int i=0;i<max_size;i++){
			cout<<tree[i]<<" ";
		}
		cout<<endl;
		*/
		memset(lazy,0,sizeof lazy);
		for(int j=0;j<c;j++){
			int query_type;
		cin>>query_type;
		if(query_type==0){
			int p,q,v;
			cin>>p>>q>>v;
			update_tree(tree,lazy,arr,0,n-1,p-1,q-1,v,0);
			/*for(int i=0;i<max_size;i++){
				cout<<tree[i]<<" ";
			}
			cout<<endl;
			for(int i=0;i<max_size;i++){
				cout<<lazy[i]<<" ";
			}
			cout<<endl;
			*/
		}
		else{
			int p,q;
			cin>>p>>q;
			cout<<query_tree(tree,lazy,arr,0,n-1,p-1,q-1,0)<<endl;

		}
		}
	}
	return 0;
}