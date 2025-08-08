#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,w;
    int V=0; int W=0;
    cin >> n >> w;
    int arr[n][2];
    int expected_val[n];
    for(int i = 0; i<n; i++){
        int w1,v0;
        cin >> w1 >> v0;
        arr[i][2] = {w1,v0};
    }
    for(int i = 0; i<n; i++){
        int w1,v;
        w1 = arr[i][0];
        v = arr[i][0];
        float val = v/w1;
        expected_val[i] = val;
    }
    sort(expected_val, expected_val + n, comp)
    for(int m = 0; m<n; m++){
        val = expected_val[m]
        for(int j = 0; j<n; j++){
            w1 = arr[j][0];
            v1 = arr[j][1];
            float val1 = v1/w1
            if(val1==val){
                if(W+w1<w){
                    W += w1
                    V += v1
                }
            }
        }
    }
    cout << V;
}
