#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
 
int main()
{
    //입출력 빠르게 받기
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int TC;
    cin >> TC;
    while(TC--) {
        int x[10];
        for(int i=1; i<=9; ++i) {
            cin >> x[i];
        }
        x[9] += x[6];
        x[6] = 0;
        
        // 정방향 1개, 역방향 1개
        vector<char> v[2];
        int vNum = 0;
        for(int i=9; i>0; --i) {
            while(x[i]--) {
                v[vNum].push_back('0'+i); // 문자로 사용하려고 '0' 더함
                vNum = 1-vNum;
            }
        }
        reverse(v[1].begin(), v[1].end());
 
        string ans;
        for(char ch: v[0]) {
            ans += ch;
            ans += ' ';
        }
        for(char ch: v[1]) {
            ans += ch;
            ans += ' ';
        }
        cout << ans << '\n';
    }
}