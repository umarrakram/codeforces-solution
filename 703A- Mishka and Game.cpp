#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,m,c,mcnt{0},ccnt{0};

    cin >> t;
    while (t--){
    cin >> m >> c;
    if (m<c) ccnt++;
    else if(m>c)mcnt++;

    }
        if(mcnt < ccnt) cout << "Chris";
        if(ccnt < mcnt) cout <<"Mishka";
        else if(ccnt == mcnt) cout << "Friendship is magic!^^";
    return 0;


}
