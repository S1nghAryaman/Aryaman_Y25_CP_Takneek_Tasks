#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    int index = 0;
    while(y>0){
        y -= x;
        index +=1;
    }
    cout << index-1;
}
