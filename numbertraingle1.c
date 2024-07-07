// print the pattern: 
// 1
// 12
// 123
// 1234


#include <stdio.h>
int main(){

    int n;
    printf("enter the number of rows :\n");
    scanf("%d"  ,&n);
    int a = n;
    for(int i=1;i<=n;i++) //no of lines / no of rows -> i`
    {
        for(int j=1;j<=a;j++){
            printf("%d",j);
        }
        a--;
        printf("\n");       
    }


    return 0;
}