#include <stdio.h>

int main()
{
   int size[1000],s,pars,nob,ps,i,p[10],ef[10];
   int sum=0;
   printf("Enter total memory\n");
   scanf("%d",&s);
   printf("Enter no of partitons\n");
   scanf("%d",&pars);
   nob=s/pars;
   printf("Enter block has capacity of %d\n",nob);
   printf("Enter no of process\n");
   scanf("%d",&ps);
   printf("Enter memory required for each process\n");
   for(i=0;i<ps;i++)
   {
       if(p[i]<=nob)
       {
           printf("Process %d has started executing\n",i);
           ef[i]=nob-p[i];
           pars=ef[i];
           printf("Process p[%d] has internal fragmentation %d\n",i,pars);
       }
       else 
       {
           printf("cant excute process %d beacause process size is large\n",i);
           ef[i]=0;
       }
   }
    for(i=0;i<ps;i++)
    {
        sum+=ef[i];
    }
    printf("Total internal fragmentation is %d\n",sum);
    return 0;
}   