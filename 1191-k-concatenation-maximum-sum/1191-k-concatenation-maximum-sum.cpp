
class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        const long long MOD = 1000000007;
        int n = arr.size();

        long long totalSum = 0;

        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }

        long long currsum = 0;
        long long bestTwo = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x = arr[i % n];

            currsum = max(0LL, currsum + x);
            bestTwo = max(bestTwo, currsum);
        }

        if (k == 1) {
            long long bestOne = 0;
            long long curr = 0;

            for (int x : arr) {
                curr = max(0LL, curr + x);
                bestOne = max(bestOne, curr);
            }

            return bestOne % MOD;
        }

        long long ans = bestTwo;

        if (totalSum > 0) {
            ans += (k - 2LL) * totalSum;
        }

        return ans % MOD;
    }
};