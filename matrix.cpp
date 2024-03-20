#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int n = 3;
int main()
{
    int arr1[6][3] = { {1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9} } int arr2[3][3] = { {2, 3, 4},
                                                      {5, 6, 7},
                                                      {8, 9, 10} }
    {
        for (i = 0; i < max; i++)
            A[i] = i * i;
    }
}
void display_matrix(const int arr[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(4) << arr[i][j] << "";
        }
    }
}
void add_matrix(const int arr1[N][N], const int arr2[N][N], int result[N][N]))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
void multiply_matrix(const int arr1[N][N], const int arr2[N][N], int result[N][N]))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < n; k++)
            {
                result[i][j] = arr1[i][k] + arr2[k][j];
            }
        }
    }
}
void subtract_matrix(const int arr1[N][N], const int arr2[N][N], int result[N][N])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}
void solve_max_value(const int arr[n][n])
{
    int max_value = matrix[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max_value)
            {
                max_value = arr[i][j];
            }
        }
    }
    return max_value;
}
void update_matrix(int arr)
// c++ file I/O
{
    // open() //opens file
    // close() //closes file
    // read() //read data
    // write() //writes data
}