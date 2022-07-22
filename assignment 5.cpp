#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no of times to print My SirSG ");
    scanf("%d", &n);
    for(i=1; i<= n; i++)
        {
            printf("My SirG \n");
        }
        printf("\n");
        int p,q;
        printf("enter the no of value till you want to print natural numbers ");
    scanf("%d", &p);
    for(q=1; q<= p; q++)
        {
            printf("%d " ,q );
        }
        printf("\n");
        int r,s;
        printf("enter the no of value till you want to print natural numbers in reverse order  ");
    scanf("%d", &r);
    for(s=r; s>= 1; s=s-1)
        {
            printf("%d ",s);
        }
        printf("\n");
        int m,l;

        printf("enter the no of values you want to print first odd natural numbers in reverse order  ");
    scanf("%d", &m);
    for(l=2*m-1; l>= 1; l=l-2)
        {
            printf("%d ",l);

        }
        printf("\n");
        int a,b;
         printf("enter the no of value  you want to print first  even natural numbers in reverse order  ");
    scanf("%d", &a);
    for(b=2*a; b>= 2; b=b-2)
        {
            printf("%d ",b);
        }
        printf("\n");
        int c,d;

        printf("enter the no of value you want to print first odd natural numbers  ");
    scanf("%d", &c);
    for(d=1;d<= 2*c -1;d=d+2)
        {
            printf("%d ",d);
        }
printf("\n");
int e,f;
         printf("enter the no of value  you want to print first  even natural numbers  ");
    scanf("%d", &f);
    for(e=2*f; e>= 2; e=e-2)
        {
            printf("%d ",e);
        }
        printf("\n");

        int g,h=1,k;

         printf("enter the value  you want to print squares of natural numbers ");
    scanf("%d", &g);

while(h<=g)
{ k=h*h;
    printf("%d ",k);
    h++;}

        printf("\n");
int u,v=1,w;

         printf("enter the value  you want to print squares of natural numbers ");
    scanf("%d", &u);

while(v<=u)
{ w=v*v*v;
    printf("%d ",w);
    v++;}

        printf("\n");
        int y,z;

        printf("enter the no you want to print table of ");
        scanf("%d",&z);

for(y=1; y<= 10;y++)
{
    printf(" \n %d  x  %d = %d " ,z,y, 5*y);
}








    }

