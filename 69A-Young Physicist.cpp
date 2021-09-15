#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int x,y,z,xsum{0},ysum{0},zsum{0};
    cin >> t;
    while (t--){
        cin >> x >> y >>z;
        xsum += x;
        ysum += y;
        zsum += z;

    }if(xsum == 0 && ysum == 0 && zsum == 0){
        cout << "YES";
    }else {
        cout << "NO";
    }


    return 0;
}
