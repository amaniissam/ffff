#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>

int main(void)
{
    system("color E0");
    int note_number = 1;
    int k;
    string notes[note_number];
    
    int tour = 0;
    string txt[note_number];

    while (true) 
    {
        k = 1;
        int menu = get_int("1-Creat new note.\n2-Show my notes.\n3-Quit.\n");
        system("cls");
        if (menu == 1)
        {
            notes[note_number] = get_string("Enter name to your note:  ");
            system("cls");

            txt[note_number] = get_string("%s:(Type your note here) \n\n ", notes[note_number]);
            system("cls");
            tour++;
            note_number++; 
        }
        else if (menu == 2)
        {
            if (tour == 0)
            {
                printf("You don't have any not yet.\n\n\n\n\n\n\n\n");
                get_string("Press Enter to return to the menu. ");
                system("cls");
            }
            else if (tour > 0)
            {
                while (k < note_number)
                {   
                    printf("%i-%s\n", k, notes[k]);
                    k++;
                }  
                printf("\n0-menu page\n\n") ;
                int choise_txt = get_int(""); 
                if (choise_txt == 0)
                {
                    system("cls");
                }
                else
                {
                    system("cls");      
                    printf("The name: \"%s\"\n\nThe note:\n   %s\n\n\n\n\n\n\n\n", notes[choise_txt], txt[choise_txt]);
                    get_string("Press Enter to return to the menu. ");
                    system("cls");                    
                }
            }
        }
        if (menu == 3)
        {
            break;
        }
    }
}