#include<stdio.h>
int main()
{
    int a[100],i,loc=-1,n,key,beg,last,mid;
printf("\nEnter n:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
    printf("Enter array elements:",i+1);
scanf("%d",&a[i]);
}
printf("\nEnter element to search:");
scanf("%d",&key);
beg=0;
last=n-1;
while(beg<=last)
{
mid=(beg+last)/2;
if(a[mid]==key)
{
loc=mid;
break;
}
else if(a[mid]>key)
{
last=mid-1;
}
else if(a[mid]<key)
{
beg=mid+1;
}
}
if(loc!=-1)
{
printf("\nElement found at exact location:%d, index:%d",loc+1,loc);
}
else
{
printf("\nElement not found");
}
return 0;
}