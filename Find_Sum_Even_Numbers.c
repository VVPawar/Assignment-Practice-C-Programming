#include<stdio.h>
#include<conio.h>
void main(){
    int i=1,n,sum=0;
    clrscr();
    printf("Print sum of Even Numbers 1 to :\t");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum=sum+1;
        }
        i++;
    }  
    printf("\t%d",sum);
    getch();
}

/*Output:
    Print sum of Even Numbers 1 to :    10
        30
*/
