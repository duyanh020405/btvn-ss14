#include <stdio.h>
#include <string.h>
main(){
	char arr[100],arr2[100];
	printf("nhap gia tri cua chuoi 1 :") ;
	gets(arr) ;
	int size1 = strlen(arr);
	printf ("nhap gia tri cua chuoi 2 :");
	gets(arr2) ;
	int size2 = strlen(arr2);
	if (size1>size2){
		printf("chuoi 1 lon hon");
	}
	else {
	printf ("chuoi 2 lon hon");
	     }
}
