#include<stdio.h>
#include<conio.h>
void main(){
      int i=1,n,sum=0;
      printf("Print sum of natural 1 to :\t");
      scanf("%d",&n);
      whlie(i<=n){
        sum=sum+i;
        i++;
      }
      printf("\t %d",sum);
      getch();
}

/*Output:
    Print sum of natural 1 to :   10
        55
*/
