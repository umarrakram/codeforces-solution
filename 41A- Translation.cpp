    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        string s,t;
        cin >>s>>t;
        reverse(t.begin(),t.end());
        if(s == t){
            cout << "YES";
        }else cout << "NO";
        return 0;
    }
