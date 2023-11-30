#include <stdio.h>
  int swap(int *a, int *b ){
	int temp = *a;
	*a = *b;
	*b = temp;
	}
main(){
	int a , b;
	printf ("nhap 2 so a: , b:");
	scanf ("%d%d", &a, &b);
	int hieu=a-b;
	printf ("gia tri truoc cua %d-%d=%d\n",a,b,hieu);
	swap(&a,&b);
	int hieu2=a-b;
	printf ("gia tri sau khi thay doi la %d-%d=%d\n",a,b,hieu2);
}
