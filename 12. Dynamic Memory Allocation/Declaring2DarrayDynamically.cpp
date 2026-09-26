#include <iostream>
#include <vector>

int main() {
    int rows = 3;
    int cols = 4;

    // Create a 2D vector initialized with 0s
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols, 0));

    // Access and modify elements normally
    matrix[1][2] = 5;
    std::cout << matrix[1][2] << std::endl;

    // No manual cleanup/deallocation needed!
    return 0;
}
