#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int n = 3;

// part 1
void read_matrix_file(int matrix_1[n][n], int matrix_2[n][n], int& size, const string filename)
{
	ifstream file("matrix_input.txt");

	if (file.is_open())
	{
		file >> size;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				file >> matrix_1[i][j];
			}
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				file >> matrix_2[i][j];
			}
		}
		file.close();

	}
	else
	{

		cout << "File not found!" << filename << endl;
	}
}

// part 2
void display_matrix(const int matrix[n][n], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << setw(4) << matrix[i][j] << "";
		}
		cout << "\n";

	}
}

// part 3
void add_matrix(const int matrix_1[n][n], const int matrix_2[n][n], int result[n][n], int size)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[i][j] = matrix_1[i][j] + matrix_2[i][j];
		}
	}
}

// part 4
void multiply_matrix(const int matrix_1[n][n], const int matrix_2[n][n], int result[n][n], int size)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[i][j] = 0;

			for (int k = 0; k < n; k++)
			{
				result[i][j] = matrix_1[i][k] * matrix_2[k][j];
			}
		}
	}
}
// part 5
void subtract_matrix(const int matrix_1[n][n], const int matrix_2[n][n], int result[n][n], int size)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[i][j] = matrix_1[i][j] - matrix_2[i][j];
		}
	}
}

// part 6
void update_matrix_element(int matrix[n][n], int row, int col, int updated_value, int size)
{
	if (row >= 0 && row < size && col >= 0 && col < size)
	{
		matrix[row][col] = updated_value;
	}
	else
	{
		cout << "Invalid row or column value!" << endl;
	}
}

// part 7
int solve_max_value(const int matrix[n][n], int size)
{
	int maximum_value = matrix[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] > maximum_value)
			{
				maximum_value = matrix[i][j];
			}
		}
	}
	return maximum_value;
}
// part 8
void transpose_matrix(const int matrix[n][n], int transpose[n][n], int size)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			transpose[i][j] = matrix[j][i];
		}
	}
}
int main()
{
	int matrix_1[n][n];
	int matrix_2[n][n];
	int result[n][n];
	int size;

	read_matrix_file(matrix_1, matrix_2, size, "matrix_input.txt");
	//read_matrix_file(matrix_2, size, "matrix_input.txt");

	cout << "Matrix 1:\n ";
	display_matrix(matrix_1, size);
	cout << "\n";

	cout << "Matrix 2:\n ";
	display_matrix(matrix_2, size);
	cout << "\n";

	add_matrix(matrix_1, matrix_2, result, size);
	cout << "Addition output: " << endl;
	display_matrix(result, size);
	cout << "\n";

	subtract_matrix(matrix_1, matrix_2, result, size);
	cout << "Subtraction output: " << endl;
	display_matrix(result, size);
	cout << "\n";

	multiply_matrix(matrix_1, matrix_2, result, size);
	cout << "Multiplication output:";
	cout << "\n";
	display_matrix(result, size);
	cout << "\n";

	update_matrix_element(matrix_1, 0, 0, 10, size);
	cout << "Updated Matrix 1: ";
	cout << "\n";
	display_matrix(matrix_1, size);
	cout << "\n";

	cout << "Max Matrix_1 value: " << solve_max_value(matrix_1, size);
	cout << "\n";

	int transpose[n][n];
	transpose_matrix(matrix_1, transpose, size);
	cout << "Transposed Matrix 1:";
	cout << "\n";
	display_matrix(transpose, size);

	return 0;
}
