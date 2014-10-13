#include <stdio.h>

int Player;
int Stone;
int board[3][3];
char row;
int temprow;
int column;
int putable;
int judge;
void initPlayer(){
	 Player=0;
}
void initStone(){
	 Stone=1;
}
void initBoard(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			board[i][j]=8;
		}
	}
}
void showBoard(){
	for(int i=0;i<3;i++){
		printf("\n");
			for(int j=0;j<3;j++){
				printf("%d",board[i][j]);
			}
	}
	printf("\n");
}

// comment by aira aziawa

void putablestone(){
	if(board[temprow][column]==8){
		putable=0;
	}else{
		putable=1;
	}
}
void inputRow(){
	printf("please input row : ");
	fflush(stdin);
	row=getchar();
	switch(row){
		case'a':
			temprow=0;
			break;
		case'b':
			temprow=1;
			break;
		case'c':
			temprow=2;
			break;
		default:
		printf("please retry");
		inputRow();
			break;
	}
	printf("\n");
}
void inputColumn(){
	printf("please input column : ");
	fflush(stdin);
	scanf("%d",&column);
	switch(column){
		case 0:
		case 1:
		case 2:
			break;
		default:
		printf("please retry");
		inputColumn();
			break;
	}
	printf("\n");
} 		
int main(int argc, char **argv)
{
	printf("Start Game");
	initPlayer();
	initStone();
	initBoard();
	while(1==1){
		showBoard();
		inputRow();
		inputColumn();
		putablestone();
		if(putable==0){
			board[temprow][column]=Stone;
		}
	}
	printf("\n");
	printf("showPlayer=%d",Player);
	printf("\n");
	printf("showStone=%d",Stone);
	printf("temprow=%d",temprow);
	printf("column=%d",column);
	return 0;
}
