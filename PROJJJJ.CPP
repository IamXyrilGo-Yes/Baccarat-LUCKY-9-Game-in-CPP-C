#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <time.h>
#define BET_MIN 9
int main()
{
      void title();
      void ins();
      void credits();
      char ch;
      do
      {
	start:
	clrscr();
	title();

	printf("\t\t\t\t      /\\_/\\\n");
	printf("\t\t\t\t     (  ^_^)\n");
	printf("\t\t\t\t     (     )\n");
	printf("\t\t\t\t      |   | \n");
	printf("\t\t\t\t      |   | \n");
	printf("\t\t\t\t     (__)__)\n");
	printf("\n\t\t\t\t  Press P: PLAY \n\t\t\t\t  Press I: INSTRUCTIONS \n\t\t\t\t  Press C: Credits \n\t\t\t\t  Press Q: QUIT\n\n ");
	printf("\n\n\n\n\t\t\t\tXyril Go Incorporation");
		ch=getch(); 	if(ch=='q'||ch=='Q') return 0;
		switch(ch)
		{
		case 'p':
		case 'P':
			clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
			delay(500);
			printf("..");
			delay(500);
			printf("..");
			delay(500);
			printf("...");
			clrscr();
				srand(time(0));
				int sum = 0, sum1 = 0, sum2, sum3, total = 0, total1 = 0;
				int balance = 1000, bet = 0, curbal = 0;
				int choose = 0;
				curbal = balance;
				do{
				printf("\n\t\t\t\t $ LUCKY 9 $");
				printf("\n\t\t\t\t ___________\n");
				printf("\n\t(Note: #11 is Jack, #12 is Queen and #13 is King. They value to 0)");
				printf("\n\nBalance: %d",curbal);
				betting:
				printf("\nPlace Bet: $ ");
				scanf("%d", &bet);
				if (bet > curbal){
					printf("Dealer: You don't have more money than you have. Bet Again");
					goto betting;
				}else if(bet <= BET_MIN){
					printf("Dealer: You can't bet lower than $10. Bet Again");
					goto betting;
				}else {
					printf("Dealer: Good Bet!");
				}
				printf("\n\n\t\t\t  Dealer is Dealing the Cards");
				delay(500);
				printf("..");
				delay(1000);
				printf("..\n");
				for (int i = 0; i<1; i++){
					int num = rand()%13+1;
						sum=num;
				}
				for (int a = 0; a<1; a++);{
					int num2 = rand()%13+1;
						sum2=num2;
				}
				printf("\nYour 1st Card: %d", sum);
				printf("\nBankers 1st Card: %d", sum2);
				printf("\n\nDealer: Press 1 to bet on Yourself--Press 2 for Banker--Press 3 for Tie");
				printf("\nBet on: ");

				scanf("%d", &choose);
				for(int j = 0; j<1; j++)
				{
					int num1 = rand()%13+1;
						sum1=num1;
				}
				for(int b = 0; b<1; b++)
				{
					int num3 = rand()%13+1;
						sum3=num3;
				}
				delay(1000);
				printf("\nYour Cards: %d and %d",sum,sum1);
				printf("\nBanker's Cards: %d and %d",sum2,sum3);
				if (sum == 11){
					sum = 0;
				}else if (sum == 12){
					sum = 0;
				}else if (sum == 13){
					sum = 0;
				}
				if (sum1 == 11){
					sum1 = 0;
				}else if (sum1 == 12){
					sum1 = 0;
				}else if (sum1 == 13){
					sum1 = 0;
				}
				if (sum2 == 11){
					sum2 = 0;
				}else if (sum2 == 12){
					sum2 = 0;
				}else if (sum2 == 13){
					sum2 = 0;
				}
				if (sum3 == 11){
					sum3 = 0;
				}else if (sum3 == 12){
					sum3 = 0;
				}else if (sum3 == 13){
					sum3 = 0;
				}
				total = sum + sum1;
				total1 = sum2 + sum3;
				if (total == 10){
					total = 0;
				}else if (total == 11){
					total = 1;
				}else if (total == 12){
					total = 2;
				}else if (total == 13){
					total = 3;
				}else if (total == 14){
					total = 4;
				}else if (total == 15){
					total = 5;
				}else if (total == 16){
					total = 6;
				}else if (total == 17){
					total = 7;
				}else if (total == 18){
					total = 8;
				}else if (total == 19){
					total = 9;
				}else if (total == 20){
					total = 0;
				}else if (total == 21){
					total = 0;
				}else if (total == 22){
					total = 0;
				}else if (total == 23){
					total = 0;
				}else if (total == 24){
					total = 0;
				}else if (total == 25){
					total = 0;
				}else if (total == 26){
					total = 0;
				}
				if (total1 == 10){
					total1 = 0;
				}else if (total1 == 11){
					total1 = 1;
				}else if (total1 == 12){
					total1 = 2;
				}else if (total1 == 13){
					total1 = 3;
				}else if (total1 == 14){
					total1 = 4;
				}else if (total1 == 15){
					total1 = 5;
				}else if (total1 == 16){
					total1 = 6;
				}else if (total1 == 17){
					total1 = 7;
				}else if (total1 == 18){
					total1 = 8;
				}else if (total1 == 19){
					total1 = 9;
				}else if (total1 == 20){
					total1 = 0;
				}else if (total1 == 21){
					total1 = 0;
				}else if (total1 == 22){
					total1 = 0;
				}else if (total1 == 23){
					total1 = 0;
				}else if (total1 == 24){
					total1 = 0;
				}else if (total1 == 25){
					total1 = 0;
				}else if (total1 == 26){
					total1 = 0;
				}
				delay(2000);
				printf("\nPlayer's Total: %d", total);
				printf("\nBanker's Total: %d\n", total1);
				if (choose == 1){
						if (total == 9 && total1 == 9){
							delay(1000);
							printf("\nYOU LOSE!");
							curbal = curbal-bet;
						}else if(total>total1){
							delay(1000);
							printf("\nYOU WON");
							curbal = curbal+bet;
						}else if(total<total1){
							delay(1000);
							printf("\nYOU LOSE");
							curbal = curbal-bet;
						}else if(total==total1){
							delay(1000);
							printf("\nYOU LOSE!");
							curbal = curbal-bet;
						}
				}
				else if (choose == 2){
						if (total == 9 && total1 == 9){
							delay(1000);
							printf("\nIT'S A TIE!");
							curbal = curbal-bet;
						}else if(total>total1){
							delay(1000);
							printf("\nYOU LOSE");
							curbal = curbal-bet;
						}else if(total<total1){
							delay(1000);
							printf("\nYOU WON");
							curbal = curbal+bet;
						}else if(total==total1){
							delay(1000);
							printf("\nIT'S A TIE!");
							curbal = curbal-bet;
						}
				}
				else if (choose == 3){
						if (total == 9 && total1 == 9){
							delay(1000);
							printf("\nYOU WON!");
							curbal = curbal+bet;
						}else if(total>total1){
							delay(1000);
							printf("\nYOU LOSE");
							curbal = curbal-bet;
						}else if(total<total1){
							delay(1000);
							printf("\nYOU LOSE");
							curbal = curbal-bet;
						}else if(total==total1){
							delay(1000);
							printf("\nYOU WON");
							curbal = curbal+bet;
						}
				}
				printf("\n\nCurrent Balance: %d", curbal);
				int choose1 = 0;
				printf("\n\n\n\t\tPress 1: To go to Main Menu--Press 2 to Continue");
				printf("\n\t\t\t\tChoice:");
				scanf("%d\n\n", &choose1);
				if (choose1 == 1){
					goto start;
				}else if(choose1 == 2){
					printf("\nROCK ON");
				}else{
					printf("\nInvalid Selection");
				}
				}while(curbal!=0);
			getch();
			break;

		case 'i':
		case 'I':
			ins();
			break;
		case 'c':
		case 'C':
			credits();
			break;
		}
      }
      while(ch);
      getch();
      return 0;
      clrscr();
}

