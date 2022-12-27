#include <stdio.h>
#include "math.h"
 int main () {
 	int thang;
 	printf ("\n hay nhap thang = ");
 	scanf ("%d", &thang);
 	
 	switch (thang) {
	 
 		
 		case 1:
 		case 2:
 		case 3:
 			printf("\n thang nay thuoc quy 1");
 			break;
 		case 4:
 		case 5:
 		case 6:
 			printf("\n thang nay thuoc quy 2");
 			break;
 		case 7:
 		case 8:
 		case 9:
 			printf("\n thang nay thuoc quy 3");
 			break;
 		case 10:
 		case 11:
 		case 12:
		 	printf("\n thang nay thuoc quy 4");
 			break;
 		}
 }
