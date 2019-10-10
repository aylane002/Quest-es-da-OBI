#include<stdio.h>
#include<stdlib.h>

int main(){
int i,j,n,aux, flag=0;

scanf("%d",&n);
int v[n];

for(i=0; i<n;i++){
scanf("%d", &v[i]);

}
for ( i=0;i<n;i++) {
        if(v[i] == 0 || v[i] == 5){
        aux=v[i];
        v[i]=v[n-1];
        v[n-1]=aux;
        flag=1;
        break;
        } 
    }
 if(flag==0) printf("-1\n");
     else {
      for(i=0; i<n;i++){
      printf(" %d  ", v[i]);
        }
    }

system("pause");
}
