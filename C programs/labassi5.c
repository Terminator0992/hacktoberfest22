#include <stdio.h>
int Search(int arr[10],int n){
    int i;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n){
            return i;
        }
        else
            continue;
    }
    return -1;
}
int main()
{
    int a[10]={69,3,20,22,42,166,84,91,12,10};
    int unknown;
    printf("Enter the number to be searched: ");
    scanf("%d",&unknown);
    int result=Search(a,unknown);
    printf("%d",result);
    return 0;
}
