#include<stdio.h>
int main(){
		printf("Multiplication of table\n");
	int n;
     printf("Enter a number for printing table :");
     scanf("%d", &n);
      int table;
	for(int i=1; i<=n; i++) { 
	   printf("%d: ",i);
	   for(int j=1; j<=10; j++) {
	    table=i*j;
	   // printf("%d * %d = %d \n",i,j, table);
	   printf(" %d ", table);
	   }	
	   printf("\n");
	}
	return 0;
}
