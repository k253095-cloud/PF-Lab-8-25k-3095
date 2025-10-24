#include<stdio.h>
#include<limits.h>
int main() {
	int i,j;
	int matrix[][4]={{10,22,35,41},{50,65,73,80},{91,10,11,12}};
	int max=INT_MIN;
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			if(max<matrix[i][j]) {
				max=matrix[i][j];
			}	
		}
	}
	printf("\nIndex of maximum number is : (%d, %d)", i,j);
	printf("\nMaximum number is = %d ", max);
	
	return 0;
}
