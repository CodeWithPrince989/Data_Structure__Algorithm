#include <iostream>
#include <vector>

int main() {
    int x = 2; // Depth
    int y = 3; // Rows
    int z = 4; // Columns

    // Create a 3D vector initialized with 0s
    // Structure: vector<vector<vector<int>>>
    std::vector<std::vector<std::vector<int>>> grid(
        x, std::vector<std::vector<int>>(
            y, std::vector<int>(z, 0)
        )
    );

    // Access and modify elements using three sets of brackets
    grid[1][2][3] = 42;
    std::cout << grid[1][2][3] << std::endl;

    // No manual cleanup/deallocation needed!
    return 0;
}
