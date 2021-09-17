    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    //            freopen("input.txt", "r", stdin);
    //            freopen("output.txt", "w", stdout);
     
        int n, k;
        int arr[105]{};
        cin >> n;
        cin >> k;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
     
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] >= arr[k] && arr[i] != 0)
            {
                cnt++;
            }
        }
     
        cout << cnt << endl;
     
    }
