
#include <stdio.h>
typedef struct square {
	int mines_around;
	bool open;
	bool marked;
};

square board[10][8];

//поставя 10 девятки на случайни места в двумерния масив, в полето mines_around
//(стойността девет в означава, че на това място има мина)
void put_mines()
{
}

//записва в int mines_around на всяка клетка от масива колко девятки(мини) има в клетките наоколо
void count_mines_around()
{
}

//променя bool archived във вярно ако open е невярно
void mark(int x, int y)
{
	
}

//променя bool open ако е невярно във вярно; ако при смяната mines_around e девятка(мина) играта свършва
//ако разкритата клетка съдържа нула мини (mines_around == 0), рекурсивно разкрива всички околни клетки
//връща true, ако играта трябва да свърши (уцелена е мина, виж по-горе)
bool dig(int x, int y)
{
}

//проверява дали всяка клетка с девятка в нея има и bool marked true; ако това е вярно за всички клетки с 9, играта свършва като победа
bool check_win()
{
}
// извеждане на полето като принтира точка за bool open=false  и принтира INT mines_around за bool open=true
void draw_board()
{
}

// пита играча за следващ ход и параметри за хода
/*struct move { char action; int x; int y; }  next_move()
{
}*/

int main()
{
	put_mines();
	count_mines_around();
	draw_board();
	while (check_win() == false) 
	{
		struct move do_move = next_move();
		if (do_move.action == dig)
			if (dig(do_move.x, do_move.y) == true)
			{
				printf("you lose");
					break;
			}
		else
			mark(do_move.x, do_move.y);

		draw_board();
	
	}
	printf("you win");
}