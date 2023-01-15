#include <stdio.h>
#include <conio.h>

double power(double x, double exp);

int main()
{
    int N = 1, factorial = 1;
    double sum = 0, a = 0;
    printf("Enter N(>=1)\nN = ");
    scanf("%d", &N);
    printf("Enter a\na = ");
    scanf("%lf", &a);
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= i * 2; j++)
        {
            factorial *= j;
        }
        if (i % 2)
            sum -= power(a, 2 * i) / factorial;
        else
            sum += power(a, 2 * i) / factorial;
    }

    printf("Sum = %lf", sum);
    getch();
    return 0;
}

double power(double x, double exp)
{
    if (exp >= 0)
    {
        double sum = 1;
        for (int i = 0; i < exp; i++)
            sum *= x;
        return sum;
    }
    else
    {
        double sum = 1;
        for (int i = 0; i > exp; i--)
            sum /= x;
        return sum;
    }
}
