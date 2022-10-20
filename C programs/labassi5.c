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
    int a[10]={62,25,351,121,41,116,78,99,10,01};
    int unknown;
    printf("Enter the number to be searched: ");
    scanf("%d",&unknown);
    int result=Search(a,unknown);
    printf("%d",result);
    return 0;
}
