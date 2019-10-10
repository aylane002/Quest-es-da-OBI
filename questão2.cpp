#include<stdio.h>
#include<stdlib.h>
//soma

int main(){
	int N,K,i,j, cont=0, soma=0;
	
	scanf("%d %d",&N, &K);
	int v[N];
	for(i=1;i<=N;i++){
		scanf("%d",&v[i]);
    }
	for(i=1;i<=N;i++){

		soma=v[i];
		if(soma==K) cont++;
        for(j=i+1;j<=N;j++){
			soma+=v[j];
			if(soma==K) cont++;	
		}
	}
	printf("%d\n",cont);
    system("pause");	
}
