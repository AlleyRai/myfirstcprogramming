#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 40
#define HEIGHT 20

int score = 0;

typedef struct {
    int x, y;
} coordinate;

typedef struct {
    coordinate body[WIDTH*HEIGHT];
    int length;
    int direction;
} snake;

typedef struct {
    coordinate position;
} food;

void init_screen() {
    initscr();
    cbreak();
    noecho();
    curs_set(0);
    keypad(stdscr, TRUE);
    timeout(100);
}

void draw_border() {
    int i, j;
    for(i=0; i<HEIGHT+2; i++) {
        for(j=0; j<WIDTH+2; j++) {
            if(i==0 || i==HEIGHT+1 || j==0 || j==WIDTH+1) {
                mvprintw(i, j, "#");
            }
        }
    }
}

void draw_food(food *f) {
    mvprintw(f->position.y, f->position.x, "o");
}

void draw_snake(snake *s) {
    int i;
    for(i=0; i<s->length; i++) {
        mvprintw(s->body[i].y, s->body[i].x, "x");
    }
}

void init_snake(snake *s) {
    s->length = 3;
    s->direction = KEY_RIGHT;
    s->body[0].x = WIDTH/2;
    s->body[0].y = HEIGHT/2;
    s->body[1].x = s->body[0].x-1;
    s->body[1].y = s->body[0].y;
    s->body[2].x = s->body[1].x-1;
    s->body[2].y = s->body[1].y;
}

void update_snake(snake *s) {
    int i;
    for(i=s->length-1; i>0; i--) {
        s->body[i].x = s->body[i-1].x;
        s->body[i].y = s->body[i-1].y;
    }
    switch(s->direction) {
        case KEY_LEFT:
            s->body[0].x--;
            break;
        case KEY_RIGHT:
            s->body[0].x++;
            break;
        case KEY_UP:
            s->body[0].y--;
            break;
        case KEY_DOWN:
            s->body[0].y++;
            break;
    }
}

void update_food(food *f) {
    f->position.x = rand() % WIDTH + 1;
   

