/*
Author: vpetrigo
Task:
�����
� ��������� ����� ������ ������� ��� ����� �������������� ������ � ����������� �������� ��� ��� ������ �������. 
�� ������ ������ ����� ������ ��� ��������. �������� ���������� �������� � ������ �� ���� �������. 
�������� ���������� ����� ����, ������� ����� ���������� ��� ���.

������ ������� ������
��������� �������� �� ���� ��� ����������� �����: ���������� �������� � ������ �� ���� ������� (����� �� ��������� 1000).

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    const int p_t = 2;

    cin >> a >> b >> c;
    
    int sum_p = a + b + c;

    cout << (sum_p + p_t - 1) / p_t << endl;

    return 0;
}