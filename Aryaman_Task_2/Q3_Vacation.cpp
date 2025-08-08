#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int task;
    int happiness=0;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        if(task==0){
            if(b>c){
                task = 1;
                happiness +=b;
            }
            else{
                task = 2;
                happiness +=c;
            }}
        else if(task==1){
            if(a>c){
                task = 0;
                happiness +=a;
            }
            else{
                task = 2;
                happiness +=c;
            }}
        else if(task==2){
            if(a>=b){
                task = 0;
                happiness +=a;
            }
            else{
                task = 1;
                happiness +=b;
            }
        }
        else{
            int m;
            m = max({a,b,c});
            if(m==a){
                task = 0;
                happiness +=a;
            }
            if(m==b){
                task = 1;
                happiness +=b;}
            if(m==c){
                task = 2;
                happiness +=c;
            }
        }
    }
    cout << happiness;
}
