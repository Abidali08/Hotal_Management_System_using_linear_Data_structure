#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int cust_id;
char c_n[20],cnic[14],add[100],city[14],gender,marital,choice,pass3[10],a;
char ch,pass[10],name1[20];
time_t t;


void main_menu(void);
void title(void);
void customer(void);
void booking(void);
void rooms(void);
void about(void);
void add_cust(void);
void dlt_cust(void);
void update_cust(void);
void view_cust(void);
void search_cust(void);
void add_book(void);
void dlt_book(void);
void update_book(void);
void view_book(void);
void search_book(void);
void add_room(void);
void dlt_room(void);
void update_room(void);
void view_room(void);
void search_room(void);
void back(void);




struct customers{
    int id;
    char name[20],address[100],cnic[20],phone[11],time[30];
}_cust;

struct book{
    int customer_id;
    char room_no[10],bill[10],days[100],booking_id[10];
}_book;

struct room{
    char room_type[20],bed_type[20],room_no[12];
}_room;

FILE *cust;
FILE *temp;
FILE *id;
FILE *book;
FILE *room;

int main()
{
    system("color fc");
    main_menu();
    return 0;
}

void title(void)
{
    int i;
    printf("\n");
    for(i = 0; i < 120; i++) putchar('=');
    printf("\n\t\t\t\tHOTEL MANAGEMENT USING LINEAR DATA STRUCTURE\n");
    for(i = 0; i < 120; i++) putchar('=');
}

void main_menu(void)
{
    int i;
    system("cls");
    system("color fc");
    title();
    time(&t);
    printf("\n\n\t\t\t\t\t\t   M A I N  M E N U:"
               "\n\t\t\t\t\t   >>>--------------------------<<<\n");
    printf("\n\n::%s",ctime(&t));
    for(i = 0; i < 120; i++) putchar('_');
    printf("\n\n\t\t\t\t\t\t1.CUSTOMER MANAGEMENT"
           "\n\t\t\t\t\t\t2.BOOKING"
           "\n\t\t\t\t\t\t3.ROOM MANAGEMENT"
           "\n\t\t\t\t\t\t4.ABOUT"
           "\n\t\t\t\t\t\tESC.EXIT\n"
           );
    for(i = 0; i < 120; i++) putchar('_');
    printf("\n\n\t\t\t\t\t\tENTER YOUR CHOICE :");
    switch(getche())
    {
        case '1':customer();
		break;
        case '2':booking();
		break;
        case '3':rooms();
		break;
        case '4':about();
		break;
        case 27:exit(0);
		break;
        default:
		printf("\nIncorrect Input, Try Again!!!\n");
        getch();
		main_menu();
		break;
    }
    system("color fc");
}

void customer (void)
{
    int i;
        system("cls");
        system("color fc");
        title();
        printf("\n\n\t\t\t\t\t       C U S T O M E R  M A N A G E M E N T"
               "\n\t\t\t\t\t>>>-------------------------------------------<<<\n");
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t       1.ADD CUSTOMER"
               "\n\t\t\t\t\t       2.Delete Customer"
               "\n\t\t\t\t\t       3.UPDATE CUSTOMER"
               "\n\t\t\t\t\t       4.VIEW CUSTOMER"
               "\n\t\t\t\t\t       5.SEARCH CUSTOMER"
               "\n\t\t\t\t\t           <--.BACK\n"
               );
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t\tENTER YOUR CHOICE :");
        choice = getche();
        switch(choice)
        {
            case '1': 
				add_cust(); 
				break;
            
			case '2': 
				dlt_cust(); 
				break;
            
			case '3': 
				update_cust(); 
				break;
            
			case '4': 
				view_cust(); 
				break;
            
			case '5': 
				search_cust(); 
				break;
            
			case 8: 
				main_menu(); 
				break;
            
			default:
                printf("\nIncorrect Input, Try Again!!!\n");
				getche();
				customer();
                break;
    }
}

