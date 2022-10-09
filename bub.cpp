#include <stdio.h>
 
int main()
{
    int i,j,n,x,arr[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                x=arr[j];
                arr[j]=arr[i];
                arr[i]=x;

            }
        }
    }
    printf("Ascending order:");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
 
    return 0;
}
