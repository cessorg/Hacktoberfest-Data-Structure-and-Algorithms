#include<stdio.h>
#define MAX 100
main()
{
    int arr[MAX],i,j,n,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        k=arr[i];
        for(j=i-1;j>=0 && k<arr[j];j--)
            arr[j+1]=arr[j];
        arr[j+1]=k;
    }

    printf("Sorted List is: \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
