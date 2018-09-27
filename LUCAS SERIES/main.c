#include <stdio.h>
#include <stdlib.h>
/*0,1,1,2,4,7,13...*/
int main()
{ int n,i,f,s,t,sum;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    for(i=s=t=1,f=0;i<=n;i++)
       { sum=f+s+t;
        printf("%d,",s);
    f=s;
    s=t;
    t=sum;
       }
       printf("\b ");
       getch();
    return 0;
}
