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
    int x; cin>>x;
    int i = 1;
    bool flag = false;
    while(i < x/1.08 + 1){
        if(int(i * 1.08) == x){
            cout << i << endl;
            flag = true;
            break;
        }
        i++;
    }
    if(!flag) cout << ":(" << endl;
    return 0;
}
