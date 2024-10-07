#include <iostream>

using namespace std;
//Лабораторная работа номер 5, Вариант 4
// 1. Дана последовательность натуральных чисел {Aj}. Найти сумму чисел, оканчивающихся цифрой 0 или 7, 
//наибольшее из таких чисел и номер этого числа в последовательности.
// 2. Дано натуральное число N (N<10^9). Найти сумму нечетных цифр числа N.


int main() 
{
    // 1.
    int n, s, num;
    cout << "Please enter a size of the sequence: "; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter a number: "; cin >> num;
        if (num % 10 == 0 || num % 10 == 7)
        {
            s += num;
        }
    }
    cout << "Sum of all the elements which ends with 0 or 7 equals to " << s << endl;
    
    // 2.
    s = 0;
    int big_n;
    cout << "Enter number N: "; cin >> big_n;
    while (big_n != 0)
    {
        s += big_n % 10;
        big_n /= 10;
    }
    cout << "Sum of all the N digits equals to " << s;

    return 0;
}