#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int n,sum=0,r,d,m;
scanf("%d",&n);
m=n;
d=(int)log10(n)+1;
while(n>0)
{
r=n%10;
sum=sum+ceil(pow(r,d));
n=n/10;
d--;
}
if(sum==m)
printf("%d is disarium number",m);
else
printf("%d is not disarium number",m);

 getch();
return 0;
}
