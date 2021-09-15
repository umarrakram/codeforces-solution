#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
/*   freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdout); */

    string s;
    cin >> s;
    int lowcount{0},upcount{0};

    for (int i = 0;i<s.size(); i++){
        if(islower(s[i])) lowcount++;
        else if(isupper(s[i])) upcount++;
    }

        if(lowcount >= upcount) transform(s.begin(), s.end(), s.begin(), ::tolower);
        else if(lowcount < upcount) transform(s.begin(), s.end(), s.begin(), ::toupper);

        cout << s;
        return 0;
}
