//
// Created by chris on 12-3-2024.
//
#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?: ",
                             "3. What is the predecessor of C?: "};
    char options[][100] = {  "A. 1969", "B. 1972", "C. 1975", "D. 1999",
                             "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc B",
                             "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B','A','B'};
    int numberOfQuestions = sizeof(questions)/ sizeof(questions[0]);
    
    char guess;
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; ++i) {
        printf("\n********************\n%s\nn********************\n",questions[i]);

        for (int j = (i*4); j < (i*4)+4; ++j) {
            printf("%s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        //scanf("%c"); //clears \n from input buffer
        // Clearing the input buffer
        while ((getchar()) != '\n');

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("CORRECT!\n");
            score++;
        } else{
            printf("WRONG!\n");
        }
    }
    printf("FINAL SCORE: %d/%d", score, numberOfQuestions);

    return 0;
}