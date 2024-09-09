// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    std::cout << "Hello World!\n";

    const int row1 = 5, col1 = 5, row2 = 5, col2 = 5;

    //int matrix1[row1][col1] = { 
    //    {1, 2, 3, 4, 5}, 
    //    {2, 3, 4, 5, 6}, 
    //    {3, 4, 5, 6, 7}, 
    //    {4, 5, 6, 7, 8}, 
    //    {5, 6, 7, 8, 9} };

    //int matrix2[row2][col2] = { 
    //    {5, 4, 3, 2, 1}, 
    //    {6, 5, 4, 3, 2}, 
    //    {7, 6, 5, 4, 3}, 
    //    {8, 7, 6, 5, 4},
    //    {9, 8, 7, 6, 5} };

    int matrix1[row1][col1] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1} };

    int matrix2[row2][col2] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1} };

    if (col1 != row2) {
        std::cout<< "NO";
        return 0;
    }
    
    int result[row1][col2] = { 0 };

    for (int i = 0; i < row1; i++) {

        for (int j = 0; j < col2; j++) {

            for (int k = 0; k < col1; k++) {

                result[i][j] += matrix1[j][k] * matrix2[k][j];


            }
        }
    }

    std::cout << "Result";
    for (int i = 0; i < row1; i++) {
        std::cout << "\n";

        for (int j = 0; j < col2; j++) {
            std::cout << result[i][j] << " ";
        }

    }


    return 1;

}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
