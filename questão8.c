#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//BANANAS

int main(){
	int i,j,cont=1,n,maior;
	char S[20];
	scanf("%s", &S);
	
	for(i=0;i<strlen(S);i++){
		if(S[i]<=S[i+1]) cont++;
		}
	
	printf("cont: %d\n", cont);
	system("pause");
}

