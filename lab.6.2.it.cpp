#include <iostream>
#include <climits>
using namespace std;

// ����������� ������
void Init(int* b, const int size)
{
    for (size_t i = 0; i < size; i++)
        b[i] = -10 + rand() % 21;
}

// ���� ������
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

// ���� ������� ��� ���������� ���� �������� � ��������� ���������
int SumOddIndices(const int* const b, const int size)
{
    int sum = 0;
    for (int i = 1; i < size; i += 2) // �������� � ������� 1 � ������� ����� 2
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

    // ������ ������� ��� ���������� ���� �������� � ��������� ���������
    int sumOdd = SumOddIndices(b, n);
    cout << "Sum of elements with odd indices: " << sumOdd << endl;

    delete[] b;
    b = nullptr;

    return 0;
}
