#include <stdio.h>
int main(){
    int a;
    printf("Enter a month number : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    printf("This month has %d days",31);
        break;
    
    case 4:case 6:case 9:case 11:
    printf("This month has %d days",30);
        break;
    case 2:
    printf("This month has 28 days");
    break;
    
    }
    
    
    
    
    
    
    return 0;
}