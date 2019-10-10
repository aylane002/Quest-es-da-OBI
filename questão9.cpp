#include<stdio.h>
#include<stdlib.h>

int main(){
	int t1, t2, t3;
	
	scanf("%d %d %d", &t1,&t2,&t3);
	
	if(t1< t2 && t1<t3 && t2<t3 ) printf("\n1\n2\n3");
	else if(t2< t1 && t2<t3 && t1<t3 ) printf("\n2\n1\n3\n");
	else if(t1< t2 && t1<t3 && t3<t2 ) printf("\n1\n3\n2\n");
	else if(t2< t1 && t2<t3 && t3<t1 ) printf("\n2\n3\n1\n");
	else if(t3< t1 && t3<t2 && t2<t1 ) printf("\n3\n2\n1\n");
	else if(t3< t1 && t3<t2 && t1<t2 ) printf("\n3\n1\n2\n");
	
	system("pause");
}
