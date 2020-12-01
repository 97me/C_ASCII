//아스키코드로 124가 줄

#include <stdio.h>
int main(void)
{
	unsigned char code ;
	char line = 124;
	unsigned char repeat ;
	
	for(code=0; code<6; code++)
	printf("16: 10:c %c", line);
	printf("\n");
	
	for(code=0; code<6; code++)
	printf("---------+");
	printf("\n");
	
	for(code=32; code<128; code++)
		{
			printf("%x: %d:%c %c", code, code, code, line);
			printf("%x: %d:%c %c", code, code, code, line);
			printf("%x: %d:%c %c", code, code, code, line);
			printf("%x: %d:%c %c", code, code, code, line);
			printf("%x: %d:%c %c", code, code, code, line);
			printf("%x: %d:%c %c", code, code, code, line);
			printf("\n");
		}
}