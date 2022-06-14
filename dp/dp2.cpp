#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

int solution(string s, string t){
    int n = s.size();
    int m = t.size();
    int dp[n + 1][m + 1];
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            dp[i][j] = 0;
        }
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            if(s[i - 1] == t[j - 1]){
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
            }
            // cout << dp[i][j] << endl;
        }
    }

    return dp[n][m];
}

int main()
{
    string s = "apple";
    string t = "pencil";
    int ans = solution(s, t);
    cout << "共通部分文字列の長さの最大値は" << ans << "です" << endl;
    return 0;
}