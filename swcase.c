#include<stdio.h>
int main(){
	int i=0;
	for (i=1;i<=4;i++){
		switch(i){
			case(1):
		    		printf("A");
			case(2):
				printf("B");
			case(3):
				printf("C");
			default:
				printf("D");
		}
	}
	return 0;
}
