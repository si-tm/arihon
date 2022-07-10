#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

/*
0: 1, 2
1: 0, 2
2: 0, 1
→ No

0: 
1:  
2: 
3: 

*/

bool solution(vector<vector<int>> g){
    int n = g.size();
    int m = g[0].size();

    // 塗ってない : 0
    // 白に塗った : 1
    // 黒に塗った : -1

    // 各頂点の色
    vector<int> color(n, 0); 

    queue<int> q;
    
    q.push(0);
    g[]

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i = 0;i < g[tmp].size();i++){
            if(g[tmp][i] == 0){

            }
            else if(g[tmp][i] == )
        }
    }



}

int main()
{
    return 0;
}