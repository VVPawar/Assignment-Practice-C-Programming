#include<stdio.h>
#include<conio.h>
void main(){
	int i=1,n;
	printf("Print all the natural numbers from 1 to : \t");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t",n);
		--n;
	}
	getch();
}

/* output:
	Print all the natural numbers from 1 to :	10
	10	9	8	7	6	5	4	3	2	1
	*/