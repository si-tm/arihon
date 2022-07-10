#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

// g++ -o greedy1 -std=c++14 greedy1.cpp

int solution(int c1, int c5, int c10, int c50, int c100, int c500,int A){
    int num = 0, index = 0;
    vector<int> kind_of_money = {500, 100, 50, 10, 5, 1};
    // お金の種類と枚数
    map<int, int> m; 
    m[500] = c500;
    m[100] = c100;
    m[50] = c50;
    m[10] = c10;
    m[5] = c5;
    m[1] = c1;

    while(A > 0){
        int tmp_money = kind_of_money[index];
        int tmp = min(A/tmp_money, m[tmp_money]);
        A -= tmp*tmp_money;
        num += tmp;
        index++;
    }

    return num;
}

int main()
{
    int min_num = solution(3, 2, 1, 3, 0, 2, 620);
    cout << min_num << endl;
    return 0;
}