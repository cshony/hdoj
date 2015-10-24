#include <iostream>
#include <cstring>

using namespace std;

int pos[7][7];
int fn[55];

int main() {
    int a, b, n;
    while(cin>>a>>b>>n && a+b+n) {
        memset(pos, -1, sizeof(pos));
        int k = 0;
        fn[0] = fn[1] = 1;
        while(pos[fn[k]][fn[k+1]] == -1) {
            pos[fn[k]][fn[k+1]] = k;
            fn[k+2] = (fn[k]*b+fn[k+1]*a)%7;
            k++;
        }
        int ps = pos[fn[k]][fn[k+1]], ans = 0;
        if(n <= k)
            ans = fn[n-1];
        else
            ans = fn[(n-ps-1)%(k-ps)+ps];
        cout<<ans<<endl;

    }
    return 0;
}
