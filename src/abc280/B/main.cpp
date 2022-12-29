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
    lint n; cin>>n;
    lint cur = 0;  
    vector<lint> a;
    REP(i, n){
        lint in; cin>>in;
        a.push_back(in - cur); 
        cur = in;
    }
    REP(i, a.size()){
        if(i != a.size() - 1) cout << a[i] << " ";
        else cout << a[i] << endl;
    }
    return 0;
}
