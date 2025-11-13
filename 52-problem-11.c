#include<stdio.h>
int main()
{
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i <= T; i++)
    {
        /* code */
        scanf("%d", &N);
        long long int factorial = 1, i;
        for (int i = 2; i <= N; i++)
        {
            /* code */
            factorial = factorial * i;
            printf("%lld\n", factorial);
        }
        
    }
    
}