void booking(void)
{
    int i;
        system("cls");
        system("color fc");
        title();
        printf("\n\n\t\t\t\t\t      B O O K I N G  M A N A G E M E N T"
               "\n\t\t\t\t\t>>>--------------------------------------<<<\n");
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t       1.ADD BOOKING"
               "\n\t\t\t\t\t       2.Delete BOOKING"
               "\n\t\t\t\t\t       3.UPDATE BOOKING"
               "\n\t\t\t\t\t       4.VIEW BOOKING"
               "\n\t\t\t\t\t       5.SEARCH BOOKING"
               "\n\t\t\t\t\t           <--.BACK\n"
               );
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t\tENTER YOUR CHOICE :");
        choice = getche();
        switch(choice)
        {
            case '1': 
				add_book(); 
				break;
            
			case '2': 
				dlt_book(); 
				break;
            
			case '3': 
				update_book(); 
				break;
            
			case '4': 
				view_book(); 
				break;
            
			case '5': 
				search_book(); 
				break;
            
			case 8: 
				main_menu(); 
				break;
            
			default:
                printf("\nIncorrect Input, Try Again!!!\n"); 
				getche(); 
				customer();
                break;
        }
}
void rooms(void)
{
    int i;
       system("cls");
        system("color fc");
        title();
        printf("\n\n\t\t\t\t\t         R O O M S  M A N A G E M E N T"
               "\n\t\t\t\t\t>>>------------------------------------------<<<\n");
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t       1.ADD ROOM"
               "\n\t\t\t\t\t       2.Delete ROOM"
               "\n\t\t\t\t\t       3.UPDATE ROOM"
               "\n\t\t\t\t\t       4.VIEW ROOM"
               "\n\t\t\t\t\t       5.SEARCH ROOM"
               "\n\t\t\t\t\t           <--.BACK\n"
               );
        for(i = 0; i < 120; i++) putchar('_');
        printf("\n\n\t\t\t\t\t\tENTER YOUR CHOICE :");
        choice = getche();
        switch(choice)
        {
            case '1': add_room(); 
			break;
            case '2': dlt_room(); 
			break;
            case '3': update_room(); 
			break;
            case '4': view_room(); 
			break;
            case '5': search_room(); 
			break;
            case 8: main_menu(); 
			break;
            default:
                printf("\nIncorrect Input, Try Again!!!\n"); 
				getche(); 
				customer();
                break;
    }
}
void add_cust(void)
{
    int ide;
    int num;
    char a,ch='y',time[70];
    strcpy(_cust.time,ctime(&t));
    while(ch=='y')
    {
        cust = fopen("cust.txt","a");
        system("cls");
        title();
        printf("\n\n\ADD CUSTOMER:\n~~~~~~~~~~~~~\n");
        if(cust == NULL)
        {
          printf("Error!");
          exit(0);
        }
        printf("\nCUSTOMER ID#: ");
        id = fopen("CUSTOMER ID.txt","r");
    fscanf(id,"%d",&ide);
    printf("%   .3d",ide);
    fprintf(id,"%d",ide);
    fclose(id);
    fflush(stdin);
        printf("\nNAME :");
		gets(_cust.name);
		fflush(stdin);
        
		printf("CNIC# :");
		scanf("%s",&_cust.cnic);
		fflush(stdin);
        
		printf("ADDRESS :");
		gets(_cust.address);
		fflush(stdin);
        
		printf("PHONE :");
		gets(_cust.phone);
		fflush(stdin);
        
		printf("DATE AND TIME :%s",ctime(&t));
		fflush(stdin);
        fprintf(cust," %d | %s | %s | %s | %s | %s",ide,_cust.name,_cust.cnic,_cust.phone,_cust.address,ctime(&t));
        fclose(cust);
        
		printf("\n\nCustomer added successfully!");
        id = fopen("CUSTOMER ID.txt","w");
    
	fscanf(id,"%d",&ide);
    ide++;
    fprintf(id,"%d",ide);
    fclose(id);
        printf("\n\nDO you want to add another record(y/n): ");
        ch = getch();
    }
    customer();
}
void dlt_cust(void)
{
    char a,str[300],Delete[200];
    while(1)
    {
        system("cls"); 
		system("color fc"); 
		title();

        cust = fopen("cust.txt","r");
        if(cust == NULL)
            printf("\nERROR");
        while(fgets(str,"%[^\n]",cust)!=NULL)
            printf(" %s\n",str);

        fclose(cust);
        cust=fopen("cust.txt","r");
        rewind(cust);
        
		printf("::Enter any detail of record to Delete(name/id/address/ph/cnic):");
        scanf("%s",&Delete);
        
		temp=fopen("temp.txt", "a");
        
		while (fgets(str,"%[^\n]",cust)!=NULL)
        {
        if (strstr(str,Delete))
        {
            fseek(temp,100,SEEK_CUR);
            printf("\n\n::Customer DELETED successfully!");
        }
        else if(strstr(str,Delete)==-1)
        {
            fprintf(temp,str);
            printf("\nRecord not existed");
        }
        else
            fprintf(temp,str);
        }
        fclose(cust);
        fclose(temp);
        remove("cust.txt");
        rename("temp.txt","cust.txt");
        here:
        printf("\n::Delete another customer(y/n): ");
        a=getche();
        if(a=='y') add_cust();
        else if(a=='n') customer();
        else printf("\nIncorrect input !"); 
		getch(); 
		goto here;
    }
}
void update_cust(void)
{
    int i,ide;
    char a,str[300],update[200];
    while(i)
    {
        system("cls"); 
		system("color fc"); 
		title();
        cust = fopen("cust.txt","r");
        if(cust == NULL)
            printf("\nERROR");
        while(fgets(str,"%[^\n]",cust)!=NULL)
            printf(" %s\n",str);
        fclose(cust);
        cust=fopen("cust.txt","r");
        rewind(cust);
    printf("::Enter any detail of record to update(name/id/address/ph/cnic):");
    scanf("%s",&update);
    temp=fopen("temp.txt", "a");
    while (fgets(str,"%[^\n]",cust)!=NULL)
    {
        if (strstr(str,update))
        {
            id = fopen("CUSTOMER ID.txt","r");
            fscanf(id,"%d",&ide);
            
			printf("\n\nEnter New Data.\n\n");
            fflush(stdin);
            printf("ID: %.3d",ide);
            printf("\nNAME :");
			gets(_cust.name);
			fflush(stdin);
            printf("CNIC# :");
			scanf("%s",&_cust.cnic);
			fflush(stdin);
            printf("ADDRESS :");
			gets(_cust.address);
			fflush(stdin);
            printf("PHONE :");
			gets(_cust.phone);
			fflush(stdin);
            printf("DATE AND TIME :%s",ctime(&t));
			fflush(stdin);
            fprintf(temp," %d | %s | %s | %s | %s | %s",ide,_cust.name,_cust.cnic,_cust.phone,_cust.address,ctime(&t));
            fprintf(id,"%d",ide);
            fclose(id);
             id = fopen("CUSTOMER ID.txt","w");
                fscanf(id,"%d",&ide);
                ide++;
                fprintf(id,"%d",ide);
                fclose(id);
                printf("\n\n::Customer UPDATED successfully!");
        }
        else
        {
            fprintf(temp,str);
        }

    }
            fclose(cust);
            fclose(temp);
            remove("cust.txt");
            rename("temp.txt","cust.txt");
        here:
        printf("\n::update another customer(y/n): ");
        a=getche();
        if(a=='y') update_cust();
        else if(a=='n') customer();
        else printf("\nIncorrect input !"); 
		getch(); 
		goto here;
    }
}
void search_cust(void)
{
    int found=0,i;
    char search[200],line[500],a;
        system("cls"); 
		system("color fc"); 
		title();

    cust=fopen("cust.txt","r");
    if (cust == NULL)
        puts ("\nError: Unable to load data.");

    puts("::ENTER ID or name:");
    scanf("%s",search);
    while(!feof(cust))
    {
        fgets(line,500,cust);
        if(strstr(line,search) != NULL)
        {
            printf("%s",line);
            found+=1;
        }
    }
    if(found == 0)
    {
        puts("\nNo match found.");
    }
    fclose(cust);
   getch();
   customer();
}
void view_cust(void)
{
    int i,*p;
    char c,str[10000],name[100],address[100],cnic[100],timee[100],phone[100],id[20];
    system("cls"); 
	system("color fc"); 
	title();
    printf("\n\n\VIEW CUSTOMER:\n~~~~~~~~~~~~~\n\n");
    cust = fopen("cust.txt","r");
    if(cust == NULL)
        printf("\nERROR");
    while(fgets(str,"%[^\n]",cust)!=NULL)
   {
        printf(" %s\n",str);

   }
    fclose(cust);
    getch();
    customer();

}
void view_book(void)
{
     char str[1000];
    system("cls"); 
	system("color fc"); 
	title();
    
	printf("\n\n\VIEW BOOKING:\n~~~~~~~~~~~~~\n\n");
    book = fopen("book.txt","r");
    if(book == NULL){
	printf("\nERROR");
	}
    while(fgets(str,"%[^\n]",book)!=NULL)
        printf(" %s\n",str);
    fclose(book);
    getch();
    booking();
}
void add_book(void)
{
    int ide=0;
    book = fopen("book.txt","a");
    system("cls");
	title();
    
	printf("\n\n\ADD BOOKING:\n~~~~~~~~~~~~~\n");
	fflush(stdin);
    
	printf("\nCustomer id:");
	scanf(" %d",&_book.customer_id);
	fflush(stdin);
    id=fopen("CUSTOMER ID.txt","r");
    fscanf(id,"%d",&ide);
    if(ide<_book.customer_id)
    {
        printf("\ncustomer id not existed try again with valid customer id!!!");
        getch();
		fclose(id);
        add_book();
    }
    fclose(id);
    printf("\nBooking ID:");
	scanf(" %s",&_book.booking_id);
	fflush(stdin);
    printf("\nRoom no:");
	scanf(" %s",&_book.room_no);
    printf("\nDays:");
	scanf(" %s",&_book.days);
    printf("\nTOTAL BILL:");
	scanf(" %s",&_book.bill);
    fprintf(book,"\n Cust iD:%d | Bking ID:%s | R.no:%s | Days:%s | Bill:%s |",_book.customer_id,_book.booking_id,_book.room_no,_book.days,_book.bill);
    fclose(book);
    printf("\n\BOOKING added successfully!");
	getch();
    booking();
}
void update_book(void)
{
    int ide;
   char a,str[300],update[200];
        system("cls"); 
		system("color fc"); 
		title();
        book = fopen("book.txt","r");
        if(book == NULL){
        printf("\nERROR");	
		}
        while(fgets(str,"%[^\n]",book)!=NULL)
        printf(" %s\n",str);
		fclose(book);
        book=fopen("book.txt","r");
		rewind(book);
        printf("::Enter book# to update:");
        scanf("%s",&update);
        temp=fopen("temp.txt", "a");
        while (fgets(str,"%[^\n]",book)!=NULL)
        {
            if (strstr(str,update))
            {
                printf("\nEnter new details\n");
                printf("\nCustomer id:");
				scanf(" %d",&_book.customer_id);
				fflush(stdin);
                id=fopen("CUSTOMER ID.txt","r");
                fscanf(id,"%d",&ide);
                if(ide<_book.customer_id)
                {
                    printf("\ncustomer id not existed try again with valid customer id!!!");
                    getch();
					fclose(id);
                    add_book();
                }
                fclose(id);
                printf("\nBooking ID:");
				scanf(" %s",&_book.booking_id);
				fflush(stdin);
                printf("\nbook no:");
				scanf(" %s",&_book.room_no);
                printf("\nDays:");
				scanf(" %s",&_book.days);
                printf("\nTOTAL BILL:");
				scanf(" %s",&_book.bill);
                fprintf(temp,"\n Cust iD:%d | Bking ID:%s | R.no:%s | Days:%s | Bill:%s |",_book.customer_id,_book.booking_id,_book.room_no,_book.days,_book.bill);
                fclose(book);
                printf("\n\n::book UPDATED successfully!");
            }
            else
                fprintf(temp,str);
        fclose(book);
		fclose(temp);
		remove("book.txt");
		rename("temp.txt","book.txt");
        getch();
		booking();
    }
}
void dlt_book(void)
{
    char a,str[300],update[200];
        system("cls"); 
		system("color fc"); 
		title();
        book = fopen("book.txt","r");
        if(book == NULL) 
		printf("\nERROR");
        while(fgets(str,"%[^\n]",book)!=NULL)
        printf(" %s\n",str);
		fclose(book);
        book=fopen("book.txt","r");
		rewind(book);
        printf("\n\n::Enter booking id to delete:");
        scanf("%s",&update);
        temp=fopen("temp.txt", "a");
        while (fgets(str,"%[^\n]",book)!=NULL)
        {
            if (strstr(str,update))
        {
            fseek(temp,100,SEEK_CUR);
            printf("\n\n::BOOKING DELETED successfully!");
        }
            else
                fprintf(temp,str);
        fclose(book);
		fclose(temp);
		remove("book.txt");
		rename("temp.txt","book.txt");
        getch();
		booking();
    }
}
void search_book(void)
{
    int found=0,i;
    char search[200],line[500],a;
    system("cls"); 
	system("color fc"); 
	title();
    book=fopen("book.txt","r");
    if (book == NULL)
        puts ("\nError: Unable to load data.");
    puts("::ENTER booking id:");
    scanf("%s",search);
    while(!feof(book))
    {
        fgets(line,500,book);
        if(strstr(line,search) != NULL)
        {
            printf("%s",line);
            found+=1;
        }
    }
    if(found == 0)
        puts("\nNo match found.");
    fclose(book);
	getch();
	booking();
}
void view_room(void)
{
    char str[1000];
    system("cls");
	system("color fc"); 
	title();
    printf("\n\n\VIEW ROOMS:\n~~~~~~~~~~~~~\n\n");
    room = fopen("room.txt","r");
    if(room == NULL) 
	printf("\nERROR");
    while(fgets(str,"%[^\n]",room)!=NULL)
    	printf(" %s\n",str);
    fclose(room);
    getch();
    rooms();
}
void add_room(void)
{
    char a;
    room = fopen("room.txt","a");
    system("cls");
	title();
    printf("\n\n\ADD ROOMS:\n~~~~~~~~~~~~~\n");
	fflush(stdin);
    printf("\nROOM#:");
	scanf(" %s",&_room.room_no);
	fflush(stdin);
    printf("\nBed Type(single/double):");
	scanf(" %s",&_room.bed_type);
	fflush(stdin);
    printf("\nROOM Type(budget/luxury):");
	scanf(" %s",&_room.room_type);
    fprintf(room,"\n %s | %s | %s |",_room.room_no,_room.bed_type,_room.room_type);
    fclose(room);
    printf("\n\ROOM added successfully!");
	getch();
    rooms();
}
void update_room(void)
{
    char a,str[300],update[200];
        system("cls"); 
		system("color fc"); 
		title();
        room = fopen("room.txt","r");
        if(room == NULL) 
		printf("\nERROR");
        while(fgets(str,"%[^\n]",room)!=NULL)
        printf(" %s\n",str);    
		fclose(room);
        room=fopen("room.txt","r");
		rewind(room);
        printf("::Enter room# to update:");
        scanf("%s",&update);
        temp=fopen("temp.txt", "a");
        while (fgets(str,"%[^\n]",room)!=NULL)
        {
            if (strstr(str,update))
            {
                printf("\n\nEnter New Data.\n\n");
				fflush(stdin);
                printf("\nROOM#:");
				scanf(" %s",&_room.room_no);
				fflush(stdin);
                printf("\nBed Type(single/double):");
				scanf(" %s",&_room.bed_type);
				fflush(stdin);
                printf("\nROOM Type(budget/luxury):");
				scanf(" %s",&_room.room_type);
                fprintf(temp," %s | %s | %s |",_room.room_no,_room.bed_type,_room.room_type);
                printf("\n\n::ROOM UPDATED successfully!");
            }
            else
                fprintf(temp,str);
        fclose(room);
		fclose(temp);
		remove("room.txt");
		rename("temp.txt","room.txt");
        getch();
        rooms();
    }
}
void dlt_room(void)
{
   char a,str[300],update[200];

        system("cls"); 
		system("color fc"); 
		title();
        room = fopen("room.txt","r");
        if(room == NULL) printf("\nERROR");
        while(fgets(str,"%[^\n]",room)!=NULL)
        printf(" %s\n",str);
		fclose(room);
        room=fopen("room.txt","r");
		rewind(room);
        printf("::Enter room# to delete:");
        scanf("%s",&update);
        temp=fopen("temp.txt", "a");
        while (fgets(str,"%[^\n]",room)!=NULL)
        {
            if (strstr(str,update))
        {
            fseek(temp,100,SEEK_CUR);

            printf("\n\n::ROOM DELETED successfully!");
        }
            else
                fprintf(temp,str);
        }
        fclose(room);
		fclose(temp);
		remove("room.txt");
		rename("temp.txt","room.txt");
        getch();
        rooms();
}
void search_room(void)
{
    int found=0,i;
    char search[200],line[500],a;
        system("cls"); 
		system("color fc"); 
		title();
    room=fopen("room.txt","r");
    if (room == NULL)
        puts ("\nError: Unable to load data.");
    puts("::ENTER ROOM#:");
    scanf("%s",search);
    while(!feof(room))
    {
        fgets(line,500,room);
        if(strstr(line,search) != NULL)
        {
            printf("%s",line);
            found+=1;
        }
    }
    if(found == 0)
        puts("\nNo match found.");
    fclose(room);
	getch();
	rooms();
}
void about(void)
{
        int i;char ch;

    system("cls"); 
	system("color fc"); 
	title();

    char hotel[]="\tService exceptionally friendly and amenities are plentiful,\
 ensuring a most pleasurable and memorable stay";

   char hotel1[]="\t\tTHE SURVICE IS NOT ABOUT WHAT WE WANT TO GIVE......"
   "ITS WHAT THE PEOPLE WANT TO RECIEVE";

   char hotel3[] ="\t\t\t\t\t\t  ENJOY YOUR STAY";

    printf("\n\n\n\n%s\n\t\t",hotel1);
    for(i = 0; i < sizeof(hotel1); i++) putchar('_');

    printf("\n\n%s\n\t",strupr(hotel));
    for(i = 0; i < sizeof(hotel); i++) putchar('_');

    printf("\n\n%s\n\t\t\t\t\t\t",hotel3);
    for(i = 0; i < sizeof(hotel3)-4; i++) putchar('_');

    printf("\n\n\n");
    getch();
	main_menu();
}

