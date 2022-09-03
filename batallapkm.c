/*********************
* Pokemon Battle 1.0
*
**********************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    //variables for points of healf
    //1st pokemon charmander
    //2nd pokemon squirtle
    int const PH1 = 50;
    int const PH2 = 50;
    int ph1, ph2;
    ph1 = PH1;
    ph2 = PH2;
    //variables for pokemon atacks
    //charmander atacks
    int const ember = 10;
    int const scratch = 5;
    int const metal_claw = 7;
    //squirtle atacks
    int const burble = 7;
    int const tacle = 5;
    int const blue_berry = 20;
    int const water_gun = 10;
    int atack=0;
    printf("Battle starts\n");
    //Battle starts
    while(1){
        srand(time(0));
        printf("Squirtles turn\n");
        atack = rand()%4+1;
        printf("%d\n", atack);
        printf("Press enter to continue...\n");
        getchar();
        //squirtles turn
        if(atack==1){
            printf("Squirtles uses burble\n");
            ph1-=burble;
            
            printf("charmander recibes damage\n");
        }else if(atack==2){
            printf("Squirtles uses tecle\n");
            ph1-=tacle;
            printf("charmander recibes damage\n");
        }else if(atack==3){
            printf("Squirtles uses buble_berry\n");
            ph1-=blue_berry;
            printf("charmander recibes damage\n");
        }else{
            printf("Squirtles uses water gun\n");
            ph1-=water_gun;
            printf("charmander recibes damage\n");
        }
        if(ph1<0)ph1=0;
        if(ph1==0)break;
        
        printf("Your turn\n");
        do{
            printf("Chose an option\n");
            printf("1)ember\n2)scratch\n3)metal claw\n4)sleep\n");
            fflush(stdin);
            scanf("%d", &atack);
        }while(atack!=1 && atack != 2 && atack != 3 && atack != 4);
        //squirtles turn
        if(atack==1){
            printf("Charmander uses ember\n");
            ph1-=ember;
            printf("Squiertle recibes damage\n");
        }else if(atack==2){
            printf("Charmander uses scratch\n");
            ph1-=scratch;
            printf("Squiertle recibes damage\n");
        }else if(atack==3){
            printf("Charmander uses metal claw\n");
            ph1-=metal_claw;
            printf("Squiertle recibes damage\n");
        }else{
            printf("Charmander uses sleep\n");
            printf("Nothing hapends\n");
        }
        if(ph1<0)ph1=0;
        getchar();

        if(ph2==0)break;

    }
    return 0;
}