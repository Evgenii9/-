/*
Author: vpetrigo
Task:
����� ��������
���� ����� ��������������� ����� N, ���������� ����� �������� � ��� (������������� ����� �����). ���� ������������� ����� ���, �� ����� �������, ��� ����� �������� ����� ����.

������ ������� ������
�� ���� ������ ����� ������������� ����� N (0 ? N ? 10000).

������ �������� ������
�������� ���� ����� ����� - ����� �� ������.

*/

#include <iostream>

using namespace std;

int main() {
    int num;

    const int hundr = 100;
    const int tens = 10;

    cin >> num;

    cout << num % hundr / tens;

    return 0;
}
