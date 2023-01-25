#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float v[10],ord;
	
	for(int i=0;i<10;i++){
		printf("Digite um número: ");
		scanf("%f",&v[i]);
	}
	for(int x=0;x<10;x++){
		for(int y=0;y<10;y++){
			if(v[x]<v[y]){
				ord = v[x];
				v[x] = v[y];
				v[y] = ord;
			}
		}
	}
	printf("\n\nOrdem Crescente\n\n");
	for(int a=0;a<10;a++){
		printf("%.2f\n",v[a]);
	}
	return 0;
}
