#include<stdio.h>
#include<conio.h>
void main(){
    clrscr();
    printf("Enter the Numbear : ");
    scanf("%d",&n);
    while(i<=10){
        printf("%d * %d = %d",i,n,i*n);
        i++;
    }
    getch();
}

/*Output:
      Enter the Numbear : 2
      1 * 2 = 2
      2 * 2 = 4
      3 * 2 = 6
      4 * 2 = 8
      5 * 2 = 10
      6 * 2 = 12
      7 * 2 = 14
      8 * 2 = 16
      9 * 2 = 18
      10 * 2 = 20
*/
