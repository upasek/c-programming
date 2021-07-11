#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[10] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char b[10] = { ' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice;
    int count = 0;
    int player ;
    char mark;
    int winval;

    while ( count < 9 ){
        system("clear");
        printf("\t\t  TIC TAC TOE \n\n");
        printf("\t\t    |    |    \n");
        printf("\t\t  %c |  %c | %c \n",a[1], a[2], a[3]);
        printf("\t\t____|____|____\n");
        printf("\t\t    |    |    \n");
        printf("\t\t  %c |  %c | %c \n",a[4], a[5], a[6]);
        printf("\t\t____|____|____ \n");
        printf("\t\t    |    |    \n");
        printf("\t\t  %c |  %c | %c \n",a[7], a[8], a[9]);
        printf("\t\t    |    |    \n\n\n");    
        if( count % 2 == 0){
            mark = 'x';
            player = 1;
        }     
        else {
            mark = 'o';
            player = 2;
        }
        printf("\tplayer %d Enter any num :",player);
        scanf("%d",&choice);
        if( choice < 1 || choice > 9 ){
            printf("choice number in between 1 to 9 .\n");
            continue;
        }
        if( a[choice] == 'x' || a[choice] == 'o'){
            printf("position already occupied .\n");   
            continue;
        }
        if( choice == 1 && a[1] == ' ' )
            a[1] = mark, b[1] = mark;
        else if( choice == 2 && a[2] == ' ')
            a[2] = mark, b[2] = mark;
        else if( choice == 3 && a[3] == ' ')
            a[3] = mark, b[3] = mark;
        else if( choice == 4 && a[4] == ' ')
            a[4] = mark, b[4] = mark;
        else if( choice == 5 && a[5] == ' ')
            a[5] = mark, b[5] = mark;
        else if( choice == 6 && a[6] == ' ')
            a[6] = mark, b[6] = mark;
        else if( choice == 7 && a[7] == ' ')
            a[7] = mark, b[7] = mark;
        else if( choice == 8 && a[8] == ' ')
            a[8] = mark, b[8] = mark;
        else if( choice == 9 && a[9] == ' ')
            a[9] = mark, b[9] = mark;

        if( ( b[1] == b[2] && b[2] == b[3] ) || ( b[4] == b[5] && b[5] == b[6] ) || ( b[7] == b[8] && b[8] == b[9] ) ||  ( b[1] == b[4] && b[4] == b[7] ) || ( b[2] == b[5] && b[5] == b[8] ) || ( b[3] == b[6] && b[6] == b[9] ) || ( b[1] == b[5] && b[5] == b[9] ) || (  b[3] == b[5] && b[5] == b[7] )  ){
            winval = 1;
            break;
        }
    /*    else if( a[4] == a[5] && a[5] == a[6] ){
            winval = 1;
            break;
        }

        else if( a[7] == a[8] && a[8] == a[9] ){
            winval = 1;
            break;
        }

        else if( a[1] == a[4] && a[4] == a[7] ){
            winval = 1;
            break;
        }
        else if( a[2] == a[5] && a[5] == a[8] ){
            winval = 1;
            break;
        }

        else if( a[3] == a[6] && a[6] == a[9] ){
            winval = 1;
            break;
        }
        else if( a[1] == a[5] && a[5] == a[9] ){
            winval = 1;
            break;
        }
        else if( a[3] == a[5] && a[5] == a[7] ){
            winval = 1;
            break;
        }*/
        count++;
    }
    system("clear");
    printf("\t\t  TIC TAC TOE \n\n");
    printf("\t\t    |    |    \n");
    printf("\t\t  %c |  %c | %c \n",a[1], a[2], a[3]);
    printf("\t\t____|____|____\n");
    printf("\t\t    |    |    \n");
    printf("\t\t  %c |  %c | %c \n",a[4], a[5], a[6]);
    printf("\t\t____|____|____ \n");
    printf("\t\t    |    |    \n");
    printf("\t\t  %c |  %c | %c \n",a[7], a[8], a[9]);
    printf("\t\t    |    |    \n");

    if( winval == 1 )
        printf("\tgame over \n\tplayer %d win the game . congo !\n\n",player);

    else if( count == 9 )
        printf("\n\t\tgame draw ..!\n\n");
    return 0;
}
