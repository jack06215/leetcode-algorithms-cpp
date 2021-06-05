#include <iostream>
#include <vector>

#include "prettyprint.h"
#include "977/solution.h"

int main () {
    Solution s = Solution();
    std::vector<int> input_seq;

    input_seq = {-4, -1, 0, 3, 10};
    std::cout << s.sortedSquares(input_seq) << std::endl;
    input_seq = {-7,-3,2,3,11};
    std::cout << s.sortedSquares(input_seq) << std::endl;
    return 0;
}