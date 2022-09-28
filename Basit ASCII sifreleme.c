#include <stdio.h>

int main(){

	char x; 
	int y;

    printf("Herhangi bir karakter girin. ");
    scanf("%c", &x);
    
    printf("Girdiginiz karakterin ASCII olarak karsiligi %d \n", x);

    printf("Girdiginiz karakterin ASCII numarasina eklenecek sayiyi girin.");
    scanf("%d", &y);    
    
    printf("Son durumda olusan karakterin ASCII olarak karsiligi %d \n", x+y);

	printf("%c + %d = %c\n", x,y,x+y);

	return 0;
}
