#include<stdio.h>

int main() {
    float a, b;
    
    printf ("\n hay nhap vao hai so a, b ");
    scanf ("%f%f", &a, &b);
    
    if (a*b/2>=0) {
    	printf ("\n a va b cung dau");
	}
	if (a*b/2<=0) {
		printf ("\n a va b khac dau");
	}
}
