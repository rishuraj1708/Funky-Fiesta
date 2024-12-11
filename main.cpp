#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void showFunkyfiesta(int);

int main(void)
{
    char funkyfiestaWord[100], tempWord[100];
    char funkyfiestaOutput[100];
    int wrongTry = 6, matchFound = 0;
    int counter = 0, position = 0, winner, length, i;
    char alphabetFromUser;

    system("cls");
    printf("\n\n Enter any word in small case and hit >>ENTER<<");
    printf("\n\n\t Enter HERE ==>  ");
    scanf("%s", funkyfiestaWord);
    printf("\n\n Now give the COMPUTER to your friend and see if he/she can CRACK it!!!");
    printf("\n\n\tHIT >>ENTER<<");
    getchar();
    length = strlen(funkyfiestaWord);

    system("cls");

    printf("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the FUNKYFIESTA GAME!!!!!!!!!!!!!!!!!\n\n\n");
    printf("\n\n You will get 5 chances to guess the right word");
    printf("\n\n So help the Man and get...set...GO..!!");

    getchar();

    printf("\n\n\tHIT >>ENTER<< ");

    getchar();

    system("cls");

    printf("\n\t||===== ");
    printf("\n\t||    | ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");
    printf("\n\t||      ");

    printf("\n\n     The word has %d alphabets \n\n", length);
    for (i = 0; i < length; i++)
    {
        funkyfiestaOutput[i] = '_';
        funkyfiestaOutput[length] = '\0';
    }

    for (i = 0; i < length; i++)
    {
        printf(" ");
        printf("%c", funkyfiestaOutput[i]);
    }
    while (wrongTry != 0)
    {
        matchFound = 0;
        printf("\n\n   enter any alphabet from a to z and please use small case!!");
        printf("\n\n\t Enter HERE ==> ");

        fflush(stdin);

        scanf("%c", &alphabetFromUser);
        if (alphabetFromUser < 'a' || alphabetFromUser > 'z')
        {
            system("cls");
            printf("\n\n\t Wrong input TRY AGAIN ");
            matchFound = 2;
        }
        fflush(stdin);
        if (matchFound != 2)
        {
            for (counter = 0; counter < length; counter++)
            {
                if (alphabetFromUser == funkyfiestaWord[counter])
                {
                    matchFound = 1;
                }
            }

            if (matchFound == 0)
            {
                printf("\n\t :( You have %d tries left ", --wrongTry);
                getchar();
                showFunkyfiesta(wrongTry);
                getchar();
            }
            else
            {
                for (counter = 0; counter < length; counter++)
                {
                    matchFound = 0;
                    if (alphabetFromUser == funkyfiestaWord[counter])
                    {
                        position = counter;
                        matchFound = 1;
                    }
                    if (matchFound == 1)
                    {
                        for (i = 0; i < length; i++)
                        {
                            if (i == position)
                            {
                                funkyfiestaOutput[i] = alphabetFromUser;
                            }
                            else if (funkyfiestaOutput[i] >= 'a' && funkyfiestaOutput[i] <= 'z')
                            {
                                continue;
                            }
                            else
                            {
                                funkyfiestaOutput[i] = '_';
                            }
                        }
                        tempWord[position] = alphabetFromUser;
                        tempWord[length] = '\0';
                        winner = strcmp(tempWord, funkyfiestaWord);

                        if (winner == 0)
                        {
                            printf("\n\n\t \t YAHOO!!!!! You are the WINNER !!!!!");
                            printf("\n\n\t The Word was %s ", funkyfiestaWord);
                            printf("\n\n\n\n\t\tEASY HUH???\n\n");
                            getchar();
                            return 0;
                        }
                    }
                }
            }
        }

        printf("\n\n\t");
        for (i = 0; i < length; i++)
        {
            printf(" ");
            printf("%c", funkyfiestaOutput[i]);
        }

        getchar();
    }

    if (wrongTry <= 0)
    {
        printf("\n\n\t The Word was %s ", funkyfiestaWord);
        printf("\n\n\t The man is dead you IDIOT!!!!!");
        printf("\n\n\t Better luck next!!!");
    }
    getchar();
    return 0;
}

void showFunkyfiesta(int choice)
{
    switch (choice)
    {
    case 0:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/", '\\');
        printf("\n\t||    | ");
        printf("\n\t||   / %c", '\\');
        printf("\n\t||      ");
        break;
    case 1:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/", '\\');
        printf("\n\t||    | ");
        printf("\n\t||     %c", '\\');
        printf("\n\t||      ");
        break;
    case 2:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/", '\\');
        printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 3:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO/", '\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 4:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||   %cO ", '\\');
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    case 5:
        system("cls");
        printf("\n\t||===== ");
        printf("\n\t||    | ");
        printf("\n\t||    O ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        break;
    }
    return;
}
