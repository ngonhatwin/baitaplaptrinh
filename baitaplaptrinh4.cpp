#include "stdio.h"
#include "math.h"
int main () {
	int n, i ;
	long tong;
	
	printf ("\n hay nhap n = ");
	scanf ("%d", &n);
	
	tong = 0;
	
	for(i=1;i<=n;i++) {
		
		tong = tong + pow (i,3);
		
	}
	 printf ("\n tong cac so tu 1^3 +....+%d^3 = %d",n , tong);
	
	
	
}
