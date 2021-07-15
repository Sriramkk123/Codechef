#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    char data;
    unordered_map<char,Node*> child;
    bool isLastChar;

    Node(char ch){
        data = ch;
        isLastChar = false;
    }
};
class Trie{
    public:
    Node* root;
    Trie(){
        this->root = new Node('\0');
    }
    void insert(string str){
        Node *temp = this->root;
        for(int i = 0;i < str.size();i++){
            char ch = str[i];
            if(temp->child.count(ch)){
                temp = temp->child[ch];
            }else{
                Node* next = new Node(ch);
                temp->child[ch] = next;
                temp = next;
            }
        }
        temp->isLastChar = true;
        return;
    }

    bool search(string str){
        Node *temp = this->root;
        for(int i = 0;i < str.size();i++){
            char ch = str[i];
            if(temp->child.count(ch)){
                temp = temp->child[ch];
            }else{
                return false;
            }
        }
        return temp->isLastChar == true;
    }

    void prefixSearch(string str){
        Node *temp = this->root;
        for(int i = 0;i < str.size();i++){
            char ch = str[i];
            if(temp->child.count(ch)){
                temp = temp->child[ch];
            }else{
                cout<<"Cannot find\n";
                return ;
            }
        }
        dfs(temp,str,"");
    }

    void dfs(Node * node,string curr,string ssf){
        if(node == NULL)
            return;

        if(node->isLastChar == true){
            cout<<(curr + ssf)<<"\n";
        }

        for(auto ele : node->child){
            dfs(ele.second,curr,ssf + ele.first);
        }
    }
};
int main() {
    Trie tr;
    int t;
    cin>>t;
    while(t--){
        string inp;
        cin>>inp;
        tr.insert(inp);
    }
    int s;
    cin>>s;
    while(s--){
        string searchh;
        cin>>searchh;
        cout<<tr.search(searchh)<<"\n";
    }
    tr.prefixSearch("s");
    return 0;
}
