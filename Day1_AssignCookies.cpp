#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());
        int i = 0, j = 0;
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                i += 1;
            }
            j += 1;
        }
        return i;
    }
};

int main() {
    Solution solution;

    // Input for greed factors
    std::cout << "Enter the greed factors (separated by space): ";
    std::vector<int> greedFactors;
    int greedFactor;
    while (std::cin >> greedFactor) {
        greedFactors.push_back(greedFactor);
    }

    // Input for cookie sizes
    std::cout << "Enter the cookie sizes (separated by space): ";
    std::vector<int> cookieSizes;
    int cookieSize;
    while (std::cin >> cookieSize) {
        cookieSizes.push_back(cookieSize);
    }

    // Find and print the result
    int result = solution.findContentChildren(greedFactors, cookieSizes);
    std::cout << "The maximum number of content children is: " << result << std::endl;

    return 0;
}
