#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 15

int test(){
	int seed = 12563;
	srand(seed);
	int height = 39;
	
	for (int i = 0; i < 3; i++){
		int random = rand() % (height + 17);
		printf("%d\n", random);
	}
}

int main(){

	test();
	
	return 0;
}


