#include<stdio.h>
int main(){
	int Hi, Hf, Mi, Mf, hora, minuto;
	scanf("%d%d%d%d",&Hi,&Mi,&Hf,&Mf);
	
	if(Hf==Hi && Mf-Mi>0){
		minuto = Mf-Mi;
		hora = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi>0 && Mf==Mi){
		minuto = 0;
		hora = Hf-Hi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf==Hi && Mf-Mi<0){
		minuto = 60+Mf-Mi;
		hora = 23;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi<0 && Mf==Mi){
		minuto = 0;
		hora = 24+Hf-Hi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi>0 && Mf-Mi>0){
		minuto = Mf-Mi;
		hora = Hf-Hi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi<0 && Mf-Mi<0){
		minuto = 60+Mf-Mi;
		hora = 24+Hf-Hi-1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi>0 && Mf-Mi<0){
		minuto = 60+Mf-Mi;
		hora = Hf-Hi-1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hf-Hi<0 && Mf-Mi>0){
		minuto = Mf-Mi;
		hora = 24+Hf-Hi;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
	}
	else if(Hi == Hf && Mi == Mf && Hi == Mi){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	return 0;
}
