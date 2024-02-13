#include <iostream>
using namespace std;

void rearrangeArray(int *a, int *b, int size)
{
    int negIndex = 0;
    int posIndex = size - 1;

    for (int i = 0; i < size; ++i)
    {
        if (a[i] < 0)
            b[negIndex++] = a[i];
        else
            b[posIndex--] = a[i];
    }
}

int main() 
{
    int size;
    cout << "Размер массива: ";
    cin >> size;

    int *a = new int[size]; 
    int *b = new int[size]; 

    cout << " Элементы массива : ";
    for (int i = 0; i < size; ++i) 
        cin >> a[i];

    rearrangeArray(a, b, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i)
        cout << b[i] << " ";
    cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}