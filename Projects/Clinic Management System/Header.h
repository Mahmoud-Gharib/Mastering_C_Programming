
// prototype of Select Mode
void Select_Mode(void);

// prototype of Admin Mode,Admin Choice
void Admin_Mode(void);
void Admin_Choice(void);

// prototypes of Admin features add,edit,Reservation and Cancel Reservation
u8 Add_Patient(u8 name[],u32 age,u8 gender[], u32 id);
u8 Edit_Patient(u32 id);
u8 Reservation();
u8 Cancel_Reservation(u32 id);

// prototypes of User Mode and it is features
void User_Mode(void);
u8 Print_(u32 id);
void Print_Reservation();

// struct name,age,gender,id of Patient
struct Node_Patient
{
    u8 name[100];
	u32 age;
	u8 gender[10];
	u32 id;
    node *next;
};

// node 
node *head=NULL;
node *New = NULL;

u8 out;

u8 name[100];
u8 gender[10];
u32 age,id;

u32 arr[5]={0,0,0,0,0};

u32 time,i;

