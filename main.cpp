#include <stdio.h>

int getNOD(int a, int b);           // функция расчета НОД
int getNOK (int a, int b);          // функция расчета НОК
int getNumber();                    // ввод количества элементов в массиве
int N = getNumber();                // вот столько будет элементов в массиве
int a = 1;                          // сюда буду записывать НОК
void getArray(int *A, int N);       // заполняем массивчик

int main()
{
    int A[N];
    getArray(A, N);

    for(int i=0; i<N; ++i)
    {
        int b = A[i];
        int NOD = getNOD(a, b);     // вызов функции расчета НОД
        a = getNOK(a, b);           // вызов функции расчета НОК
    }
    printf("%d", a);
}

int getNumber()
{
    int n;
    printf("Введите количество элементов в массиве N = ");
    scanf("%d", &n);
    return n;
}

void getArray(int *A, int N)
{
    for(int i=0; i<N; i++)
    {
        printf("Arr[%d] = ", i);
        scanf("%d", &A[i]);
    }
}

int getNOD(int a, int b)
{
    {
        while (a != b)
        {
            a < b ? (b -= a) : (a -= b);
        }
    }
    return a;
}

int getNOK (int a, int b)
{
    int nk = a * b / getNOD(a, b);
    return nk;
}