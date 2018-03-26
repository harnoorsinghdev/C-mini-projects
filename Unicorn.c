#include "stdio.h"
#include <unistd.h>
#include <time.h>
#include <stdlib.h>



void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int main() {
     int response; 
  int r = rand() % 7;      // returns a pseudo-random integer
srand((unsigned)time(NULL));// should only be called once to genrate random object
   int i,k,enterButton;
   int lenOfTrack,correctLen,countOnDice,travelByUser=0,travelByComputer=0;
   printf("Welcome to Unicorn Racing Game \n\n"); //WELCOME USER
   
   printf("Enter the Length of Track:"); //PROMPT FOR LENGTH OF TRACK
   scanf("%d",&lenOfTrack);
   
   int GetValidIntegerOverZero(int LenOfTrack){  //Declaring LenOfTrack function
      do{
   if(LenOfTrack<0){
       printf("Error: must provide an integer > 0 \n");
   printf("Enter the Length of Track:"); //PROMPT FOR LENGTH OF TRACK AGAIN,SINCE LENGTH WAS < 0
   scanf("%d",&LenOfTrack);    
   }
      }
   while(LenOfTrack<0);
              return lenOfTrack;                              }
               
              int GenerateRandomDieValue(int r){
              

r=rand()%7; // random   

              
              }
  void DrawCharacters(int playerPosition,int computerPosition)
    {
     clearScreen();
      travelByUser+=playerPosition;
      
      travelByComputer+=computerPosition;
printf("You moved %d Positions\n",playerPosition);
      printf("Computer moved %d Positions\n",computerPosition);
      printf("travelByUser %d travelByComputer %d",travelByUser,travelByComputer );
     for(i=1;i<=correctLen;i++){ //DRAW TRACK
      printf("=");
      }
      
      printf("\n"); //Go on 2nd row
      for(k=1;k<=travelByUser;k++){     //MAKE playerPosition AHEAD
        printf(" ");
      }
      printf("*\n\n");
      
      for(k=1;k<=travelByComputer;k++){     //MAKE computerPosition AHEAD
        printf(" ");
      }
      printf("*\n\n");
      
     for(i=1;i<=correctLen;i++){ //DRAW TRACK
      printf("=");
      }
      
    }
 void rollUp(){ 
  printf("\nHit any button to roll");
      scanf("%d",&enterButton);
      if(enterButton=='\n'){
        countOnDice=GenerateRandomDieValue(r);
      } else{
        countOnDice=GenerateRandomDieValue(r);
        
      }
        DrawCharacters(GenerateRandomDieValue(r),GenerateRandomDieValue(r));
      
}
    
    void DrawTrack(int correctLen){
      clearScreen();
      
      //Console.Clear(); USE THIS TO CLEAR SCREEN IN C#
      for(i=1;i<=correctLen;i++){
      printf("=");
      }
      printf("\n*\n\n*\n\n"); //Drawing unicorns 
      
      
      for(i=1;i<=correctLen;i++){
      printf("=");
      }
      rollUp();
    }
    
 void resultDeclare(){
     clearScreen();
     if(travelByUser>travelByComputer){
         printf("PLAYER WINS!");
     }
     if(travelByComputer>travelByUser){
         printf("COMPUTER WINS");
     }
     if(travelByUser==travelByComputer){
         printf("ITS A TIE");
     }
 } 
    correctLen=GetValidIntegerOverZero(lenOfTrack); //calling LenOfTrack function and assigning correctLength to variable correctLen
DrawTrack(correctLen);

char GetValidCharacter(){
int res;
scanf("%d",&res);
response=res;
if(response!='1'||response!='0')
{
  printf("Error: Must Enter a '1' or '0'! Would you like to play again? %d",response);
  GetValidCharacter(); 
}
  else{return response;}
}

do{rollUp();
  
}
while((travelByUser<lenOfTrack)||(travelByComputer<lenOfTrack));
 resultDeclare(); 

if(GetValidCharacter()=='1'){
  main();//GO FOR NEW GAME
}
else{
  //function to show how many games you won
}
} //Call DrawTrack function to draw track

