#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt{0};
    string n;
    cin >>n;
    for (int i{0}; i<n.size();i++){
        if(n[i] == '7' || n[i] == '4')
            cnt++;
    }
    if (cnt == 4 || cnt == 7){
        cout << "YES";

    }else cout << "NO";


    return 0;
}
