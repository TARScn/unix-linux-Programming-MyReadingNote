#include <stdio.h>
#include <curses.h>

int main()
{
	initscr();
	clear();
	for(int i=0;i<LINES;i++){
		move(i,i+1);
		if(i%2==1) standout();
		addstr("Hello");
		if(i%2==1) standend();
	}
	refresh();
	getch();
	endwin();
}
