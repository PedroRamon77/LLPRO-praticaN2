#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v[10];
	
	printf("\n");
	for(int i=0;i<10;i++){
		printf("Digite um número: ");
		scanf("%f",&v[i]);
	}
	printf("\nNúmeros cujo os índice é par\n");
	for(int x=0;x<10;x++){
		if(x%2==0 && x!=0){
			printf("%.2f\n",v[x]);
		}
	}
	return 0;
}
