#include <stdio.h>

void disp(){
    static int c=0;
    ++c;
    printf("\nThe value stored in c=%d",c);
}

int main(){
    
   disp();disp(); 
    return 0;
}
