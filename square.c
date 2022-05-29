#include<stdio.h>
#include<conio.h>
int main(){
	// A program to generate square number
	int sqn = 1, i=1;



	// using while loops to print Square Number
	printf("Square Number up to 20 \n\n");
	while(i<=20){
		sqn++;
		int equation = sqn * sqn;
		printf("%d * %d = %d \n",sqn,sqn,equation);
		i++;
	};
    
    printf("\n\n");
    // using loop to print Cube number
    int sqnb = 1, u = 1;
    printf("Cube Number up to 20\n\n");
	while(u<=20){
		sqnb++;
		int equation = sqnb * sqnb * sqnb;
		printf("%d * %d * %d = %d\n",sqnb,sqnb,sqnb,equation);
		u++;
	}
	return 0;
}
