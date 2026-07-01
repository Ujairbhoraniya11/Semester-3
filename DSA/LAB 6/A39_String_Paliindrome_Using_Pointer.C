// WAP to check whether the string is Palindrome or not using Pointer.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,j,n,fleg = 1;
    
    printf("Enter Size Of String : ");
    scanf("%d",&n);
    
    char *str = (char *) malloc(n * sizeof(char));
    
    printf("Enter String : ");
    scanf("%s",str);
    
    for(i=0; i<n/2; i++){
        if( *(str+i) != *(str+(n-i-1)) ){
            printf("String is Not Palindrome.");
            fleg = 0;
            break;
        }
    }
    if(fleg == 1){
        printf("String is Palindrome.");
    }
    
    
    free(str);
    
    return 0;
}