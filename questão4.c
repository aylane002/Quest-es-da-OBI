#include<stdio.h>
#include<stdlib.h>
//Dominó

int main(){
	int i,N,soma=0;
	
	scanf("%d", &N);
	for(i=1;i<=N+1;i++)	soma += i;
	printf("pecas: %d\n", soma);
	
	system("pause");
}
