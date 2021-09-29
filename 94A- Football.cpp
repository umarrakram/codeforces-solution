    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        string s;
        cin>>s;
        if(s.find("0000000")<100||s.find("1111111")<100){
            cout<<"YES";
            return 0;
        }
        cout<<"NO";
        return 0;
     
    }
