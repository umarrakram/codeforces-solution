#include <bits/stdc++.h>>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);


        int t,cnt{0};
        string s;
        cin >> t;
        cin >> s;
        for (int i{0}; i <s.size(); i++){
            if (s[i] == s[i+1])  cnt++;
        }

            cout << cnt;

}
