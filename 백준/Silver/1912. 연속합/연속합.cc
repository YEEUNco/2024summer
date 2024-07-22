#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    vector<int> dp(n);
    dp[0] = nums[0];
    int max_sum = dp[0];
    for(int i=1; i<n; i++){
        dp[i] = max(nums[i], dp[i-1]+nums[i]);
        max_sum = max(max_sum, dp[i]);
    }
    cout << max_sum;
}