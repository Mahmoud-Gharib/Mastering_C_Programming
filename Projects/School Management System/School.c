#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

static bool isEmpty(List* pl);
static Student_info* searchBook(List* pl,u8 ID_Student);

void MAIN_MENU(void)
{
	u8 Choice,ID_Student;
	List Student;
	Create(&Student);
	printf("=====================================================\n");
	printf("===================  WELCOME SIR  ===================\n");
	printf("=====================================================\n");
	printf("\n");
    printf("\n");
	printf("	**************************************	\n");
	printf("	*****  School Management System  *****	\n");
	printf("	*****       MAHMOUD GHARIB       *****	\n");
	printf("	**************************************	\n");
	printf("\n");
	while(Choice != EXIST)
	{
		printf("\t---------------------------------------------\n");
		printf("\tchoose one of the following options:\n");
		printf("\tTo add a New Student            Enter '1'\n"); 
		printf("\tTo view all Students            Enter '2'\n"); 
		printf("\tTo Delete a  Student            Enter '3'\n"); 
		printf("\tTo Update Student               Enter '4'\n"); 
		printf("\tTo Rank Student                 Enter '5'\n"); 
		printf("\tTo Student Score                Enter '6'\n");
		printf("\tTo Exist the School App         Enter '7'\n"); 
		printf("\t---------------------------------------------\n");
		printf("---> Your choice is :");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case ADD_NEW_STUDENT   :  
				NEW_STUDENT(&Student);  
				break;	
			case VIEW_ALL_STUDENTS :  
				STUDENT_LIST(&Student);
				break;
			case DELETE_STUDENT_ : 
				printf("Enter The ID of Student that you want to delete : ");
				scanf("%d",&ID_Student);			
				DELETE_STUDENT(&Student,ID_Student);
				break;
			case UPDATE_STUDENT : 
				printf("Enter The ID of Student that you want to Update : ");
				scanf("%d",&ID_Student);			
				STUDENT_EDIT(&Student,ID_Student);
				break;	
			case RANK : 		
				RANK_STUDENT(&Student);
				break;					
			case STUDENTS_SCORE : 		
				STUDENT_SCORE(&Student);
				break;					
			case EXIST : 
				printf("GOODBYE, Till We Meet Again :)\n");
				break;	
			default:
				printf("You entered a wrong input, please try again !\n");	
		}
	}
}
void Create(List* pl )
{
	pl->pHead = NULL;
	pl->pTail = NULL;
	pl->size = 0;
}
void NEW_STUDENT(List* pl)
{
	Student_info* pn=(Student_info*)malloc(sizeof(Student_info));
	
	printf("Enter ID_Student: ");
    scanf("%d", &(pn -> ID_Student));
	printf("Enter Phone_Student: ");
    scanf("%d",&(pn -> Phone_Student));
	fflush(stdin);
	printf("Enter Name_Student: ");
    gets(pn -> Name_Student);
	printf("Enter Address_Student: ");
	gets(pn ->Address_Student);
	printf("Enter STUDENT_SCORE_Student: ");
    scanf("%d", &(pn -> computer_science));
	printf("Enter the birth-data (day month year):\n");
    scanf("\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d",&(pn ->day),&(pn ->month),&(pn ->year));
	
	pn->pNext = NULL;
	pn->pPrev = NULL;

    if(isEmpty(pl))	
	{
		pl -> pHead = pn;
		pl -> pTail = pn;
		pl -> size++; 
	}
	else
	{	
		pn -> pPrev = pl -> pTail;
		pl -> pTail -> pNext = pn;
		pl -> pTail = pn;
		pl -> size++;	
	}
	printf("The Student has been added succefully :)\n");
}
bool isEmpty(List* pl)
{
 return (pl->size == 0);
}
void STUDENT_LIST(List* pl)
{
	Student_info * temp;
	u8 StudentNumber = 1;
	if(isEmpty(pl))
	{
		printf("============================================================\n");
		printf("\tThe List is empty. No Data to view !\n");
		printf("============================================================\n");
		return;
	}
	printf("\n-------------------- The List Of Students --------------------\n");
	for(temp = pl -> pHead;temp != NULL;temp = temp -> pNext)
	{  
		printf("============================================================\n");
        printf("Student NO.%d is:\n",StudentNumber);
		printf("The Student Name     :%s\n",temp -> Name_Student);
		printf("The Student Date     :%d/%d/%d\n",(temp ->day),(temp ->month),(temp ->year));
		printf("The Student ID       :%d\n",temp -> ID_Student);
		printf("The Student Address  :%s\n",temp -> Address_Student);
		printf("The Student Phone    :0%d\n",temp -> Phone_Student);
		printf("The Student computer_science    :%d\n",temp -> computer_science);
		printf("============================================================\n");
		StudentNumber++;
	} 
	printf("\n------------------------------------------\n");
}
void DELETE_STUDENT(List* pl,u8 ID_Student)
{
	if(isEmpty(pl))
	{
		printf("============================================================\n");
		printf("Sorry the List is empty and there is no Data to be deleted.\n");
		printf("============================================================\n");
		return;
	}
	else
	{
	    Student_info* temp = searchBook(pl,ID_Student);
		if(temp == NULL)
		 {
			printf("==========================================\n");
			printf("This Student NO. is unavailable !!!\n");
			printf("==========================================\n");
			return;
		 }
		else if(pl -> pHead == pl -> pTail) 
		 {
			free(temp); 
			pl -> pHead  = NULL;
			pl -> pTail  = NULL;
			pl -> size = 0; 
		 }	
          else if(temp == pl -> pHead)
		  {
			pl -> pHead -> pNext -> pPrev = NULL;
            pl -> pHead = pl -> pHead -> pNext;
            free(temp); 
            pl -> size--;			  
		  }
          else if(temp == pl -> pTail)
		  {
			pl -> pTail -> pPrev -> pNext = NULL;
			pl -> pTail = pl -> pTail -> pPrev;
			free(temp);
			pl -> size--;
		  }
          else
		  {
			temp -> pNext->pPrev = temp -> pPrev;
			temp -> pPrev->pNext = temp -> pNext;
			free(temp);
			pl -> size--;
		  }
		printf("=============================================\n");	
		printf("The Student has been deleted succefully :)\n");
		printf("=============================================\n");
	}
}
Student_info* searchBook(List* pl,u8 ID_Student)
{
	Student_info * temp = pl -> pHead;
	while(temp != NULL && temp->ID_Student != ID_Student)
	{
		temp = temp -> pNext;
	}
	return temp;
}
void STUDENT_EDIT(List* pl,u8 ID_Student)
{
	u8 flag = 0;
	Student_info *temp = pl -> pHead;
	while( temp != NULL){

        if(temp->ID_Student == ID_Student)
		{
			printf("Enter ID_Student: ");
			scanf("%d", &(temp-> ID_Student));
			printf("Enter Phone_Student: ");
			scanf("%d",&(temp-> Phone_Student));
			fflush(stdin);
			printf("Enter Name_Student: ");
			gets(temp-> Name_Student);
			printf("Enter Address_Student: ");
			gets(temp->Address_Student);
			printf("Enter STUDENT_SCORE_Student: ");
			scanf("%d", &(temp -> computer_science));
			printf("Enter the birth-data (day mons year):\n");
			scanf("\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d",&(temp->day),&(temp->month),&(temp->year));
			printf("\t\t\t=================================\n");
			printf("\t\t\t\tUpdation Successful!!!\n");
			printf("\t\t\t=================================\n");
			STUDENT_LIST(pl);
			flag = 1;
		}

		temp = temp->pNext;
    }
	if(flag == 0)
	{	printf("==========================================\n");
		printf("Student with id=> %d is not found !!!\n", ID_Student);
		printf("===========================================\n");
	}
}
void RANK_STUDENT(List* pl)
{
	Student_info * current;
    Student_info * next;
    u32 temp_id,temp_phone,temp_year,temp_month,temp_day,temp_computer_science;
	u8 temp_studentName[50],temp_studentAddr[50];

    if(isEmpty(pl))
     {
        printf("==================================================\n");
		printf("Sorry the List is empty and there is no Data.\n");
		printf("==================================================\n");
		return;
     }
     else
     {
         current = pl -> pHead;
         while(current != NULL)
         {
             next=current->pNext;
             while(next != NULL)
             {
                 if(current->computer_science < next->computer_science)
                 {

                    temp_id = current->ID_Student;
                    current->ID_Student=next->ID_Student;
                    next->ID_Student=temp_id;

					temp_phone = current->Phone_Student;
                    current->Phone_Student=next->Phone_Student;
                    next->Phone_Student=temp_phone;

					temp_computer_science = current->computer_science;
                    current->computer_science=next->computer_science;
                    next->computer_science=temp_computer_science;

					temp_day = current->day;
                    current->day=next->day;
                    next->day=temp_day;

					temp_year = current->year;
                    current->year=next->year;
                    next->year=temp_year;


					temp_month = current->month;
                    current->month=next->month;
                    next->month=temp_month;

	                strcpy(temp_studentName,current->Name_Student);
					strcpy(current->Name_Student,next->Name_Student);
					strcpy(next->Name_Student,temp_studentName);
					
					strcpy(temp_studentAddr,current->Address_Student);
					strcpy(current->Address_Student,next->Address_Student);
					strcpy(next->Address_Student,temp_studentAddr);

                 }
                 next=next->pNext;

             }
             current=current->pNext;
         }
     }
	 printf("=====================================\n");
	 printf("The Process is Done Successfully:)\n");
	 printf("=====================================\n");
}
void STUDENT_SCORE(List* pl)
{
	Student_info * temp;
	if(isEmpty(pl))
	{
		printf("============================================================\n");
		printf("\tThe List is empty. No Data to view !\n");
		printf("============================================================\n");
		return;
	}
	printf("\n-------------------- The List Of Students --------------------\n");
	for(temp = pl -> pHead;temp != NULL;temp = temp -> pNext)
	{   
		printf("The Student ID %d:\n",temp->ID_Student);
		printf("computer_science = \n");
		scanf("%d",&temp-> computer_science);
	} 
	printf("=================================================\n");	
	printf("The computer_science has been Changed succefully :)\n");
	printf("==================================================\n");
	printf("\n------------------------------------------\n");
}
