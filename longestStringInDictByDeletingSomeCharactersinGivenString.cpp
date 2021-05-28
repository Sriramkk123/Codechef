#include <bits/stdc++.h>
using namespace std; 
bool isSubsequence(string mainString,string toBeChecked)
{
    int j = 0;
    for(int i = 0;i < mainString.size();i++)
        if(mainString[i] == toBeChecked[j])
        {
            j++;
        }
    return j == toBeChecked.size();
}
void longestStringInDictByDeletingSomeCharactersinGivenString(string s,vector<string> dict)
{
    string res;
    for(string str : dict)
    {
        if(isSubsequence(s,str))
        {
            if(str.size() < res.size())
                continue;
            else if(str.size() > res.size())
                res = str;
            else if(str.size() == res.size())
            {
                if(res.compare(str) < 0)
                    res = str;
            }
        }
    }
    cout<<res<<"\n";
}
int main() {
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string> dict(n);
    for(int i = 0;i < n;i++)
    {
        string t;
        cin>>t;
        dict.push_back(t);
    }
    longestStringInDictByDeletingSomeCharactersinGivenString(s,dict);
    return 0;
}
