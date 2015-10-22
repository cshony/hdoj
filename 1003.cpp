#include <iostream>
#include <vector>
using namespace std;

int max_sub_sequence(vector<int> &num, int &begin, int &end){
    int sum = num[0], res = num[0], pos = 0;
    for(int i = 1; i < num.size(); i++){
        if(sum < 0){
            sum = num[i];
            pos = i;
        } else {
            sum += num[i];
        }
        if(sum > res){
            begin = pos;
            end = i;
            res = sum;
        }
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    for(int i = 1; i <= t ; i++){
        int n;
        cin>>n;
        vector<int> num;
        for(int j = 1; j <= n; j++){
            int m;
            cin>>m;
            num.push_back(m);
        }
        int begin = 0, end = 0;
        int res = max_sub_sequence(num, begin, end);
        cout<<"Case "<<i<<":"<<endl;
        cout<<res<<" "<<begin+1<<" "<<end+1<<endl;
        if(i!=t)
            cout<<endl;
    }
    return 0;
}
