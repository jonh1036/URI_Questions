#include<stdio.h>
int main(){
	int Hi, Hf;
	scanf("%d%d",&Hi,&Hf);
	
	if(Hf-Hi<0){
		printf("O JOGO DUROU %d HORA(S)\n",24+Hf-Hi);
	}
	else if(Hi == Hf){
		printf("O JOGO DUROU 24 HORA(S)\n");
	}
	else{
		printf("O JOGO DUROU %d HORA(S)\n",Hf-Hi);
	}
	
	return 0;
}
