#pragma once

/* ▼▼▼▼▼ 헤더 선언 ▼▼▼▼▼ */
#include <stdio.h>
#include <windows.h>
#include <stralign.h>
#include <stdlib.h>
/* ▲▲▲▲▲ 헤더 선언 ▲▲▲▲▲ */

/* ▼▼▼▼▼ define 선언 ▼▼▼▼▼ */
#define pause system("pause > nul")    //그냥 내가 많이 쓰는 커맨드를 줄여준 것이다.
#define cls system("cls")    //이것 또한
/* ▲▲▲▲▲ define 선언 ▲▲▲▲▲ */

/* ▼▼▼▼▼ 함수 선언 ▼▼▼▼▼ */
void SetColor(int color);
void CursorView(char show);
void gotoxy(int x, int y);
/* ▲▲▲▲▲ 함수 선언 ▲▲▲▲▲ */