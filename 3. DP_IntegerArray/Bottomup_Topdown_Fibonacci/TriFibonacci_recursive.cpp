#include <iostream>
#include <vector>
using namespace std; 

class Solution {
public:
    int tribonacci(int n) {
        if (n==0) return 0;
        else if (n==1) return 1;
        else if (n==2) return 1;
        else return tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
    }
};

int main(){
    Solution sol;
    cout<<"Result: "<<sol.tribonacci(33)<<endl;
}