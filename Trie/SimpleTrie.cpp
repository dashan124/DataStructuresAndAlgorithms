#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int AL=26;

struct TrieNode{
	struct TrieNode *children[AL];
	bool isEndOfWord;
};
struct TrieNode *getNode(void){
	struct TrieNode *pNod=new TrieNode;
	pNod->isEndOfWord=false;

	for(int i=0;i<26;i++){
		pNod->children[i]=NULL;
	}
	return pNod;
}
void insert(struct TrieNode *root,string key){
	struct TrieNode *temp=root;
	for(int i=0;i<key.length();i++){
		int index=key[i]-'a';
		if(temp->children[index]==NULL){
			temp->children[index]=getNode();
		}
		temp=temp->children[index];
	}
	temp->isEndOfWord=true;
}
bool search(struct TrieNode *root,string key)
{
struct TrieNode *temp=root;
for(int i=0;i<key.length();i++){
	int index=key[i]-'a';
	if(temp->children[index]==NULL){
		return false;
	}
	temp=temp->children[index];
}	
return (temp!=NULL && temp->isEndOfWord);
}
int main(){
	 string keys[] = { "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct TrieNode *root = getNode();
 
    // Construct trie
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 
    // Search for different keys
    search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    search(root, "these")? cout << "Yes\n" :
                           cout << "No\n";

	return 0;
}