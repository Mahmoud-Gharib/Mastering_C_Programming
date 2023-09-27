#ifndef _SCHOOL_H_
#define _SCHOOL_H_

enum services
{
 ADD_NEW_STUDENT    =	1 ,
 VIEW_ALL_STUDENTS	=   2 ,
 DELETE_STUDENT_	= 	3 ,
 UPDATE_STUDENT  	=   4 ,
 RANK				=   5 ,
 STUDENTS_SCORE		=   6 ,
 EXIST			  	=   7
};

typedef struct student
{
	u8 Name_Student[50];
	u8 Address_Student[50];
	u32 year,day,month;
	u32 ID_Student;
	u32 Phone_Student;
	u32 computer_science;
	struct student * pNext;
	struct student * pPrev;	
}Student_info;

typedef struct myList
{
	Student_info * pHead;
	Student_info * pTail;
	u32 size;
}List;

void MAIN_MENU(void);
void Create(List* pl );
void NEW_STUDENT(List* pl);
void STUDENT_LIST(List* pl);
void DELETE_STUDENT(List* pl,u8 ID_Student);
void STUDENT_EDIT(List* pl,u8 ID_Student);
void RANK_STUDENT(List* pl);
void STUDENT_SCORE(List* pl);

#endif