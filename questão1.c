#include<stdio.h>
#include<stdlib.h>
//Monica

int main(){
	int M,a,b,c, soma;
	scanf("%d %d %d", &M,&a, &b);
	soma=a+b;
	c = M - soma;
	if(a>b && a>c) printf("%d \n", a);
		else if(b>a && b>c) printf("%d\n ", b);
		else if(c>a && c>b) printf("%d\n ", c);
		
		system("pause");
}
