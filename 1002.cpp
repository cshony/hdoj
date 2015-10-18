#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sum(const string &a, const string &b) {
    int i = a.size()-1, j = b.size()-1;
    string result = "";
    int carry = 0;
    while(i >= 0 || j >= 0 || carry > 0) {
        int ai = i>=0 ? a[i]-'0' : 0;
        int bi = j>=0 ? b[j]-'0' : 0;
        int ci = ai + bi + carry;
        carry = ci/10;
        result += char(ci%10 + '0');
        i--; j--;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int t;
    cin>>t;
    for(int i=1; i<=t; i++) {
        string a, b;
        cin>>a>>b;
        cout<<"Case "<<i<<":"<<endl;
        cout<<a<<" + "<<b<<" = "<<sum(a, b)<<endl;
        if(i<t)
            cout<<endl;
    }
    return 0;
}
