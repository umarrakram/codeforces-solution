    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int cnt{0};
        string s;
        cin >>s;
        for (int i{0};i<s.size();i++){
            if(s[i] == 'H' || s[i] == 'Q' || s[i]=='9') cnt++;
        }
        if(cnt > 0) cout << "YES";
        else cout <<"NO";
        return 0;
     
     
    }
