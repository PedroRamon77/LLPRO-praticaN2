#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int v[10];
	
	for(int i=0;i<10;i++){
		printf("Digite um n�mero: ");
		scanf("%d",&v[i]);
	}
	printf("\n");
	printf("N�meros pares na ordem de tr�s para frente\n\n");
	for(int x=9;x>=0;x--){
		if(v[x]%2==0){
			printf("%d ",v[x]);
		}
	}
	return 0;
}
