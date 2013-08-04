#include <ncurses.h>

int main()
{
	initscr();
	printw("Hello, nCurses World");
	refresh();
	getch();
	endwin();
	return 0;
}
