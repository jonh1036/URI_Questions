#include<stdio.h>
int main(){
	int a, b, c, d, e, f, aux;
	scanf("%d%d%d",&a,&b,&c);
	d = a;
	e = b;
	f = c;
	
	if (a>b){
		aux = a;
		a = b;
		b = aux;	
	}
	if (a>c){
		aux = a;
		a = c;
		c = aux;	
	}
	if (b>c){
		aux = b;
		b = c;
		c = aux;	
	}
	
	
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("\n");
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	
	return 0;
}
