#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplication_table(int n)
{
    auto size = n;
    auto init {1};
    std::vector<std::vector<int>> matrix(size, std::vector<int>(size, init));

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = (i+1) * (j+1);
        }
    }
    return matrix;
}
int main() {
    auto mat = multiplication_table(3);

    for (const std::vector<int>& row : mat)
    {
        for (auto val : row)
        {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
