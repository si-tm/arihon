#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

int solution(vector<int> w, vector<int> v, int MAX_w){
    int n = w.size();
    int dp[n + 1][MAX_w + 1];
    for(int i = 1;i <= n;i++){
        for(int j = 0; j <= MAX_w;j++){
            if(j < w[i]){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j - 1]);
            }
        }
    }
    return dp[n][MAX_w];
}

int main()
{
    vector<int> w = {5, 10, 11, 6, 9};
    vector<int> v = {1, 2, 3, 3, 2};
    int W = 15;
    int ans = solution(w, v, W);
    cout << "最大価値は" << ans << "です" << endl;
    return 0;
}