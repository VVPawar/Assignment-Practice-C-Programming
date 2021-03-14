#include<sdtio.h>
#include<conio.h>
void main(){
    int i=1,n,sum=0;
    clrscr();
    printf("Print sum of odd numbers 1 to :\t");
    scanf("%d",&n);
    while(i<=n){
        if((i%2)!=0){
            sum=sum+i;
        }
        i++;
    }
    printf("\t%d",sum);
    getch();
}

/*Output:
      Print sum of odd numbers 1 to :   10
          25
*/
