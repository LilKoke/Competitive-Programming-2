 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    for(int i = 0; i < (1 << n); i++){
        string par = "";
        int left = 0, right = 0;
        bool flag = true;
        REP(j, n){
            if(i & (1 << (n - j - 1))){
                right += 1;
                par += ")";
            } else {
                left += 1;
                par += "(";
            }
            if(right > left) flag = false;
        }
        if(left == right && flag) cout << par << endl;
        left = 0;
        right = 0;
        par = "";
    }
    if(n % 2 == 1) cout << endl;
    return 0;
}
