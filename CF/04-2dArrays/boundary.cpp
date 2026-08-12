/*
J. Boundary Traversal
time limit per test1 second
memory limit per test256 megabytes
You are given a matrix of size n×m
 filled with integers. Your task is to print the boundary traversal of the matrix in clockwise order, starting from the top-left corner.

Input
The first line contains two integers n
 and m
 (1≤n,m≤1000
), the number of rows and columns.

Each of the next n
 lines contains m
 integers ai,j
 (1≤ai,j≤109
), the elements of the matrix.

Output
Print the boundary traversal as a sequence of integers separated by spaces.

Examples
InputCopy
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
OutputCopy
1 2 3 4 8 12 16 15 14 13 9 5 


i missed the edge cases of a horizontal row and a vertical column matrix. 
revise it again.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Only one row
    if(n == 1) {
        for(int j = 0; j < m; j++)
            cout << arr[0][j] << " ";

        return 0;
    }

    // Only one column
    if(m == 1) {
        for(int i = 0; i < n; i++)
            cout << arr[i][0] << " ";

        return 0;
    }

    // Top row
    for(int j = 0; j < m; j++)
        cout << arr[0][j] << " ";

    // Right column
    for(int i = 1; i < n; i++)
        cout << arr[i][m-1] << " ";

    // Bottom row
    for(int j = m-2; j >= 0; j--)
        cout << arr[n-1][j] << " ";

    // Left column
    for(int i = n-2; i >= 1; i--)
        cout << arr[i][0] << " ";

    return 0;
}