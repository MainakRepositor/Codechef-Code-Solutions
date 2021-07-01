#include <stdio.h>

int main(void) {
   int l,b;
   scanf("%d",&l);
   scanf("%d",&b);
   int ar,peri;
   ar=(l*b);
   peri=(2*(l+b));
   if(ar==peri)
   {
       printf("Eq\n");
       printf("%d",ar);
   }
   else
   {
   if(ar>peri)
   {
       printf("Area\n");
       printf("%d",ar);
   }
   else
   {
       printf("Peri\n");
       printf("%d",peri);
   }
   }
   
	return 0;
}

