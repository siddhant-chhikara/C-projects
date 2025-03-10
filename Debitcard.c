#include <stdio.h>
int main (void)
{
    long long int n;
    int sum1 = 0;
    int sum2 = 0;
    int a;
    do
    {
        printf("Enter card number: ");
        scanf("%lld",&n);
    } while (n<1000000000);
    
    
    long long int f = n; 
    long long int v = n;
    long long int m = n;
    int digitCount = 0;

    while (v>0)
    {
        v=v/10;
        digitCount++;
    }

    if (digitCount < 13 || digitCount > 16)
    {
        printf("INVALID\n");
        return 0;
    }

    while (n>0)
    {
        a = n % 10;
        n=n/100;
        sum1=sum1+a;
    }

    // printf("sum1 is %d\n",sum1);

    f = f/10;
    int k = 0;

    while (f>0)
    {
        long long int j = 0;
        int k ;
        int l;
        j = f % 10;
        k=j*2;
        f=f/100;

        while (k>0)
        {
            l = k%10;
            k = k/10;
            sum2=sum2+l;
        }

    }

    // printf("sum2 is %d\n",sum2);

    int x;
    x = sum1 + sum2;
    
    // printf("SUM IS %d",x);;
    while (m >= 100)
    {
        m = m / 10;
    }

    if (x%10==0 && digitCount == 15 && (m == 37 || m == 34))
    {
        printf("AMEX\n");
    }
    else if (digitCount == 16 && (m >= 51 && m <= 55))
    {
        printf("MASTERCARD\n");
    }
    else if (x%10==0 && m/10==4 && (digitCount == 13 || digitCount == 16))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}