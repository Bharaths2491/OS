#include <stdio.h>

int main()
{
   int siz[1000],s,pars,nob,ps,i,p[10],ef[10];
   int sum=0;
   printf("Enter total memory\n");
   scanf("%d",&s);
   printf("Enter no of process\n");
   scanf("%d",&ps);
   printf("Enter memory required for each process\n");
   for(i=0;i<ps;i++)
   {
       printf("p[%d];",i);
       scanf("%d",&p[i]);
   }
   for(i=0;i<ps;i++)
   {
       if(p[i]<=s)
       {
           printf("Process %d has started executing\n",i);
           s=s-p[i];
       }
       else
       {
           printf("cant execute process %d size is large\n",i);
           ef[i]=0;
       }
   }
   printf("totsl external fragmentation is %d\n",s);
   return 0;
}