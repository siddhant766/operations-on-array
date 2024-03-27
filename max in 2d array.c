#include<stdio.h>
int main(){
	int a[3][3],i,j,max;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	printf("%d",max);
	return 0;
}
