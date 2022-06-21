#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

int solution(vector<int> w, vector<int> v, int MAX_w){
    int n = w.size();
    int dp[n + 1][MAX_w + 1];
    //初期化
    for(int i = 0;i <= n;i++){
        for(int j = 0; j <= MAX_w;j++){
           dp[i][j] = 0;
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0; j <= MAX_w;j++){
            if(j < w[i]){
                dp[i + 1][j] = dp[i][j];
            }
            else{
                dp[i + 1][j] = max(dp[i + 1][j - w[i + 1]] + v[i + 1], dp[i][j]);
            }
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return dp[n][MAX_w];
}

int main()
{
    // vector<int> w = {5, 10, 11, 6, 9};
    // vector<int> v = {1, 2, 3, 3, 2};
    vector<int> w = {3, 4, 2};
    vector<int> v = {4, 5, 3};
    int W = 7;
    int ans = solution(w, v, W);
    cout << "最大価値は" << ans << "です" << endl;
    return 0;
}