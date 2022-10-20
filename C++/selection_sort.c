#include <stdio.h>
#include<conio.h>
void selection(int array[], int n)
{
    int i, j, position, count=0;
    int swap;
    for(i = 0; i < (n - 1); i++)
    {
        position=i;
        for(j = i + 1; j < n; j++)
        {
            if(array[position]>array[j])
                position=j;
            count++;
        }
        if(position != i)
        {
            swap=array[i];
            array[i]=array[position];
            array[position]=swap;
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
        printf(" %d", array[i]);
    printf("\nComplexity: %d", count);
}
int main()
{
    int array[100];
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter Number:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &array[i]);
    selection(array,n);
    getch();
    return 0;
}
