#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Types.h"
#include "Header.h"

/*---------------------------------------------------------------------- *
 *(1) Function : Void Function To Start Your Program,Welcoming Message   *
 * ----------------------------------------------------------------------*/
void main(void)
{
 // Welcoming Message
 printf("=====================================================\n");
 printf("===================  WELCOME SIR  ===================\n");
 printf("=====================================================\n");
 printf("\n");
 
 printf("\n");
 printf("	**************************************	\n");
 printf("	*****  Clinic Management System  *****	\n");
 printf("	**************************************	\n");
 printf("\n");
 // Call The Select Mode Function	
 Select_Mode();
}

/*---------------------------------------------------------------------- *
 *   (2) Function : Select Mode                                          *
 *   asks the user to choose between admin mode or user mode or Exit     *
 *   Program                                                             *
 * ----------------------------------------------------------------------*/
void Select_Mode(void)
{
	u8 mode;
	//  choose between admin mode,user mode and  Exit Program
	printf("\n");
	printf("	**************************************	\n");
	printf("		please sir choose :\n");
	printf("   			1.Admin Mode\n");
	printf("   			2.User Mode\n");
	printf("   			3.Exit Program\n");
	printf("	**************************************	\n");
	printf("\n");
	
	printf("		Enter Your choice: ");
	scanf("%d",&mode);
	
	if(mode == 1)
		{	 
			//Call Admin Mode Function
	        Admin_Mode();
			if(out==1)
			{
				system(0);
			}
			else{
			// Call The Select Mode Function
			Select_Mode();
			}
		}
		else if(mode == 2)
		{
			//Call User Mode Function
			User_Mode();
			// Call The Select Mode Function
			Select_Mode();
		}
		else if(mode == 3)
		{
			//Exit Program
			system(0);
		}
		else
		{   
		    // Your choice not find 
		    printf("\n");
			printf("             ********* Invalid Choice ********* \n");
	    	printf("     ********* Please Choose The Right Mode ********* \n");
			printf("\n");
			// Call The Select Mode Function
			Select_Mode();
		}	
}

 /*--------------------------------------------------------------------- *
 *   (3) Function : Admin Mode                                           *
 * The system asks for password, the default password is 1234. The system*
 * allows 3 trails for the password entry, if the entered password was   *
 * incorrect for 3 consecutive times, the system shall close             *
 * ----------------------------------------------------------------------*/
void Admin_Mode(void)
{
	  u32 pass,count=0;
			 do{	
				    printf("please sir enter your password : ");
					scanf("%d",&pass);
					count++;
				 if(pass == password)
				{ 
				 // Call The Admin Choice Function
				 Admin_Choice();
				 count=3;
				 out=0;
				}
				else if(count < 3)
				{
				// try enter password
				printf("please sir try again\n ");
				out=0;
				}
				else if (count==3 && pass !=password)
				{
					out=1;
				}
				}while(count != 3);	
}

/*--------------------------------------------------------------------- *
 *   (4) Function : Admin Choice                                        *
 * in the admin mode, the system shall provide the following features:  *
 *            	1. Add new patient record                               *
 *   			2. Edit patient record                                  *
 *				3. Reserve a slot with the doctor                       *
 *				4. Cancel reservation                                   *
 * ---------------------------------------------------------------------*/ 
 void Admin_Choice(void)
{   
    u8 Choice;
	u8 name[100];
	u8 gender[10];
	u32 age,id;
	
    printf("	**************************************\n");
    printf("		please sir choose :\n");
    printf("       			1. Add new patient record\n");
    printf("			2. Edit patient record\n");
	printf("			3. Reserve a slot with the doctor\n");
	printf("			4. Cancel reservation\n");
	printf("	**************************************\n");
	printf("		Enter Your choice: ");
	scanf("%d",&Choice);
	
		switch(Choice)
			{
				case 1:
				printf("Please Enter the name of patient : ");
			    scanf(" %[^\n]",name);
				printf("Please Enter the age of patient  : ");
			    scanf("%d",&age);
				printf("Please Enter the gender of patient : ");
			    scanf(" %[^\n]",gender);
				printf("Please Enter the id of patient : ");
			    scanf("%d",&id);
				//Call Add Patient Function
				Add_Patient(name,age,gender,id);
				//Call Select Mode Function
				Select_Mode();
				break;

				case 2:
				printf("Please Enter the id of patient : ");
				scanf("%d",&id);
				//Call Edit Patient Function
				Edit_Patient(id);
				//Call Select Mode Function
				Select_Mode();
				break;

				case 3:
				//Call Reservation Function
				Reservation();
				//Call Select Mode Function
				Select_Mode();
				break;

				case 4:
				printf("Please Enter the id of patient : ");
				scanf("%d",&id);
				//Call Cancel Reservation Function
				Cancel_Reservation(id);
				//Call Select Mode Function
				Select_Mode();
				break;

				default:
			    printf("                     Feature not defined!\n" );
				printf("     ********* Please Choose The Right Feature ********* \n");
				//Call Admin Choice Function
				Admin_Choice();
				break;
		            }			
}

