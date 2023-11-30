#include <stdio.h>
main(){
	int a = 10;
	int *disPlayA = &a;
	printf ("so a = %d\n",a);
	printf ("so disPlayA=%d\n",disPlayA);
	printf ("so *disPlayA=%d\n",*disPlayA);
	printf ("so *a= %d\n",&a);
}
