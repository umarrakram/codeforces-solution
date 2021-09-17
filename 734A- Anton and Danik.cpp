    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        int n,anton{0},danik{0};
        string s;
        cin >> n >> s;
        for(int i{0}; i < n ; i++){
            if (s[i] == 'A') anton++;
            else if(s[i]=='D') danik++;
        }
        if(anton < danik) cout << "Danik";
        else if (anton > danik) cout << "Anton";
        else cout << "Friendship";
        return 0;
    }
