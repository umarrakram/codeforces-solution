    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string s;
        cin >>s;
        if(islower(s[0])){
            s[0] = toupper(s[0]);
            cout << s;
     
        }else cout << s;
     
        return 0;
    }
