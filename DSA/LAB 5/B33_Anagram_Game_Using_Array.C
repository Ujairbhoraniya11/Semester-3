// Design anagram game using array.
//  Allow a user to enter N words and store it in an array.
//  Generate a random number between 0 to N-1.
//  Based on the random number generated display the word stored at that
// index of an array and allow user to enter its anagram.
//  Check whether the word entered by the user is an anagram of displayed
// number or not and display an appropriate message.
//  Given a word A and word B. B is said to be an anagram of A if and only if the
// characters present in B is same as characters present in A, irrespective of
// their sequence. For ex: “LISTEN” == “SILENT”

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> // for srand(time(NULL))

int main() {
    int n = 5,i,j;
    int random,rwSize,anagramSize;
    
    char anagram[30];
    char rw[30];
    char words[n][30];
    
    // InputStrings 
    for(i=0; i<n; i++){
        printf("Enter String : ");
        scanf("%s",words[i]);
    }
    
    
    
    // srand(time(NULL)); // again run then gnerate same index.
    random = rand() % n;
    
    
    // Printr number which index generate by random().
    strcpy(rw,words[random]); // random Words.
    printf("Random Words = %s\n", words[random]);
    
    
    // Scann Anagram .
    printf("Enter Anagram : ");
    scanf("%s",anagram);
    
    
    // Sort both Words.
    rwSize = strlen(rw);
    anagramSize = strlen(anagram);
    for(i=0; i<rwSize; i++){
        for(j=0; j<rwSize -i-1; j++){
            if(rw[j] > rw[j+1]){
                // swap.
                char temp = rw[j];
                rw[j] = rw[j+1];
                rw[j+1] = temp;
            }
        }
    }
    for(i=0; i<anagramSize; i++){
        for(j=0; j<anagramSize -i-1; j++){
            if(anagram[j] > anagram[j+1]){
                // swap.
                char temp = anagram[j];
                anagram[j] = anagram[j+1];
                anagram[j+1] = temp;
            }
        }
    }
    
    // printf("Srted : %s")
    
    if(strcmp(rw,anagram) == 0){
        printf("Enterd Word is Anagram.");
    }else {
        printf("Enterd Word is not Anagram.");
    }
    
    
    return 0;
}