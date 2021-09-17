#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,p,t,v,sum{0};
    cin >>n;
    while (n--){
        cin >> p >> t >>v ;
        if (p + t + v >= 2){
            sum ++;
        }
    }cout << sum;

    return 0;
}
