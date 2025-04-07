// Remove Duplicate Strings from a 2D Array

#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of strings you wish to input: ");
    scanf("%d", &n);
    char str[n][100];
    
    printf("Enter the strings:\n");
    for (int i=0; i<n; i++){
        scanf("%s", str[i]);
    }
    
    for (int i=0; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            int k = 0;
            while (str[i][k]==str[j][k] && str[i][k]!= '\0' && str[j][k]!= '\0'){
                k++;
            }
            if (str[i][k] == '\0' && str[j][k] == '\0') {
                str[j][0] = '\0';
            }
        }
    }

    printf("\nModified 2D String is:\n");
    for (int i=0; i<n; i++){
        if (str[i][0]!='\0'){
            puts(str[i]);
        }
    }
    return 0;
}
