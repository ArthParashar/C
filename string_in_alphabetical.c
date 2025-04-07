#include<stdio.h>
int main()
{ 
  int n;
  char str[100][100],temp[100];
  printf("Enter no. of strings");
  scanf("%d",&n);
  getchar();
  printf("Enter a string:\n");
  for(int i=0;i<=n;i++)
     fgets(str[i],100,stdin); 
  for(int i=0;i<n-1;i++)
  {
     for(int j=i+1;j<n;j++)
     {
       int k=0;
       int swap=0;
       while(str[i][k]!='\0' && str[j][k]!='\0')
       {
          if(str[i][k]>str[j][k])
          {
          swap=1;
          break;
          }
          else if(str[i][k]<str[j][k])
          {
            swap=0;
            break;
          }
          k++;
       }
       if(swap==0 && str[i][k]!='\0' && str[j][k]=='\0')
       {
         swap=1;
       }
       if(swap)
       {
         k=0;
         while(str[i][k]!='\0')
         {
           temp[k]=str[i][k];
           k++;
         }
         temp[k]='\0';
         k=0;
         while(str[j][k]!='\0')
         {
           str[i][k]=str[j][k];
           k++;
         }
         str[i][k]='\0';
         k=0;
         while(temp[k]!='\0')
         {
           str[j][k]=temp[k];
           k++;
         }
         str[j][k]='\0';
       }
     }
  }
  printf("\nStrings in alphabetical order:\n");
  for(int i=0;i<n;i++)
  {
    printf("%s\n",str[i]);
  }
}
