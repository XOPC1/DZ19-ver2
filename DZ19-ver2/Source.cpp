//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;
template <typename T> void sA(T arr[], int l) {
    cout << "[";
    for (int i = 0; i < l; i++)
        cout << arr[i] << ", ";
    cout << "\b\b]";
}
int buriza(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        swap(a, b);
    }
    return b;
}

int resurveNumber(int n) {
    int a = 0;
    while (n % 10 == 0)
        n /= 10;
    for (int i = 0; i < n * 10; i++) {
        a = (n % 10) + (a * 10);
        n /= 10;
    }
    return a;
}

int badboy(int a[], int l, int N) {
    int bozhe = 0;
    for (int i = 0; i < l; i++) {
        if (a[i] == N) {
            bozhe = i;
            break;
        }
    }
    for (int i = l - 1; i > bozhe + 1; i--)
        for (int j = bozhe + 1; j < i; j++)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
    return bozhe;
}
    template <typename SUZA> void RRRR(SUZA arr, int l, int A, int B) {
        cout << "[";
        for (int i = 0; i <= l; i++) {
            arr[i] = rand() % (B - A) + A;
            cout << arr[i] << ", ";
        }
        cout << "\b\b]\n";
    }

int main() {
	setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int N;
    /*������ 1
�������� �������, ������� ��������� ��� ����� �
���������� �� ���������� ����� ��������.*/
    cout << buriza(150, 50) << endl;

    /*������ 2
�������� ������� resurveNumber(), �������
��������� ����� � ���������� ��� � ��������� ����.*/

    cout << resurveNumber(123) << endl;

    /*������ 3
�������� �������, ������� ��������� ������, ���
����� � ����� N. ������� ���������� ������ �������
����� N � �������, � ����� ��������� ��� ��������,
������� ��������� ������ �� N.*/
    cout << "����������� ������:\n";
    int a1[10];
    for (int i = 0; i < 10; i++)
        a1[i] = rand() % 10;
    sA(a1, 10);
    cout << "\n������� N(0-9): ";
    cin >> N;
    cout << "������� ����� " << N << " � �������: ";
    cout << badboy(a1, 10, N);
    cout << "\n������������ ������: ";
    sA(a1, 10);
    cout << "\n";
    /*������ 4
�������� �������, ������� ��������� ������
������, ��� ����� � ��� ����� A � B, ������� ��������
������� � ������ ���������. ������� ������ ���������
������ ���������� ������� �� ���������� ���������.*/
    int arr[10];
    RRRR(arr, 10, 122, 422);

	return 0;
}