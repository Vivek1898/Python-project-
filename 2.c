#include<stdio.h>
void Task(int[],int);
int main()
{
int a[100],i,n;
printf("\nEnter No Of array Elements :");
scanf("%d",&n);
printf("\nEnter array elements:\n");
for(i=0;i<n;i++)
{
    printf("Enter %d array element:",i+1);
scanf("%d",&a[i]);
}
Task(a,n);
for(i=0;i<n-1;i++)
{

    printf("\nx[%d]= %d",i,a[i]);
}
printf("\n");
return 0;
}
void Task(int x[],int n)
{

int max,i,loc=-1,pos;
max=x[0];
for(i=1;i<n;i++)
{
    
    if(x[i]>max)
    {
        max=x[i];
        
    }
}
for(i=0;i<n;i++)
{
    if(x[i]==max)
    {
        loc=i+1;
        break;
    }
}

  
  pos=loc;
  for(i=pos-1;i<n-1;i++)
{
    x[i]=x[i+1];
}
printf("\n");
printf("\t\t\t\n----- Array AFter Deletion of  Largest Element ' %d ' At Position ' %d ' ---- \n",max,loc);
printf("\n");

 

}