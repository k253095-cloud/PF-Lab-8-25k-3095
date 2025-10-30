#include<stdio.h>
int main(){
//	int class1[4]={85,92,78,90};
//	int class2[4]={88,76,95,84};
//	int class3[4]={90,85,88,92};
//	int sum1=0, sum2=0, sum3=0;
//	 float av1=0,av2=0, av3=0;
//	for(int i=0; i<4;i++) {
//		sum1+=class1[i];
//		sum2+=class2[i];
//		sum3+=class3[i];
//	}
//	av1=(float)sum1/4;
//	av2=(float)sum2/4;
//	av3=(float)sum3/4;
//	printf("Average of class 1 : %.2f\n", av1);
//	printf("Average of class 2 : %.2f\n", av2);
//	printf("Average of class 3 : %.2f\n", av3);
     int  scores[3][4]={{85,92,78,90},{88,76,95,84},{90,85,88,92}};
    for(int i=0; i<3; i++) {
    	int sum=0;
    	for(int j=0; j<4; j++) {
    		sum+=scores[i][j];
		}
		 float av=(float)sum/4;
	  printf("Average of class %d: %.2f\n", i+1,av);
	}
	 
	return 0;
}
