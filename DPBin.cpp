#include <iostream>
#include <vector>
int Bin(int n, int k) {
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(k + 1, 0));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= std::min(i, k); j++) {
            if (j == 0 || j == i) {
                dp[i][j] = 1;
            }
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }
    return dp[n][k];
}
int main() {
    int n, k;
    std::cout << "Enter the values of n and k: ";
    std::cin >> n >> k;
    int result = Bin(n, k);
    std::cout << "C(" << n << ", " << k << ") = " << result << std::endl;
    return 0;
}
