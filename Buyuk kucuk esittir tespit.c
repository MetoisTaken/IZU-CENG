#include <stdio.h>

int main(){

	int x; 
	int y;

    printf("Birinci sayıyı girin.");
    scanf("%d", &x);
    
    printf("İkinci sayıyı girin.");
    scanf("%d", &y);    
    
    if(x > y) {
        printf("%d %d'den büyüktür.\n", x,y);
    }
    if (x == y) {
        printf("%d %d'ye eşittir.\n", x,y);
    }
    if (x < y) {
        printf("%d %d'dan küçüktür.\n", x,y);
    }
	return 0;
}
