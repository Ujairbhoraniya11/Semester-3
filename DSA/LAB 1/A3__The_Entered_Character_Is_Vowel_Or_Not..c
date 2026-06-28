// WAP to determine whether the entered character is vowel or not. 

#include <stdio.h>

int main() {
    char charecter;
    
    printf("Enter Charecter : ");
    scanf("%c",&charecter);
    
    if(charecter == 'A' || charecter == 'E' || charecter == 'I' || charecter == 'O' || charecter == 'U'){
        printf("Entered Character is Vowel");
    }else if(charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u'){
        printf("Entered Character is Vowel");
    }else {
        printf("Entered Character is Constant.");
    }
    
    return 0;
}