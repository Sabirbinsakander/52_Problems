#include<stdio.h>
int main()
{
    int T, n1, n2, temp, kase;
    scanf("%d", &T);
    for (kase = 0; kase <= T; kase++)
    {
        /* code */
        scanf("%d %d", &n1, &n2);
        if (n1 > n2)
        {
            /* code */
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        printf("Case %d : %d %d\n", kase, n1, n2);
        
    }
    return 0;
}