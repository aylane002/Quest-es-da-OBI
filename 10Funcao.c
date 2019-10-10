#include<stdio.h>
#include<stdlib.h>

int i,j,n,aux, flag=0;
    
    int main(){
        
    scanf("%d",&n);
    int v[n];
    preencha(v,n);
    procure( v, n);
    print(v,n);
    
    system("pause");
    return 0;
}
    
        
    
    void troca(int *a, int *b) {
        aux = *a;
        *a = *b;
        *b = aux;
    }   
    void procure(int v[], int n){
       for ( i=0;i<n;i++) {
            if(v[i] == 0 || v[i] == 5){
                troca(&v[i],&v[n-1]);
                flag=1;
                break;
             }
        }
    }
        
        
    void print(int v[], int n){
         if(flag==0) printf("-1\n");
             else {
              for(i=0; i<n;i++){
              printf(" %d  ", v[i]);
            }
        }
    
    }
    
    void preencha(int v[], int n){
        for(i=0; i<n;i++){
             scanf("%d", &v[i]);
         }
    }
    
    
