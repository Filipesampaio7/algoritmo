#include <stdio.h>

int main(){
	
	int i;
	double list[10];
	for(i=0; i<10; i++){
		printf("Insira um real(%d): ", i+1);
		scanf("%lf", &list[i]);
	}
	
	for(i=0; i<10; i++){
		printf("%.2lf ^ 2 = %.2lf\n", list[i], list[i]*list[i]);
	}
	
	
	return 0;
}
