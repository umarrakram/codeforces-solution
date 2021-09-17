    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t,sum{0};
        string s;
        cin >> t;
        while (t--){
            cin >>s;
            if(s[1] == '+') sum++;
            else sum--;
        }
        cout << sum;
     
     
        return 0;
    }
