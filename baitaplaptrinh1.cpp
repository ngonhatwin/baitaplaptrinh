#include<stdio.h>

int main() {
    float a, b, c, max, min;
    
    printf ("\n hay nhap ba so a, b, c ");
    scanf ("%f%f%f", &a, &b, &c );
    
  	if (a>b && a>c) {
  		printf("\nmax=%f", a );
  		
	  }
	  
	if (a<b && a<c) {
		printf ("\nmin=%f",a);
	}
	
	if (b>a && b>c) {
		printf ("\nmax=%f", b );
		
	}
	if (b<a && b<c) {
		printf ("\nmin=%f", b);
		
	}
	if (c>a && c>b) {
		printf ("\nmax=%f", c);
		
	}
	if (c<a && c<b) {
		printf ("\nmin=%f", c);
	}
}
