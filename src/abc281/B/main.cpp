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
    string s; cin>>s;
    bool flag = true;
    REP(i, 8){
        if(i == 0 || i == 7){
            if(!(s[i] >= 'A' && s[i] <= 'Z')) flag = false;
        } else if (i == 1){
            if(!(s[i] >= '1' && s[i] <= '9')) flag = false;
        } else if (i >= 2 && i <= 6){
            if(!(s[i] >= '0' && s[i] <= '9')) flag = false;
        }
    }
    if(s.length() != 8) flag = false;

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
