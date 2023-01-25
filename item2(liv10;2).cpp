#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int v[10];
	
	printf("\n");
	for(int i=0;i<10;i++){
		printf("Digite um número: ");
		scanf("%d",&v[i]);
	}
	printf("\n");
	printf("1:Par ; -1:Ímpar\n\n");
	for(int x=0;x<10;x++){
		if(v[x]==0){
			printf("O número 0 é neutro\n");
		}else if(v[x]%2 == 0 && v[x]!=0){
			v[x]=1;
			printf("%2d\n",v[x]);
		}else if(v[x]%2 != 0){
			v[x]=-1;
			printf("%2d\n",v[x]);
		}
	}
	return 0;
}
