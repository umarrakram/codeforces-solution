  #include <bits/stdc++.h>

  using namespace std;

  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n, score;
      cin >> n >> score;
      int min{score}, max{score}, amazing{0};
      while (--n)
      {
          cin >> score;
          if (score < min)
          {
              min = score;
              ++amazing;
          }
          if (score > max)
          {
              max = score;
              ++amazing;
          }
      }
      cout << amazing << endl;
      return 0;


  }
