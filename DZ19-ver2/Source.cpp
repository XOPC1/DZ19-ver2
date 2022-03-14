//Персональный шаблон проекта С++
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
    /*Задача 1
Создайте функцию, которая принимает два числа и
возвращает их наибольший общий делитель.*/
    cout << buriza(150, 50) << endl;

    /*Задача 2
Напишите функцию resurveNumber(), которая
принимает число и возвращает его в отражённом виде.*/

    cout << resurveNumber(123) << endl;

    /*Задача 3
Создайте функцию, которая принимает массив, его
длину и число N. Функция возвращает первую позицию
числа N в массиве, а также сортирует все элементы,
которые находятся справа от N.*/
    cout << "Изначальный массив:\n";
    int a1[10];
    for (int i = 0; i < 10; i++)
        a1[i] = rand() % 10;
    sA(a1, 10);
    cout << "\nВведите N(0-9): ";
    cin >> N;
    cout << "Позиция числа " << N << " в массиве: ";
    cout << badboy(a1, 10, N);
    cout << "\nПолучившийся массив: ";
    sA(a1, 10);
    cout << "\n";
    /*Задача 4
Создайте функцию, которая принимает пустой
массив, его длину и два числа A и B, которые являются
началом и концом диапазона. Функция должна заполнять
массив случайными числами из указанного диапазона.*/
    int arr[10];
    RRRR(arr, 10, 122, 422);

	return 0;
}