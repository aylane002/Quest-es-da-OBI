#include<stdio.h>
#include<stdlib.h>
//recibo

int K,R,i,j,s, cont=0;

int repet(int laco, int valorMin, int valorMax){
	if(laco == K){ //T� no utimo la�o?
		if(valorMin <= valorMax){ //achei l� o valor total?
		  cont++;}
	} else{
		for(int i= valorMin; i <= valorMax; i++){ // pra cada la�o ele chama um minimo e maximo diferente ex: o 2� i+1 e max R-i
			repet(laco+1, i+1, valorMax-i);
		}
	}
}

int main(){
	
	scanf("%d %d", &R, &K);
	repet(1 , 1, R);
	printf("%d\n", cont);
	
//	for(i=1; i<=R;i++){��
//		for(j=i+1; j<=R-i;j++){
//			for(s=j+1; s<=R-j;s++){
//				if(i+j+s==R) cont++;
			
system("pause");

}
