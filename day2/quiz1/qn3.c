#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int len = strlen(sentence);
    int spaceCount = 0,i,j;

    for (i = 0; i < len; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        }
    }


    int additionalSpaces = screenLength - len + spaceCount;

    
    int spacesBetweenWords = additionalSpaces / spaceCount;

    
    int remainingSpaces = additionalSpaces % spaceCount;

   
    for (i = 0; i < len; i++) {
        if (sentence[i] == ' ') {
            
            for (j = 0; j < spacesBetweenWords; j++) {
                printf("*");
            }

           
            if (remainingSpaces > 0) {
                printf("*");
                remainingSpaces--;
            }
        } else {
          
            printf("%c", sentence[i]);
        }
    }

    printf("\n");
}

int main() {
    
    char sentence[] = "Welcome to Zoho Corporation";
    int screenLength = 34;
    justifySentence(sentence, screenLength);

    return 0;
}

