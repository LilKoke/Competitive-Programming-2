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
    vector<int> c1, c2;
    c1.push_back(0);
    c2.push_back(0);
    REP(i, n){
        int c, p; cin>>c>>p;
        if(c == 1){
            c1.push_back(p + c1[i]);
            c2.push_back(c2[i]);
        } else {
            c1.push_back(c1[i]);
            c2.push_back(p + c2[i]);
        }
    }
    int q; cin>>q;
    REP(i, q){
        int l, r; cin>>l>>r;
        cout << c1[r] - c1[l - 1] << " " << c2[r] - c2[l - 1] << endl;
    }
    return 0;
}
