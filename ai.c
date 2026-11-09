#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    scanf("%d", &n);

    if (n < 0)
    {
        printf("NG");
        return 0;
    }

    for (int i = 0; i <= n; i++)
    {
        int j = n - i;

        if (i != j)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