/*--------------------------------------------------------------------- *
 *   (5) Function : Add Patient                                         *
 * To add a new patient, the user shall admin shall enter these basic   *
 * information: name, age, gender and ID. The ID shall be unique for    *
 * the user, if the entered ID is already exists, the system shall      *
 * reject the entry.                                                    *
 * ---------------------------------------------------------------------*/ 
u8 Add_Patient(u8 name[],u32 age,u8 gender[], u32 id)
{
	node *link = (node*)malloc(sizeof(node));
	New = head;
	
	strcpy(link -> name,name);
    link -> age = age;
    strcpy(link -> gender,gender);
    link -> id = id;
    link -> next = NULL;
	
    while(New != NULL)
   {
      if(New -> id == id)
      {
         printf("	 The ID is already exist, please try again\n");
         return 0;
      }
      New = New->next;
   }
    printf("		Patient is added successfully \n\n\n");
	
	New = head;
	 if(head==NULL)
   {
      head = link;
      return 0;
   }
   while(New->next != NULL)
   {
	   New = New->next;
	  
   }
   New->next = link;
} 
 
 /*--------------------------------------------------------------------- *
  *   (6) Function : Edit patient record                                 *
  * By entering patient ID the system shall checks if the ID exists, the *
  * system shall allow the user to edit the patient information. If not, *
  * the system shall display incorrect ID message.                       *                            *
  *--------------------------------------------------------------------- */
u8 Edit_Patient(u32 id)
{
	u8 flag=0;
   New=head;
   while(New != NULL && flag == 0)
   {
      if(New->id == id)
      {
		printf("Enter your new name: ");
		scanf(" %[^\n]",New->name);
		printf("Enter your new age: ");
		scanf("%d",&New->age);
		printf("Enter your new gender: ");
		scanf(" %[^\n]",New->gender);
		printf("Enter your new ID: ");
		scanf("%d",&New->id);
		printf("		Patient is Edit successfully \n\n\n");
		flag=1;
		return 0;
      }
	  New=New->next;
   }
   	  if(flag == 0)
		printf("The ID is not exist\n"); 	
	
   return 0;
}
  
 /*--------------------------------------------------------------------- *
 *   (7) Function : Reserve a slot with the doctor                       *                  
 * By default there are 5 available slots, 2pm to 2:30pm, 2:30pm to 3pm, *
 * 3pm to 3:30pm, 4pm to 4:30pm and 4:30pm to 5pm. Upon opening of this  *
 * window, the system shall display the available slots. The  admin      *
 * shall enter the patient ID and the desired slot. The reserved slot    *
 * shall not appear again in the next patient reservation.               *                                      *
 * --------------------------------------------------------------------- */ 
 u8 Reservation() 
{	
	for(i = 1;i <= 5;i++)
	{
		switch(i)
		{
			case 1 : 
			if(arr[0] == 0) 
			{			
			printf("	**************************************	\n");
			printf("			1- From 2:00 PM To 2:30 PM \n");
			printf("	**************************************	\n");
			}
			break;
			
			case 2 : 
			if(arr[1] == 0) 
			{
			printf("	**************************************	\n");
			printf("			2- From 2:30 PM To 3:00 PM \n");
			printf("	**************************************	\n");
			}
			break;
			
			case 3 : 
			if(arr[2] == 0) 
			{
			printf("	**************************************	\n");
			printf("			3- From 3:00 PM To 3:30 PM \n");
			printf("	**************************************	\n");
			}
			break;
			
			case 4 : 
			if(arr[3] == 0) 
			{
			printf("	**************************************	\n");
			printf("			4- From 4:00 PM To 4:30 PM \n");
			printf("	**************************************	\n");
			}
			break;
			
			case 5 : 
			if(arr[4] == 0)
			{			
			printf("	**************************************	\n");
			printf("			5- From 4:30 PM To 5:00 PM \n");
			printf("	**************************************	\n");
			}
			break;	
		}
	}
	printf("		Your choice: ");
	scanf("%d",&time);
	printf("		Please Enter your ID: ");
	scanf("%d",&id);
	printf("		Patient is Reserved successfully \n\n\n");
	New = head;
   while(New != NULL)
   {
      if(New->id == id)
      {
        arr[time-1]=id;
        return 0;
      }
      New = New->next;
   }
}

 /*--------------------------------------------------------------------- *
 *   (8) Function : Cancel reservation                                   *
 *  The admin can cancel a reservation by entering the patient ID. This  *
 *  reservation shall be shown again in the available slots window.      *                                             *
 * --------------------------------------------------------------------- */
