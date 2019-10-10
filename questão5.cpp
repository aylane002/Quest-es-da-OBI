#include<stdio.h>
#include<stdlib.h>
int main() {
  int n, i;
  unsigned long ponto, resultado; //32 bits, 2
  scanf("%d",&n);
  ponto = 2;
  for (i = 0; i < n; i++) {
    ponto += ponto - 1; //2+2-1
}
    resultado= ponto*ponto;
    printf("\n%ld\n",resultado); 
    system("pause");
  
}

