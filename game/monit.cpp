#include "main.h"

void mainPtr(void);

int main(void) {
    CursorView(0);    //커서의 깜빡임을 숨겨준다.
    system("COLOR 0F");    //화면 배경을 검정, 글씨 색깔을 하얀색으로 설정해 준다.
    mainPtr();
    pause;
    return 0;
}

void mainPtr(void) {
	system("mode con: cols=106 lines=9");   //참고로 cols 2단위가 특수문자 또는 한글 1글자다.
	system("title 미로찾기 - 메인");
	puts("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	puts("■                                                                                                      ■");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	gotoxy(10, 4); printf("새로  하기");
	gotoxy(35, 4); printf("이어  하기");
	gotoxy(60, 4); printf("랭킹  보기");
	gotoxy(85, 4); printf("게임  종료");
	return;
}