#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int row = 1;
    int nst = n/2;
    int nsp = 1;
    while(row <= n)
    {
        for(int cst = 1;cst <= nst;cst++)
            cout<<"*";
        for(int csp = 1;csp <= nsp;csp++)
            cout<<" ";
        for(int cst = 1;cst <= nst;cst++)
            cout<<"*";

        if(row <= n/2)
        {
            nst--;
            nsp+=2;
        }
        else
        {
            nst++;
            nsp-=2;
        }
        row++;
        cout<<"\n";
    }
}
