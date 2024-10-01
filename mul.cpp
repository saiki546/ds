#include<stdio.h>
int main(){
	int mat1[3][3],mat2[3][3],mul[3][3]={0};
	int i,j;
	printf("enter the elements of 1st matrix,\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the elements of 2 nd matrix.\n");
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(int k=0;k<3;k++){
				mul[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	} 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mul[i][j]);
		}
        printf("\n");		
	}
	
	
}