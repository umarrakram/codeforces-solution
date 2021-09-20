#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s,n;cin>>s>>n;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    transform(n.begin(),n.end(),n.begin(),::tolower);

    cout<< s.compare(n);

    return 0;
}
