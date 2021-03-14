#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,n;
	printf("Print all the natural number from 1 to :\t");
	scanf("%d",&n);
	while(i<=n){
		printf("%d \t",i);
		i++;
	}
	getch();
}

/*output:
		Print all the natural number from 1 to :	10
		1	2	3	4	5	6	7	8	9	10
*/