#include <iostream>
using namespace std;

bool is_palindrome(int number) 
{
    int o_number = number;
    int r_number = 0;

    while (number > 0) {
        int digit = number % 10;
        r_number = r_number * 10 + digit;
        number /= 10;
    }

    return o_number == r_number;
}

int main() {
    int number;
    cout << "Введите натуральное число: ";
    cin >> number;

    if (is_palindrome(number)) 
        cout << "Число является палиндромом." << endl;
    else
        cout << "Число не является палиндромом." << endl;
    return 0;
}