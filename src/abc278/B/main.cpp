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
    bool flag = false;
    while(!flag){
        lint swaph = h / 10 * 10 + w / 10;
        lint swapw = h % 10 * 10 + w % 10;
        if(swaph >= 0 && swaph <= 23 && swapw >= 0 && swapw <= 59){
            flag = true;
        } else {
            if(w == 59){
                if(h == 23) h = 0;
                else h++;
                w = 0;
            }
            else{
                w++;
            }
        }
    }
    cout << h << " " << w << endl;
    return 0;
}
