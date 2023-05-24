#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;

int N;
char S[MAX_N + 1];

void solve(){
    // どこまでTに移したかを管理する変数。S[a] ~ S[b]がまだSにある。
    int a = 0, b = N - 1;

    // a = bのとき、すべてTに移ったということ
    while (a <= b){
        // left：最終的にSの左端を移動させるか
        bool left = false;
        // もし左端と右端が
        for (int i = 0; a + i <= b; i++){
            // 左端の文字の方が辞書順で先だったら、leftをtrueにしてbreak
            if (S[a + i] < S[b - i]) {
                left = true;
                break;
            }
            else if (S[a + 1] > S[b - 1]){
                left = false;
                break;
            }
        }

        //putchar：引数を標準出力する
        if (left) putchar(S[a++]);
        else putchar(S[b--]);
    }

    putchar('\n');
}