void ins(){
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t LOADING ");
	delay(500);
	printf("..");
	delay(500);
	printf("..");
	delay(500);
	printf("...");
	clrscr();
	printf("\n\n\n\t\t\t\t INSTRUCTIONS \n\t\t");
	printf("\t\t--------------\n\n");
	printf("\tLucky 9 or Baccarat is a type of game where the main purpose is to");
	printf("\n\t\t         Get the number 9 or close to it");
	printf("\n\t\t  There are 3 types of individuals in this game.");
	printf("\n\t\t     The banker, The Player and The Dealer");
	printf("\n\t\t    And there are also 3 ways to win this game:");
	printf("\n\n1. To bet on yourself to get 9 or close to it.");
	printf("\n2. To bet on The banker to get 9 or closer.");
	printf("\n3. Or to bet on tie.");
	printf("\n\n      There are also the Jack, Queen and King which are number 11,12 and 13");
	printf("\n\t\t\t  They're fixed value is 0.");
	printf("\n\n\n\t\t\t\t    ENJOY!");
	delay(12000);
	clrscr();
}
void title(){
   printf("\t\t   ___________________________________________ \n");
   printf("\t\t  |                                           |\n");
   printf("\t\t  |  #      #   #   ####  #  # #   #   $$$$$  |\n");
   printf("\t\t  |  #      #   #  #      # #  #   #   $   $  |\n");
   printf("\t\t  |  #      #   #  #      ##    ###    $$$$$  |\n");
   printf("\t\t  |  #      #   #  #      # #    #         $  |\n");
   printf("\t\t  |   ####   ###    ####  #  #   #     $$$$   |\n");
   printf("\t\t  |             BACCARAT CARD GAME            |\n");
   printf("\t\t  |___________________________________________|\n");
}
void credits(){
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCULMINATING ACTIVITY\n\t\t\t\t    LUCKY 9 ON C");
	delay(2000);
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tMADE BY\n\t\t\t              XYRIL GARRET L. GO");
	delay(2000);
	clrscr();
	printf("\n\n\n\n\n\n\n\n\n\n\nThis Game Was Made by Myself with Pure Love");
	delay(2000);
	clrscr();
}