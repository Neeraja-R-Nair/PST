//accepting 1D array and calculating frequency of a particular element from an array

#include<stdio.h>
int main()
{
    int n, i, a[10], j, freq=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nThe elements are: ");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\nEnter the element whose frequency you want to find: ");
    scanf("%d", &j);

    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            freq++;
        }
    }
    printf("\nFrequency of %d in the array: %d", j, freq);

    return 0;
}
