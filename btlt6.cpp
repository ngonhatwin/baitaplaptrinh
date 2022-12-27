// Tìm s? nguyên duong nh? nh?t sao cho S = 1 + 2 +...+ n > 10000.
#include<stdio.h>

int main() {
    int S, n;
    S = 0;
    n = 1;
    while ( S < 10000) {
    	S = S + n;
    	n++;
    	
	}
	printf("so nguyen duong nho nhat sao cho S = 1 + 2 +...+ n > 10000 la %d\n", n);
	printf("tong cac so tu 1 + 2 + 3 + ... + %d = %d", n, S);
    
}
