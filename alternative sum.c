// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,a[100], sum = 0,i;
    printf("Enter the length of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i+=2)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}
