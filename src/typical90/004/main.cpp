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
    int h, w; 
    cin>>h>>w;
    int dim = 2;
    vector<vector<int> > a(h);
    vector<vector<int> > x(dim);
    REP(i, 2) REP(j, 2001) x[i].push_back(0);
    REP(i, h){
        REP(j, w){
            int in;
            cin >> in;
            a[i].push_back(in);
            x[0][i]+=a[i][j];
        }
    }
    REP(j, w) REP(i, h) x[1][j]+=a[i][j];
    
    REP(i, h){
        REP(j, w){
            cout << x[0][i] + x[1][j] - a[i][j];
            if(j != w - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
