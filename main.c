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
void putablestone(){
	if(board[temprow][column]==8){
		putable=0;
	}else{
		putable=1;
	}
}
void input(){
	printf("please input row : ");
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
			break;
	}
	printf("\n");
	printf("please input column : ");
	scanf("%d",&column);
	putablestone();
	if(putable==1){
		input();
	}else{
		board[temprow][column]=Stone;
	}
}
	int main(int argc, char **argv)
{
	printf("Start Game");
	initPlayer();
	initStone();
	initBoard();
	while(1==1){
	showBoard();
	input();
	printf("\n");
	printf("showPlayer=%d",Player);
	printf("\n");
	printf("showStone=%d",Stone);
	printf("temprow=%d",temprow);
	printf("column=%d",column);
	}
	return 0;
}
