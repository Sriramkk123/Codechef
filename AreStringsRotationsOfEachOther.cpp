#include <bits/stdc++.h>
using namespace std;
bool AreRotationsOfEachOther(string s, string t)
{
    if(s.size() != t.size())
        return false;
    string concatString = s + s;
    return (concatString.find(t) != string::npos); 
}
int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<AreRotationsOfEachOther(s1,s2)<<"\n";
}
