#include <stdio.h>
#include <stdlib.h>

 void towerofhanoi(int n,char source,char dest,char temp)
 {
     if(n>1)
     {
         towerofhanoi(n-1,source, temp,dest);
         printf("\n move %d disc from %c to %c",n,source,dest);
          towerofhanoi(n-1, temp,dest,source);

     }
     else{
        printf("\n move %d disc from %c to %c",n,source,dest);
 }
 }

int main()
{
    int n;
    printf("\n read number of disc:");
    scanf("%d",&n);
    towerofhanoi(n,'s','d','t');


    return 0;
}
