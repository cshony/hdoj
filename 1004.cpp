#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    while(cin>>n && n>0) {
        string mcolor = "";
        int maxCount = 0;
        unordered_map<string, int> umap;
        while(n--) {
            string color;
            cin>>color;
            umap[color]++;
            if(umap[color] > maxCount) {
                mcolor = color;
                maxCount = umap[color];
            }
        }
        cout<<mcolor<<endl;
    }
    return 0;
}
