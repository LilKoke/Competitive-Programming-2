#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;
int N, R;
// 入力された点
int X[MAX_N];

void solve(){
    sort(X, X+N);

    int i = 0, ans = 0;
    //すべての点がカバーされるまでやる
    while (i < N){
        // sはカバーされていない一番左の点の位置
        int s = X[i++];
        // sから距離Rを超える点まで進む
        while (i < N && X[i] <= s + R) i++;

        // X[i]はsから距離Rを超えているので、その一個前に点を打つ。
        int p = X[i - 1];

        // pから距離Rを超えるまで進む
        while (i < N && X[i] <= p + R) i++;

        // 打たないと行けない点の個数を一個増やす
        ans++;
    }

    printf("%d\n", ans);
}