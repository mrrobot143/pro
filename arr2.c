/*Accept the Array Size from User. Add the Elements. Count the Factorial of Each
 Element and then Print Addition of all Factorial. 
Ex. Size5.element 1,2,3,4,5 so answer should be 153. */
#include<stdio.h>
int main()
{
    int n,i,f;
    printf("array size\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    f=factorial(a,n);
  
}
int factorial(int a[],int n)
{
    int facto=1;
    int k,l;
    for(k=1;k<=n;k++)
    {
        facto=1;
        for(l=1;l<=a[k];l++)
        {
            facto=facto*l;
        }
          printf("factorial is the %d\n",facto);
    }
    return 0;
}