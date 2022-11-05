#include <stdio.h>
#include <math.h>

int main(){
   int a,b,c;
   printf("Enter a number : ");
   scanf("%d",&a);
   /*printf("Enter b number : ");
   scanf("%d",&b);
   printf("Enter c number : ");
   scanf("%d",&c);*/
   printf("a^2 %.0f\n",pow(a,2));
   printf("sqrt(a) %.0f\n",sqrt(a));
   printf("abs(-10) %d\n",abs(-10));
   printf("ceil(2.1) %.0f\n",ceil(2.1));
   printf("floor(2.9) %.0f\n",floor(2.9));
   printf("round(2.7) %.0f\n",round(2.7));
   printf("round(2.3) %.0f\n",round(2.3));
   printf("round(2.27) %.f\n",round(2.27));

    
    
    return 0;

}