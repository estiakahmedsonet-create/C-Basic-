#include<stdio.h>
int main()
{

    int size;

    printf("Enter size of the array = ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements of the array \n");

    for(int i=0;i<size;++i)
    {
        printf("Element %d= ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array Elements are = ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
