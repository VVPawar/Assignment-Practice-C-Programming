#include<stdio.h>
#include<conio.h>
void main(){
      clrscr();
      int n,rem,sum=0;
      printf("Enter the Numbear : ");
      scanf("%d",&n);
      while(n != 0){
          rem = n % 10;
          sum = sum + rem;
          n = n / 10;
      }
      printf("Total = %d ",sum);
      getch();
}

/*Output:
      Enter the Numbear : 123
      Total = 6
*/
