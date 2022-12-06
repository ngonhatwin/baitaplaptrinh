#include "stdio.h"
int main () {
	float a, b;
	printf("\n so a = ");
	scanf ("\n %f", &a);
	printf ("\n so b = ");
	scanf ("\n %f", &b);
	
	if ( a != 0 ) {
		printf ("\n phuong trinh co nghiem duy nhat x = - b / a ");
		} else {
			if ( b == 0) {
				printf ("\n phuong trinh co vo so nghiem");
				}else {
				printf ("\n phuong trinh vo nghiem");
			}
	}
	
}
