#include<stdio.h>
#include<stdlib.h>
int findKthPositive(int* arr, int arrSize, int k){
int og[1000];
    int c=0;
    if(k!=0)
    {return 0;}
    for(int i=1;i<=k;i++)
    {
        if(i!=arr[i-1])
        {
            og[c]=i;
            printf("%d",og[c]);
            c++;
        }
    }
    return og[k];
}
int main()
{
    printf("Input k=");
    int k;
    scanf("%d",&k);
    int *arr= malloc(sizeof(int)*1000);
     printf("Input arr length=");
    int l;
    scanf("%d",&l);
    for(int i=0;i<l;i++)
    {
        scanf("%d", &arr[i]);
    }
    int p=findKthPositive(arr, l, k);
    printf("%d",p);
}