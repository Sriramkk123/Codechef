#include <bits/stdc++.h>
using namespace std;
int countPallindromicSubStrings(string s)
{
    int count = 0;

    //odd
    for(int axis = 0;axis < s.length();axis++)
    {
        for(int orbit = 0;((axis - orbit) >= 0) && ((orbit + axis) < s.length());orbit++)
        {
            if(s[axis - orbit] == s[axis + orbit])
            {
                //cout<<s[axis - orbit]<<" = "<<s[axis + orbit]<<"\n";
                count++;
            }
            else
                break;
        }
    }
    //even
    for(double axis = 0.5;axis < s.length();axis++)
    {
        for(double orbit = 0.5;((axis - orbit) >= 0 ) && ((orbit + axis) < s.length());orbit++)
        {
            if(s[(int)(axis - orbit)] == s[(int)(axis + orbit)])
            {
                //cout<<s[(int)(axis - orbit)]<<" = "<<s[(int)(axis + orbit)]<<"\n";
                count++;
            }
            else
                break;
        }
    }
    return count;
}
int main() {
    string s;
    cin>>s;
    cout<<countPallindromicSubStrings(s)<<"\n";
}