u8 Cancel_Reservation(u32 id)
{	
	u8 flag = 0;
	for(i = 0;i < 5;i++)
	{
			if(arr[i] == id)
			{
				arr[i] = 0;
				flag = 1;
				printf("		Reservation is canceld successfully \n\n\n");
			}		
    }
	if(flag == 0)
	{
		printf("You Enter a Wrong ID\n"); 
	}
	return 0;
}

/*---------------------------------------------------------------------  *
 *   (9) Function :  User Mode                                           *
 *  There is no password. The system allows the following features:      *
 *       1. View patient record                                          *             
 *       2. View today’s reservations                                    *
 * --------------------------------------------------------------------- */
 void User_Mode()
{       u32 id,choice;
		printf("	**************************************\n");
	    printf("		******** User Mode ********\n");
		printf("		please sir choose :\n");
		printf("       			1. View patient record\n");
		printf("			2. View today reservations\n");
		printf("	**************************************\n");
				
	
		printf("		Your choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1 : 
			printf("		Please Enter Your ID: ");
			scanf("%d",&id);
			printf("\t\t********** Patient Record **********\n\n");
			// Call Print_ Function
			Print_(id);
			break;
			
			case 2 :
			printf("\t****** Reservation Today ******\n\n ");
			// Call Print Reservation Function
			Print_Reservation();
			break;
			
			default: 
			printf("\tInvalid Choice please try again\n"); 
			break;
		}
}

 /*--------------------------------------------------------------------- *
 *   (10) Function : View patient record                                 *
 *   By entering the patient ID, the system shall show the basic         *
 *   information for the patient.                                        *                                             
 * --------------------------------------------------------------------- */
 u8 Print_(u32 id)
{	u8 flag=0;
    New = head;
   while(New != NULL)
   {
      if(New -> id == id)
      {
      // Print The Information Of Patient
	  printf("The Name Of Patient : ");
      printf("%s",New->name);
	  printf("\n");
	  printf("The Age Of Patient: %d\n",New->age);
	  printf("The Gender Of Patient: ");
	  printf( "%s",New->gender);
	  printf("\n");
	  printf("The ID Of Patient: %d\n",New->id);
	  flag=1;
	  }
      New = New->next;
   }
   if(flag == 0)
   printf("          	   This ID is not exist");
   //Call Select Mode Function
   Select_Mode();
   return 0;
}

 /*--------------------------------------------------------------------- *
 *   (11) Function : View today’s reservations                           *
 *  In this view, the system shall print all reservations with the       *
 *  patient ID attached to each reservation slot.                        *                                             
 * --------------------------------------------------------------------- */
void Print_Reservation()
{
	for(i=1;i<=6;i++)
	{
		switch(i)
		{	
			case 1 : 
			if(arr[0] != 0) 
			{
			printf("	**************************************	\n");
			printf("From 2:00 PM To 2:30 PM ==> ID : %d\n",arr[0]);
			printf("	**************************************	\n");
			}
			break;
			
			case 2 : 
			if(arr[1] != 0) 
			{
			printf("	**************************************	\n");
			printf("From 2:30 PM To 3:00 PM ==> ID : %d\n",arr[1]); 
			printf("	**************************************	\n");
			}
			break;
			
			case 3 : 
			if(arr[2] != 0) 
			{
			printf("	**************************************	\n");
			printf("From 3:00 PM To 3:30 PM ==> ID : %d\n",arr[2]);
			printf("	**************************************	\n");
			}
			break;
			
			case 4 : 
			if(arr[3] != 0) 
			{
			printf("	**************************************	\n");
			printf("From 4:00 PM To 4:30 PM ==> ID : %d\n",arr[3]); 
			printf("	**************************************	\n");
			}
			break;
			
			case 5 : 
			if(arr[4] != 0) 
			{
			printf("	**************************************	\n");
			printf("From 4:30 PM To 5:00 PM ==> ID : %d\n",arr[4]); 
			printf("	**************************************	\n");
			}
			break;
			case 6 :
			if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0 && arr[3] == 0 && arr[4] == 0 )
			{
		    printf("	**************************************	\n");
			printf("          there is no Reservation\n"); 
			printf("	**************************************	\n");
			}
			break;
		}
	}
}

