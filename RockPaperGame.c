#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int main(){
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tWelcome to Rock Paper Scissor Game!\n\n");
    printf("\t\t\t\t\t\t\t\t\tHi there, I am Microbot! Do you wanna play Rock Paper Scissor Game with me\? Let\'s see, who becomes winner!\n\n");
    printf("If you're interested to play a match. Then, \"Press 1\"\n\n");
    printf("Otherwise! If you're not interested to play a match. Then,\"Press 2\"\n\n");
    printf("Selection:\t");

int user_input1;
    scanf("%d",&user_input1);
switch(user_input1){
 case 2:
    printf("\n\nOkay!Have a nice day!");
    break;
 case 1:
    printf("\n\nDo you wanna know details about this game's rules ?\n\n" );
    printf("1.Yeah! Tell me details.\n\n");
    printf("2.Nope! I knew it before. Just start the game.\n\n");
    printf("Selection:\t");
int user_input2;
    scanf("%d",&user_input2);
if(user_input2==1){
    printf("\n\nIn this game, you have to choose ROCK, PAPER or SCISSOR. SCISSOR will cut PAPER, ROCK will break SICSSOR and PAPER will cover the ROCK which for PAPER will win here. You have three option to choose. If you wanna defeat Microbot then you have to exist with your chosen option. In 10 rounds, the one who will able make to high score. He will become winner.(Fixed Rounds and Scoreboard features is coming soon.)");
    printf("\n\nAre you ready ?\n\n");
    printf("\n1.Yeah! Let\'s begin !\n");
    printf("\n2.No! Not so interested !\n\n");
    printf("\n\nSelection:\t");
int a;
    scanf("%d",&a);
switch(a){
  case 2:
    printf("Okay! Best wishes for you.");
    break;
  case 1:
    printf("\nGAME STRATED\n\n");

int player_throw = 0;
int microbot_throw =0;
bool draw = false;

int infinity;
while(infinity=1){
  do
   {
    printf("\nChoose any option from below:\n\n\n");
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSORS\n");
    printf("Selection:\t");

    scanf("%d",&player_throw);
    microbot_throw = (rand()%3)+1;

     if (microbot_throw==ROCK)
     printf("\nMicrobot throws ROCK!\n");
     else if(microbot_throw==PAPER)
     printf("\nMicrobot throws PAPER!\n");
     else if (microbot_throw==SCISSORS)
     printf("\nMicrobot throws SCISSOR!\n");

    draw=false;

if(player_throw==ROCK && microbot_throw==SCISSORS)
    printf("\n\nYour ROCK has broken my SCISSOR. You have won. I am so mad now!!\n");
else if(player_throw==ROCK && microbot_throw==PAPER)
    printf("\n\nMy PAPER has covered your ROCK. You have defeated. Huuuu! I won.\n");
else if(player_throw==SCISSORS && microbot_throw==PAPER)
    printf("\n\nYour SCISSOR has cut my PAPER. You have won.I am so mad now!!\n");
else if(player_throw==SCISSORS && microbot_throw==ROCK)
    printf("\n\nMy ROCK has broken your SCISSOR. You have defeated. Huuuu! I won.\n");
else if(player_throw==PAPER && microbot_throw==ROCK)
    printf("\n\nYour PAPER has covered my ROCK. You have won. Oh no! I lost. \n");
else if(player_throw==PAPER && microbot_throw==SCISSORS)
    printf("\n\nHurray! My SCISSOR has cut your PAPER. You have defeated! I won. You can\'t defeat Microbot. Hahaha\n");
else{
    printf("I guess it's a tie. Let\'s, play again.\n\n");
    draw=true;
      }
}while(draw);
 }
    }
}else{
    printf("Then,let's get started!\n\n");
int player_throw = 0;
int microbot_throw =0;
bool draw= false;

int infinity;
while(infinity=1){
  do
   {
    printf("\nChoose any option from below:\n\n\n");
    printf("1.ROCK\n");
    printf("2.PAPER\n");
    printf("3.SCISSORS\n");
    printf("Selection:\t");

    scanf("%d",&player_throw);
    microbot_throw = (rand()%3)+1;

     if (microbot_throw==ROCK)
     printf("\nMicrobot throws ROCK!\n");
     else if(microbot_throw==PAPER)
     printf("\nMicrobot throws PAPER!\n");
     else if (microbot_throw==SCISSORS)
     printf("\nMicrobot throws SCISSOR!\n");
     draw=false;

if(player_throw==ROCK && microbot_throw==SCISSORS)
    printf("\n\nYour ROCK has broken my SCISSOR. You have won. I am so mad now!!\n");
else if(player_throw==ROCK && microbot_throw==PAPER)
    printf("\n\nMy PAPER has covered your ROCK01/8. You have defeated. Huuuu! I won.\n");
else if(player_throw==SCISSORS && microbot_throw==PAPER)
    printf("\n\nYour SCISSOR has cut my PAPER. You have won.I am so mad now!!\n");
else if(player_throw==SCISSORS && microbot_throw==ROCK)
    printf("\n\nMy ROCK has broken your SCISSOR. You have defeated. Huuuu! I won.\n");
else if(player_throw==PAPER && microbot_throw==ROCK)
    printf("\n\nYour PAPER has covered my ROCK.\tYou have won. Oh no! I lost. \n");
else if(player_throw==PAPER && microbot_throw==SCISSORS)
    printf("\n\nHurray! My SCISSOR has cut your PAPER. You have defeated! I won. You can\'t defeat Microbot. Hahaha\n");
else{
    printf("I guess it's a tie. Let\'s, play again.\n\n");
    draw=true;
}
 }while(draw);

  }
   }
     }
return 0;
}
