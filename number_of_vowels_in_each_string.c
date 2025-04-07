#include<stdio.h>
int main()
{
   int n,tc=0;
   printf("Enter no. of strings\n");
   scanf("%d",&n);
   getchar();
   char arr[n+1][100];
     printf("Enter a string:\n");
   for(int i=0;i<=n;i++)
     fgets(arr[i],100,stdin);
   printf("\nNumber of vowels in each string:\n");
   for(int i=0;i<n;i++)
   {
     int c=0;
     for(int j=0;arr[i][j]!='\0';j++)
     {
        char ch=arr[i][j];
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
        c++;
        tc++;
        }
     }
   printf("String %s --> Vowels: %d\n",arr[i],c);
  }
  printf("Total vowels:%d",tc);
}
