#include <bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
    TrieNode* left;
    TrieNode* right;
};

void insert(TrieNode* head,int value){
    TrieNode* curr = head;
    for(int i = 31;i >= 0;i--){
        int bit = (value >> i)&1;
        if(bit == 0){
            if(curr->left == NULL){
                curr->left = new TrieNode();
                curr = curr->left;
            }else{
                curr = curr->left;
            }
        }else{
            if(curr->right == NULL){
                curr->right = new TrieNode();
                curr = curr->right;
            }else{
                curr = curr->right;
            }
        }
    }
}

int findMaxXorPair(TrieNode* head,int value){
    TrieNode* curr = head;
    int xorr = 0;
    for(int i = 31;i >= 0;i--){
        int bit = (value >> i)&1;
        if(bit == 0){
            if(curr->right != NULL){
                curr = curr->right;
                xorr += (1<<i);
            }else{
                curr = curr->left;
            }
        }else{
            if(curr->left != NULL){
                curr = curr->left;
                xorr += (1<<i);
            }else{
                curr = curr->right;
            }
        }
    }
    return xorr;
}

int main() {
    TrieNode* head = new TrieNode();
    int n;
    cin>>n;
    int res = INT_MIN;
    if(n > 0){
        int x;
        cin>>x;
        insert(head,x);
        n--;
    }
    while(n--){
        int x;
        cin>>x;
        res = max(res,findMaxXorPair(head,x));
        insert(head,x);
    }
    cout<<res<<"\n";
    return 0;
}
