#include <bits/stdc++.h>
using namespace std;

string decodeUsingStack(string s)
{
	stack<int> count;
	stack<string> result;

	int i = 0;
	string res = "";
	while(i < s.size())
	{
		char ch = s[i];
		if(ch >= '0' && ch <= '9')
		{
			int start = i;
			while(i < s.size() && (s[i+1] >= '0' && s[i+1] <= '0'))
				i++;
			count.push(stoi(s.substr(start,i+1)));
		}
		else if(ch == '[')
		{
            cout<<"Res : "<<res<<" ";
			result.push(res);
            res = "";
		}
		else if(ch == ']')
		{
			string str = result.top();
			result.pop();
			cout<<str<<" ";
			int times = count.top();
			count.pop();
            cout<<times<<"\n";
			for(int j = 0;j < times;j++)
				str += res;
            res = str;
		}
		else
			res += ch;
		i++;
	}
	return res;
}
int main() {
	string s;
	cin>>s;
	string ans,result;
	string res1 = decodeUsingStack(s);
	cout<<res1<<"\n";
	return 0;
}

