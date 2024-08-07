#include <stdio.h>

/* int main(void) { */
/* 	unsigned int a =6235342340; */
/* 	 */
/* 	int *b = &a; */
/* 	char *c = &a; */
/* 	 */
/* 	printf("%d\n", *b); */
/* 	printf("%d\n", *c); */
/* 	 */
/**/
/* } */


int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int* ptr = arr;

	for(int i=0; i<5; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(int i=0; i<10; i++){
		printf("%d ",*(ptr+i));
	}

	return 0;
}
