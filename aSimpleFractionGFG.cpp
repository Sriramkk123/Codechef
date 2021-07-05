#include <bits/stdc++.h>
using namespace std;
string fractionToDecimal(int numerator, int denominator) {
	    // Code here
	    if(numerator == 0)
	        return 0;
	    
	    int sign = (numerator < 0) || (denominator < 0) ? -1 : 1;
	    
	    int init = numerator/denominator;
	    
	    string res;
	    
	    if(sign < 1)
	        res += "-";
	        
	    res += to_string(init);
	    
	    if(numerator%denominator == 0)
	        return res;
	        
	    int index;
	    map<int,int> mp;
	    
	    int rem = numerator%denominator;
	    bool repeat = false;
	    
	    res += ".";
	    while(rem > 0 && !repeat){
	        
	        if(mp.find(rem) != mp.end()){
	            index = mp[rem];
	            repeat = true;
	            break;
	        }else{
	            mp[rem] = res.size();
	        }
	        
	        rem *= 10;
	        
	        int temp = rem/denominator;
	        res += to_string(temp);
	        rem = rem%denominator;
	    }
	    
	    if(repeat){
	        res += ")";
	        res.insert(index,"(");
	    }
	    return res;
}
int main() {
    int num,den;
    cin>>num>>den;
    cout<<fractionToDecimal(num,den)<<"\n";
    return 0;
}
