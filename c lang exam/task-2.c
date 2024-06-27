#include <stdio.h>
#include <ctype.h>


int isConsonant(char ch) {
    ch = toupper(ch);
    if (ch >= 'A' && ch <= 'Z') {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return 0; 
        } else {
            return 1; 
        }
    }
    
}


void countConsonants(char sentence[]) {
    int consonantCount[26] = {0}; 
    int i = 0;
    while (sentence[i] != '\0') {
        if (isalpha(sentence[i])) { 
            if (isConsonant(sentence[i])) {
                int index = toupper(sentence[i]) - 'A'; 
                consonantCount[index]++;
            }
        }
        i++;
    }
		  printf("Occurrences of consonants:\n");
    for (int j = 0; j < 26; j++) {
        if (consonantCount[j] > 0) {
            printf("%c: %d\n", 'A' + j, consonantCount[j]);
        }
    }
}

int main() {
    char sentence[100];

  
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

  
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

   
    countConsonants(sentence);


}
