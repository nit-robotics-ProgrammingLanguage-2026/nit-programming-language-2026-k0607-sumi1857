#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;
    
    scanf("%d", &n);

    if (n<0)
    {
        printf ("NG");
        return 0;
    }
    for (int i = 0; i <= 50; i++)
    {
        for (int j = 0; j <= 50; j++)
        {
            if (i != j && i + j == n)
            {
                counnt++;
            }
        }
    }
    
    printf("%d",count);            
        
    /* TODO: 課題0607 */
    return 0;
}
