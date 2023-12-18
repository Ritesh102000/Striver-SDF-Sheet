#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < prices.size(); ++i) {
        // Update the minimum price if the current price is smaller
        minPrice = std::min(minPrice, prices[i]);

        // Update the maximum profit if selling at the current price gives a better profit
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    // Example usage:
    std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    std::cout << "Output: " << maxProfit(prices1) << std::endl;

    std::vector<int> prices2 = {7, 6, 4, 3, 1};
    std::cout << "Output: " << maxProfit(prices2) << std::endl;

    return 0;
}
