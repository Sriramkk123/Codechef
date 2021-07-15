#include <bits/stdc++.h>
using namespace std;
vector<string> split(string s, char c) {
    vector<string> parts;
    string part;
    istringstream in(s);
    while (getline(in, part, c)) {
        parts.push_back(part);
    }
    return parts;
}
int isValid(string IP) {
    if(IP.empty())
        return 0;
        
    if (count(IP.begin(), IP.end(), '.') != 3) {
        return false;
    }
    
    vector<string> parts = split(IP, '.');
    if (parts.size() != 4) {
        return false;
    }
    
    for (string part : parts) {
        if (part.empty() || part.size() > 3 || part.size() > 1 && part[0] == '0') {
            return false;
        }
        for (char c : part) {
            if (!isdigit(c)) {
                return false;
            }
        }
        if (stoi(part) > 255) {
            return false;
        }
    }
    return true;            
}
int main() {
    string ip;
    cin>>ip;
    cout<<isValid(ip)<<"\n";
    return 0;
}
