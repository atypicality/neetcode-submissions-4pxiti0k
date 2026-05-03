class Solution {
public:

    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        std::vector<int> memo(n + 1, -1);
        return fibonacci(n, memo);
    }

    int fibonacci(int n, std::vector<int> &memo) {
        // Base cases
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 1;

        // Check if result is already computed
        if (memo[n] != -1) return memo[n];

        // Compute the result and store it in memo
        memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo) + fibonacci(n - 3, memo);
        return memo[n];
    }
};