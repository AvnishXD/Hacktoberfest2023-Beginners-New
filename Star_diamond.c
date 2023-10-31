#include<stdio.h>
int main()
{
    int i,j,n,k;               //k is number of spaces
    printf("Enter no. of rows ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        // for(k=(n-i);k>0;k--)
        // {
        //     printf(" ");
        // }
        //Negative logic
        for(k=1;k<=(n-i);k++)          //positive logic
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            {
                printf("* ");
            }
        
    printf("\n");
    }
    return 0;
}
