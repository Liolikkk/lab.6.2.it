#include <iostream>
#include <climits>
using namespace std;

// Ініціалізація масиву
void Init(int* b, const int size)
{
    for (size_t i = 0; i < size; i++)
        b[i] = -10 + rand() % 21;
}

// Друк масиву
void Print(const int* const b, const int size)
{
    cout << "{";
    for (size_t i = 0; i < size; i++)
    {
        cout << b[i];
        if (i != size - 1)
            cout << ", ";
    }
    cout << "}" << endl;
}

// Нова функція для обчислення суми елементів з непарними індексами
int SumOddIndices(const int* const b, const int size)
{
    int sum = 0;
    for (int i = 1; i < size; i += 2) // починаємо з індексу 1 і крокуємо через 2
    {
        sum += b[i];
    }
    return sum;
}

int main()
{
    srand(time(0));
    int n;
    cout << "n = "; cin >> n;

    int* b = new int[n];

    Init(b, n);
    Print(b, n);

    // Виклик функції для обчислення суми елементів з непарними індексами
    int sumOdd = SumOddIndices(b, n);
    cout << "Sum of elements with odd indices: " << sumOdd << endl;

    delete[] b;
    b = nullptr;

    return 0;
}
