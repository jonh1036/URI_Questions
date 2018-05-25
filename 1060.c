#include<stdio.h>
int main(){
	int i, n[6], cont = 0;
	
	scanf("%d",&n[0]);
	scanf("%d",&n[1]);
	scanf("%d",&n[2]);
	scanf("%d",&n[3]);
	scanf("%d",&n[4]);
	scanf("%d",&n[5]);
	for (i=0;i<6;i++){
		if(n[i]>0)
			cont ++;
	}
	printf("%d valores positivos\n",cont);
	return 0;
}
