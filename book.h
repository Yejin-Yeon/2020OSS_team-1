#ifndef BOOK
#define BOOK

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Book 구조체 정의
typedef struct{
	//book의 제목 변수
	char name[30]; 
	//book의 가격 변수
	int cost; 
	//book의 페이지수 변수
	int page; 
	//book의 별점 변수
	int star; 
}Book; 

//각 함수의 기능을 실행하기 위한 메뉴를 제공하는 함수정의
int selectMenu(); 

//book을 생성해주는 함수정의
int createBook(Book *b); 

//book을 출력해주는 함수정의
void readBook(Book b); 

//book의 목록 전체를 출력해주는 함수정의
void listBook(Book *b, int count); 

//book을 수정할 수 있는 함수정의
int updateBook(Book *b); 

//book을 지우는 함수정의
int deleteBook(Book *b); 

#endif
