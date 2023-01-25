#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int v[10];
	
	for(int i=0;i<10;i++){
		printf("Digite um número: ");
		scanf("%d",&v[i]);
	}
	printf("\n");
	printf("Números pares na ordem de trás para frente\n\n");
	for(int x=9;x>=0;x--){
		if(v[x]%2==0){
			printf("%d ",v[x]);
		}
	}
	return 0;
}
