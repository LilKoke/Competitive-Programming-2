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
    lint h, w; cin>>h>>w;
    map<string, int> mas, mat;
    vector<string> s(w, ""), t(w, "");
    REP(i, h){
        string in; cin>>in;
        REP(j, w){
            s[j] += in[j];
        }
    }
    REP(i, h){
        string in; cin>>in;
        REP(j, w){
            t[j] += in[j];
        }
    }
    REP(i, w){
        mas[s[i]]++;
        mat[t[i]]++;
    }
    bool flag = true;
    for(auto e: mas){
        if(e.second != mat[e.first]) flag = false;
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
