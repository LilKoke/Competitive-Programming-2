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
    int n; cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];  
    int q; cin >> q;
    REP(i,q){
        int in;
        cin >> in;
        if(in == 1){
            int k, x;
            cin >> k >> x; 
            a[k - 1] = x;

        } else {
            int k;
            cin >> k;
            cout << a[k - 1] << endl;
        }
    }
    return 0;
}
