    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        unsigned long long n,m,a;
        cin >> n >> m >>a;
        unsigned long long value = ceil((double)m/a)*ceil((double)n/a);
        //ceil((double)m/a)*ceil((double)n/a);
        cout << value;
        return 0;
    }
