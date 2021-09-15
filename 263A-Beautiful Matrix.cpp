    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int matrix[5][5];
        int imove,jmove;
        for (int i{0}; i<5; i++){
            for(int j{0}; j<5;j++){
                cin >> matrix[i][j];
                if(matrix[i][j] == 1){
                    imove = abs(i-2);
                    jmove = abs(j-2);
                }
            }
        }
        cout << imove + jmove;
     
     
     
        return 0;
    }
