#include <iostream>
using namespace std;

int sumOfDigits(int number) 
{
    int sum = 0;
    while (number > 0) 
    {
        sum += number % 10; 
        number /= 10; 
    }
    return sum;
}

int main() 
{
    int num1, num2;

    cout << "Введите первое натуральное число: ";
    cin >> num1;
    cout << "Введите второе натуральное число: ";
    cin >> num2;

    int sum1 = sumOfDigits(num1);
    int sum2 = sumOfDigits(num2);

    if (sum1 > sum2) 
    {
        cout << "Сумма цифр больше в числе " << num1 << endl;
    } else if (sum1 < sum2) 
    {
        cout << "Сумма цифр больше в числе " << num2 << endl;
    } else 
    {
        cout << "Суммы цифр обоих чисел равны" << endl;
    }

    return 0;
}