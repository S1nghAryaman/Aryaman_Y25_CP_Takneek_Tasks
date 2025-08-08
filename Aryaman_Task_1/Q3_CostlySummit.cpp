#include <iostream>
#include <list>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int tolCost = 0;
        int n,c;
        int index = 0;
        cin >> n >> c;
        string s;
        cin >>s;
        int countA = count(s.begin(), s.end(), 'A');
        int countB = count(s.begin(), s.end(), 'B');
        int countC = count(s.begin(), s.end(), 'C');
        int countD = count(s.begin(), s.end(), 'D');
        int countE = count(s.begin(), s.end(), 'E');
        vector<int> listCount = {countA, countB, countC, countD, countE};
        vector<int>::iterator new_end;
        while(c<n){
            tolCost += c;
            int key = *max_element(listCount.begin(), listCount.end());
            n-=key;
            new_end = remove(listCount.begin(), listCount.end(), key);
        }
        int N = accumulate(listCount.begin(), listCount.end(), 0);
        tolCost += N*(N+1)/2;
        cout << tolCost << endl;
        

    }
}
