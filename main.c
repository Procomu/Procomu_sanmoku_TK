#include <stdio.h>

int Player;
int Stone;
int board[5][5];
char row;
int tempRow;
int column=-1;
int putable;
int judge;
int tempStone;
void initPlayer(){
	 Player=0;
}
void initStone(){
	 Stone=1;
}
void initBoard(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==0||i==4||j==0||j==4){
				board[i][j]=2;
			}else{
				board[i][j]=8;
			}
		}
	}		
}
void showBoard(){
	for(int i=0;i<5;i++){
		printf("\n");
			for(int j=0;j<5;j++){
				printf("%d",board[i][j]);
			}
	}
	printf("\n");
}

// comment by aira aziawa

void putablestone(){
	if(board[tempRow][column]==8){
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
			tempRow=0;
			break;
		case'b':
			tempRow=1;
			break;
		case'c':
			tempRow=2;
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
void checkWin();
	int i=tempRow;
	int j=column;
	if(board[--i][j]=Stone){
		i=i-1;
		j=j;
		//????????????????????????
		else if (board[--i][++j]=Stone){
			i=i-1;
			j=j+1;
			//???????????????????????
			else if(board[i][++j]=Stone){
				i=i;
				j=j+1;
				//??????????????????????
				else if(board[++i][++j]=Stone){
				i=i+1;
				j=j+1;
				//??????????????????????
					else if(board[++i][j]=Stone){
					i=i+1;
					j=j;
					//??????????????????????
						else if(board[++i][j--]=Stone){
						i=i+1;
						j=j-1;
						//??????????????????????
							else if(board[i][--j]=Stone){
							i=i;
							j=j-1;
							//??????????????????????
								else if(board[--i][--j]=Stone){
								i=i-1;
								j=j-1;
								//??????????????????????
			} 
		}
			
			break
		}
	}

void changeStone(){
	printf("Stone change");
	printf("\n");
	Stone=Stone*-1;
}
void changePlayer(){
	printf("Player change");
	printf("\n");
	if (Stone==1){Player=0;}
	else if(Stone==-1){Player=1;}
	printf("\n");
	printf("Player=%d",Player);
}
 		
int main(int argc, char **argv)
{
	printf("Start Game");
	printf("\n");
	initPlayer();
	initStone();
	initBoard();
	printf("Turn start with Player=%d",Player);
	while(1==1){
		showBoard();
		inputRow();
		inputColumn();
		putablestone();
		if(putable==0){
			board[tempRow][column]=Stone;
		}
		changeStone();
		changePlayer();
	}
	printf("\n");
	printf("showPlayer=%d",Player);
	printf("\n");
	printf("showStone=%d",Stone);
	printf("tempRow=%d",tempRow);
	printf("column=%d",column);
	return 0;
}
