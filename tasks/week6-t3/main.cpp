/*
Author: vpetrigo
Task:
���� ����� n, �� ����������� 100. �������� ������ �������� n?n � ��������� ��� �� ���������� �������. 
�� ������� ��������� ������ ���� �������� ����� 0. �� ���� ����������, ����������� � �������, ����� 1. 
�� ��������� ���� ���������� ����� 2, � �.�.

Sample Input:
5
Sample Output:
0 1 2 3 4
1 0 1 2 3
2 1 0 1 2
3 2 1 0 1
4 3 2 1 0

*/

#include <iostream>

using namespace std;

int main() {
    const int size = 100;
    int arr[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                arr[i][j] = 0;
            }
            else if (i < j) {
                arr[i][j] = j - i;
            }
            else {
                arr[i][j] = i - j;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j];
            if (j != n - 1) {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}