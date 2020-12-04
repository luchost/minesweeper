#include <stdio.h>
#include <stdbool.h>

struct square {
	int mines_around;
	bool open;
	bool marked;
};

struct square board[10][8];

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

//извеждане на полето като принтира точка за bool open=false и принтира INT mines_around за bool open=true
void draw_board()
{
}

//пита играча за три числа,първото е между едно   и две като ако е едно bool mark е true,а за две bool mark е false,следващите две числа са кординатите на хода като първото се записва в x,a второто в y
//bool mark true  означава маркиране на клетка ,а bool mark false e разкриване,
void ask_next_move(bool *mark, int *x, int *y)
{
}

int main()
{
	put_mines();
	count_mines_around();
	draw_board();
	while (!check_win())
	{
		bool do_mark;
		int x, y;
		ask_next_move(&do_mark, &x, &y);
		if (do_mark)
			mark(x, y);
		else
			if (dig(x, y))
			{
				printf("you lose");
				break;
			}
		draw_board();
	}
	printf("you win");
}