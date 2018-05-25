#include<stdio.h>
#define PERC15 0.15
#define PERC12 0.12
#define PERC10 0.10
#define PERC7 0.07
#define PERC4 0.04
int main(){
	float antigo_sal, novo_sal;
	scanf("%f",&antigo_sal);

	if (antigo_sal<=400){
		printf("Novo salario: %.2f\n",antigo_sal+(antigo_sal*PERC15));
		printf("Reajuste ganho: %.2f\n",antigo_sal*PERC15);
		printf("Em percentual: 15 %%\n");
	}
	else if(antigo_sal<=800){
		printf("Novo salario: %.2f\n",antigo_sal+(antigo_sal*PERC12));
		printf("Reajuste ganho: %.2f\n",antigo_sal*PERC12);
		printf("Em percentual: 12 %%\n");
	}
	else if(antigo_sal<=1200){
		printf("Novo salario: %.2f\n",antigo_sal+(antigo_sal*PERC10));
		printf("Reajuste ganho: %.2f\n",antigo_sal*PERC10);
		printf("Em percentual: 10 %%\n");
	}
	else if(antigo_sal<=2000){
		printf("Novo salario: %.2f\n",antigo_sal+(antigo_sal*PERC7));
		printf("Reajuste ganho: %.2f\n",antigo_sal*PERC7);
		printf("Em percentual: 7 %%\n");
	}
	else{
		printf("Novo salario: %.2f\n",antigo_sal+(antigo_sal*PERC4));
		printf("Reajuste ganho: %.2f\n",antigo_sal*PERC4);
		printf("Em percentual: 4 %%\n");
	}
	return 0;
}
