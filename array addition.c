#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array[100];
    int limit,i;
    int sum=0;
    printf("HI");
    printf("\nENTER THE LIMIT OF THE ARRAY");
    scanf("%d",&limit);
    printf("\nEnter the values of the array");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",array[i]);
    }
    for ( i = 0; i < limit; i++)
    {
         sum=sum+array[i];
    }
        printf("The sum is=%d",sum);
        
    

    return EXIT_SUCCESS;

}