#include <iostream>
using namespace std;
#define COL 5

void print_Array(int array[][COL], int size);
void transpose_Matrix(int array[][COL], int size);
void rotate_2DArray(int array[][COL], int size);
// This is a static typed program i.e. no runtime input .
// Create a dynamic type program i.e. having runtime input.

int main()
{
    int arr[5][5];
    int arr_size = 5;
    for (int i = 0; i < arr_size; i++)
    {
        for (int j = 0; j < arr_size; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print_Array(arr , 4);
    // cout << endl;
    transpose_Matrix(arr, 5);
}

// Print the array.
void print_Array(int array[][COL], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "[ ";
        for (int j = 0; j < size; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "]";
        cout << endl;
    }
}

// Transpose a Matrix
void transpose_Matrix(int array[][COL], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            swap(array[i][j], array[j][i]);
        }
    }
    print_Array(array, size);
    rotate_2DArray(array, size);
}

// Rotate the array by 90 degree
void rotate_2DArray(int array[][COL], int size)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start <= mid)
    {
        for (int row = 0; row < size; row++)
        { // for row
            swap(array[row][start], array[row][end]);
        }
        start++;
        end--;
    }
    print_Array(array, size);
}