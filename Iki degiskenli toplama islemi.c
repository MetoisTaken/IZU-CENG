#include <stdio.h>

int main(){

	int x; 
	int y;

    printf("Birinci sayıyı girin. ");
    scanf("%d", &x);
    
    printf("İkinci sayıyı girin. ");
    scanf("%d", &y);    
    
	printf("%d + %d = %d\n", x,y,x+y);

	return 0;
}
