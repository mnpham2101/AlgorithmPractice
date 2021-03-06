#include <bits/stdc++.h>

using namespace std;

string findKthSmallestNumberOfSpecNumber(int n, int m, int k) {
    int lastDigit = 0;
    int totalCombination = 1;

    string ans = "";

    for (int i = 1; i < n; ++i) totalCombination *= (m-1);

    lastDigit = k/totalCombination + '1';
    ans += lastDigit;

    k %= totalCombination;
    totalCombination /= m-1;

    int temp;
    while (ans.size() < n) {
        temp = k/totalCombination + '1';

        if (temp < lastDigit) lastDigit = temp;
        else lastDigit = temp + 1;

        ans += lastDigit;

        k %= totalCombination;
        totalCombination /= m-1;
    }

    return ans;
}

int main() {
    for (int i = 0; i < 2; ++i) cout << findKthSmallestNumberOfSpecNumber(2, 2, i) << endl;
    return 0;
}