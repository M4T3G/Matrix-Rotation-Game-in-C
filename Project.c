#include <stdio.h>
#include<stdlib.h> 
#include <time.h> 
#define max 50
int main(){
	srand(time(NULL));
	int i,j,n,m,ayse=0,betul=0,A[max][max],k,devam,t=0;
	do{
	printf("Dizinin boyutunu giriniz.\n");
	scanf("%d",&n);
	k=n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[i][j]=(rand()%(n*n))+1;
		}
	}
	printf("\nMatris=\n");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d",A[i][j]);
		}
	}
	printf("\nAyse=%d  Betul=%d\n",ayse,betul);	
	while(t<6){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			A[i][j]=A[i][k];
		}
		k=k-1;
	}
	if(t%2==0){
		for(i=0;i<n;i++){
			ayse=ayse+B[n][i];
		}
	}
	else{
		for(i=0;i<n;i++){
			betul=betul+B[n][i];
		}		
	}
	printf("\nMatris 90 derece dondurulmus hali=\n");
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<n;j++){
			printf("%d",A[i][j]);
		}
	}
	printf("\nAyse=%d  Betul=%d\n",ayse,betul);	
	t++;		
	}
	if(ayse>betul){
		printf("\nAyse kazandi.\n");
	}
	else{
		printf("\nBetul kazandi.\n");
	}
	printf("\nTekrar oynamak icin e ya da E basin.");
	scanf(" %c",&devam);			
	}

	while(devam == 'E' || devam == 'e');

	
	
	
	
	
	
	return 0;
}
