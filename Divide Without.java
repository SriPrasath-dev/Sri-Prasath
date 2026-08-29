int divide(int dividend, int divisor)
{
    if (dividend == -2147483648 && divisor == -1)
        return 2147483647;

    long long a = dividend;
    long long b = divisor;

    int sign = 1;

    if (a < 0)
    {
        a = -a;
        sign = -sign;
    }

    if (b < 0)
    {
        b = -b;
        sign = -sign;
    }

    long long quotient = 0;

    while (a >= b)
    {
        a = a - b;
        quotient++;
    }

    if (sign == -1)
        quotient = -quotient;

    return (int)quotient;
}