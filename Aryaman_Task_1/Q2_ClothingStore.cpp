#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while(n--){
        int x,y,z,a,b,c;
        cin >> x >> y >> z >> a >> b >> c;
        int happy = 0;
        if(z>c){
            while(b>y && z != c){
                y++;
                z--;
            }
            while(a>x && z!=c){
                x++;
                z--;
            }
            while(a>x && y!=b){
                x++;
                y--;
            }
        }
        else{
            if(y>b){
                while(a>x && y!=b){
                    x++;
                    y--;
                }
            }
        }
        happy += min(x,a) + min(y,b) + min(z,c);
        cout << happy << endl;

    }
}
