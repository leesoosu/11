#include <stdio.h>
#include <stdlib.h>

void main(void) {
     int i = 300; //300���� �����ؼ��� �غ���
     
     int *pi = &i;
     char *pc = &i;
     
     printf("%i, %i, %i\n", i, *pi, *pc);
     
     system("PAUSE");	
     return 0;
}
