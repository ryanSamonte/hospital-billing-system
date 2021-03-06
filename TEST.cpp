#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<string.h>
#include<windef.h>

//file pointer
FILE *a, *t, *b;

int number_present = 0, num;
int num1, success=0, choice;
char answer;
int patnum;

//-----------------------------------------------------------------------------//

//function prototypes
void opening_screen();
void main_menu();
void add_patient();
void view_patient();
void display_all();
void calculate_bill();
void bill_deleting();
void deleting();
void update();

//-----------------------------------------------------------------------------//

//data variables
struct add_patient{
	   char lname[50];
	   char fname[50];
	   char mname[50];
	   int patientnum;
	   int month, day, year;
	   int age;
	   char gender[50];
	   int house_num;
	   char street[50];
	   char barangay[50];
	   char city[50];
	   int patnum;
	   int room_type;
	   int floor_num;
	   int room_num;
	   float downpayment;
	   char room[10];
	   int daysadmit;
	   float roomexpense;
	   float professional_charges;
	   char  pcase[50];
	   float twenty_percent;
	   float discount;
	   float labor_charges;
	   float operating_charges;
	   float xray_charges;
	   float laboratory_charges;
	   float total_expense;
	   float total_expense1;
	   float expense;
	   float balance;
	   float phhealth_deduc;
	   float room_rate;
	   }patient, input;

//-----------------------------------------------------------------------------//

main()
{
 	int i;
	   
	system("cls");
	opening_screen(); //function call(opening screen)
	printf("\n\n\n\n\n");
	for(i=0; i<80; i++)
				{
					system("color fc"); 
					Sleep(0);           
					printf("\xdb");
				}
	system("color 0F");
	main_menu();
	getch();
	return 0;
}               

//-----------------------------------------------------------------------------//

void opening_screen()
{
	system("cls");
    int i,j,k;
    system("color fc");
    printf("\n");
    for(i=0; i<80; i++)
    {
        printf("\x2b");
    }
	for(i=0; i<80; i++)
    {
        printf("\x2b");
    }
    printf("\n");
    for(i=0; i<0; i++)
    {
        printf("\x2b");
    }
    printf("\n\n\n\n\n\n");
    for(i=0; i<20; i++)
    {        
        printf("\xdb");
    }
    printf("        HOSPITAL BILLING SYSTEM         ");
    for(i=0; i<20; i++)
    {        
        printf("\xdb");
    }
    printf("\n\n\n\n\t\t\t  [PRESS ANY KEY TO CONTINUE]");
    printf("\n");
    getch();
}

//-----------------------------------------------------------------------------//

void main_menu(){
	system("cls");
	system("COLOR F0");
	int ch;
	printf("\t\t   Welcome! Kindly choose your transaction.\t");             
	printf("\n\t\t   _________________________________________\n");              
	printf("\n\t\t  |  \t  (1) - ADMIT A PATIENT             |\n"); 
	printf("\n\t\t  |  \t  (2) - VIEW PATIENT'S RECORD       |\n");
	printf("\n\t\t  |  \t  (3) - DISPLAY ALL PATIENT         |\n");
	printf("\n\t\t  |  \t  (4) - CALCULATE PATIENT'S BILL    |\n");
	printf("\n\t\t  |  \t  (5) - UPDATE PATIENT INFORMATION  |\n");
	printf("\n\t\t  |  \t  (6) - DELETE PATIENT'S RECORD     |\n");
	printf("\n\t\t  |  \t  (7) - EXIT                        |");	  
	printf("\n\t\t   ________________________________________ \n");  
	printf("\t\t\t\t\n\t\t\t\t\t\t\t\t(0) - About\n\t"); 
	ch = getch();
	switch(ch)
	{
		case '1':
		{
			system("cls");
			add_patient();
			break;
		}
		case '2':
		{
			system("cls");
			view_patient();
			break;
		}
		case '3':
		{
			display_all();
			break;
		}
		case '4':
		{
			calculate_bill();
			bill_deleting();
			break;
		}
		case '5':
		{
			update();
			break;
		}
 	    case '6':
        {
		 	deleting();
		 	break;
	    }

		case '7':
		{
			char choice;
			int i;
			system("cls");
			printf("Are you sure you want to exit? Y if yes / N if No: ");
				scanf("%s", &choice);
			if((choice == 'y') || (choice == 'Y'))
			{						//if ( choice == y || == Y ) opening bracket
				system("cls");
				printf("\n\n\n\t\t\t\tTHE SYSTEM WILL EXIT\n\t\t\t\t    THANK YOU!!!\n\n\n");
				for(i=0; i<80; i++)
				{
					system("color fc"); 
					Sleep(0);           
					printf("\xdb");
				}
				exit(0);

			}						//if ( choice == y || == Y ) closing bracket
			else if((choice == 'N') || (choice == 'n'))
			{						//else if ( choice == n || == N ) opening bracket
				system("cls");
				main_menu();
			}						//else if ( choice == n || == N ) closing bracket
			else
			{							//else opening bracket
				system("cls");
				printf("\n\n\n\t\t\t\tInvalid input\n\t\t\t    The system will exit.\n\n\n");
				for(i=0; i<80; i++)
				{
					system("color fc"); 
					Sleep(0);           
					printf("\xdb");
				}
				exit(0);
			}//else closing bracket
			break;
		}//case 5(EXIT) closing bracket
		case '0':
		{
			system("cls");
			int i;
			for(i=0; i<79; i++)
			{        
				system("color fc");
				printf("\xfe");
			}
			printf("\n\t\t\t Name: Hospital Billing System\n\t\t\t Version: 1.0\n\t\t\t Copyright(c) 2016\n\t\t\t Programmers: \n\n\t\t\t   Marlon V. Nino\n\t\t\t   Paulo Matocinos\n\t\t\t   Alec A. Roxas\n\t\t\t   Ryan R. Samonte\n\t\t\t   Ike F. Tag-at\n\t\t\t   JC Ubina\n\t\t\t   Eliakim D. Urian");
			printf("\n\t\t\t BSIT 1-3N");
			printf("\n\nDescription:\n\n\tThe title of this Program is HOSPITAL BILLING SYSTEM.This Program was\n made to calculate patient's hospital bill, record, display,edit and delete his or her hospital record.");
			printf("\n\n");
			for(i=0; i<79; i++)
			{
				system("color fc");     
				printf("\xfe"); 
			}
			printf("\n");
			system("pause");
			main_menu();
		}

		default:
		{
			printf("Invalid");
		}
	}
}

//-----------------------------------------------------------------------------//

void add_patient()//void add_patient opening bracket
{
	system("cls");
	system("COLOR F0");
	char ans;
	a = fopen("patient.txt", "a+");//text file	
		system("cls");
		do
		{ //Date admitted loop if wrong input
			system("cls");
			printf("Date of admission:");
			printf("\nMonth:");
				scanf("%d", &patient.month);
			printf("\nDay:");
				scanf("%d", &patient.day);
			printf("\nYear:");
				scanf("%d", &patient.year);
		}while((patient.month > 12) || (patient.day >31) || (patient.year > 2017));
     
       system("cls");       
	while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment)!=EOF)	
	{
	   while(patnum == patient.patientnum){									   						
		    printf("Patient Number:");
			scanf("%d", &patnum);
			};
	}
        patient.patientnum = patnum;
		printf("Enter last name:");
			scanf("%s", &patient.lname);
		printf("\nEnter first name:");
			scanf("%s", &patient.fname);
		printf("\nEnter middle name:");
			scanf("%s", &patient.mname);
		printf("\nAge:");
			scanf("%d", &patient.age);
		printf("\nGender (M/F):");
			scanf("%s", &patient.gender);
		printf("\n\n***Address***\n");
		printf("\nHouse number:");
			scanf("%d", &patient.house_num);
		printf("\nStreet:");
			scanf("%s", &patient.street);
		printf("\nBarangay:");
			scanf("%s", &patient.barangay);
		printf("\nCity/Municipality:");
			scanf("%s", &patient.city);
		printf("\nRoom type:\n1 if Nursery\n2 if Ward\n3 if Private\n4 if V.I.P \n\nInput:");
			scanf("%d", &patient.room_type);
	      
		if(patient.room_type == 1)
		{
	     	strcpy(patient.room, "Nursery");
		}
		if(patient.room_type == 2)
		{
		strcpy(patient.room, "Ward");
		}
		if(patient.room_type == 3)
		{
		strcpy(patient.room, "Private");
		}
		if(patient.room_type == 4)
		{
		strcpy(patient.room, "V.I.P");
		}
		
		printf("\nFloor number:");
			scanf("%d", &patient.floor_num);
		printf("\nRoom number:");
			scanf("%d", &patient.room_num);
		printf("\n*not less than 1000 pesos either greater than 10000 pesos\nDownpayment:");
			scanf("%f", &patient.downpayment);
		
	      
		 //file printf's
		fprintf(a,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
		printf("%s, %s %s was added as a patient.\n", patient.lname, patient.fname, patient.mname);
		fclose(a);
		printf("\n");
		system("pause");
		main_menu();
}//void add_patient closing bracket

//-----------------------------------------------------------------------------//

void view_patient(){
	system("COLOR F0");
	printf("Patient number:");
		scanf("%d", &num);	
	a = fopen("patient.txt" , "r");
	while(!feof(a))
	{
            fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment);
			if(patient.patientnum == num)
				{
					number_present = 1;
					printf("\nPatient Number: %d\nDate of admission: %d/%d/%d\n\nPatient name:%s, %s %s\n\nAge:%d\n\nGender:%s\n\nAddress:#%d %s St. Brgy. %s, %s\n\nRoom type:%s\n\nFloor:%dFloor\n\nRoom No:%d\n\nDownpayment:%.2f Peso/s only", patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
				}
	}
	fclose(a);	
	if(number_present==0)
	{
	printf("Patient not found!");
    }
	getch();
	main_menu();
}

//-----------------------------------------------------------------------------//

void display_all(){
	 system("cls");
	 a = fopen("patient.txt" , "r");
	        printf("#\t\tNAME\t\tAGE\tROOM TYPE\tFLOOR #\tROOM #");
	while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment)!=EOF)
	{
 	        printf("\n%d\t%s, %s %s\t%d\t%s\t\t  %d\t  %d\n", patient.patientnum, patient.lname, patient.fname,patient.mname, patient.age,patient.room, patient.floor_num, patient.room_num);
	}
	fclose(a);
	printf("\n");
	system("pause");
	main_menu();
}

//-----------------------------------------------------------------------------//

void calculate_bill(){
     int roomtype;
     int answer, answer2,answer3,answer4,answer5,answer6,answer7,answer8,answer9,answer10;
	system("COLOR F0");
	printf("Patient number:");
		scanf("%d", &num);	
	a = fopen("patient.txt" , "r+");
	b = fopen("bill.txt" , "a");
	while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment)!=EOF)	
	{		if(patient.patientnum == num)
				{   system("cls");
				 	number_present = 1;			  
					printf("\nPatient Number: %d\nDate of admission: %d/%d/%d\n\nPatient name:%s, %s %s\n\nAge:%d\n\nGender:%s\n\nAddress:#%d %s St. Brgy. %s, %s\n\nRoom type:%s\n\nFloor:%dFloor\n\nRoom No:%d\n\nDownpayment:%.2f Peso/s only", patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
					printf("\n\nDays admitted:");
					 scanf("%d", &patient.daysadmit);
	                system("cls");
				      if(strcmp("Nursery",patient.room)==0)//if the same name
					  {
	     			  patient.roomexpense = (patient.daysadmit * 1170);
	     			  patient.room_rate = 1170;
					  }
					  if(strcmp("Ward",patient.room)==0)//if the same name
					  {
					  patient.roomexpense = (patient.daysadmit * 2120);
					  patient.room_rate = 2120;
					  }
					  if(strcmp("Private",patient.room)==0)//if the same name
					  {
					  patient.roomexpense = (patient.daysadmit * 3000);
					  patient.room_rate = 3000;
					  }
					  if(strcmp("V.I.P",patient.room)==0)//if the same name
					  {
					  patient.roomexpense = (patient.daysadmit * 5500);
					  patient.room_rate = 5500;
					  }
				  printf("Room expense:%d days * %.2f = %.2f\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense);
					  system("pause");
					  system("cls");
				   printf("Labor charges? 1 if yes 2 if no");
				    scanf("%d", &answer);
				      if(answer == 1)
					  {
	   			       int answer1;
	   			       printf("\nNormal delivery? 1 if yes 2 if no");
	   			        scanf("%d", &answer1);
						if(answer1 == 1)
						{
						 patient.labor_charges = patient.labor_charges + 2708;
					    }
						else
						{
						 patient.labor_charges = patient.labor_charges + 5930;
					    }
				      }
					  else if(answer == 2){
					  	patient.labor_charges = 0;
				      }
		       printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges);
					  system("pause");
					  system("cls");
		            printf("Operating room charges? 1 if yes 2 if no");
				     scanf("%d", &answer2);
				     if(answer2 == 1)
					 {
	  			       printf("Input the operation level: From 1-6");
	  			       scanf("%d", &answer3);
	  			       if(answer3 == 1){
					           patient.operating_charges = 1382;
	   						   }
	  				   if(answer3 == 2){
					    patient.operating_charges = 1957;			  
	   					}
	   					if(answer3 == 3){
	    				patient.operating_charges = 2533;
	  				   }
	  				   if(answer3 == 4){
	    			   patient.operating_charges = 3569;
                       }
                       if(answer3 == 5){
                        patient.operating_charges = 4214;
                       }
					   if(answer3 == 6){
					   	patient.operating_charges = 4479;
					   }                      
				     }
				     else if(answer2 == 2){
			 	      patient.operating_charges = 0;
					  }
			  printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\nOperation charges = %.2f\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges, patient.operating_charges);
					  system("pause");
					  system("cls");
				    printf("X-ray charges? 1 if yes 2 if no");
				     scanf("%d", &answer4);
				     if(answer4 == 1){
	 			      system("cls");
			 		  printf("Choose the x-ray and radiological procedure:\t");             
					printf("\n\t\t   _________________________\n");              
					printf("\n\t\t  |(1) - CHEST (2 VIEWS)    |\n"); 
					printf("\n\t\t  |(2) - CHEST (1 VIEW)     |\n");
					printf("\n\t\t  |(3) - ANKLE              |\n");
					printf("\n\t\t  |(4) - FOOT               |\n");
					printf("\n\t\t  |(5) - KNEE               |\n");
					printf("\n\t\t  |(6) - ULTRASOUND         |\n");
					printf("\n\t\t  |(7) - CT HEAD            |\n");
					printf("\n\t\t  |(8) - CT CHEST           |\n");
					printf("\n\t\t  |(9) - MRI BRAIN          |\n");	
					printf("\n\t\t  |(0) - MRA HEAD           |\n");  
					printf("\n\t\t   _________________________ \n");
					 answer5 = getch();
					switch(answer5){
						case '1':
							 {
							  	 patient.xray_charges = 402;
								 break;
							 }
						case '2':
							 {
							  	 patient.xray_charges = 343;
								 break;						 
							 }
						case '3':
							 {
							  	 patient.xray_charges = 473;
								 break;							 
							 }
						case '4':
						     {
							  	 patient.xray_charges = 545;
								 break;					         
							 }
						case '5':
						     {
							  	 patient.xray_charges = 400;
								 break;
					         }
						case '6':
							 {
							  	 patient.xray_charges = 701;
								 break;
							 }
						case '7':
							 {
							  	 patient.xray_charges = 1688;
								 break;
							 }
						case '8':
							 {
							  	 patient.xray_charges = 2347;
								 break;
							 }
						case '9':
							 {
							  	 patient.xray_charges = 2795;
								 break;
							 }
						case '0':
							 {
							  	 patient.xray_charges = 2391;
								 break;
							 }
						default:
						     {
							  	 printf("Invalid Input: BACK TO MAIN MENU");
								 main_menu();
					         }
					      }	
					  }
				     else if(answer4 == 2){
			 	      patient.xray_charges = 0;
					  }
			  system("cls");
			  printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\nOperation charges = %.2f\nX-ray charges = %.2f\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges, patient.operating_charges, patient.xray_charges);
					  system("pause");
					  system("cls");
				   printf("Laboratory charges? 1 if yes 2 if no");
				     scanf("%d", &answer6);
				     if(answer6 == 1){
	 			      system("cls");
		 			  printf("Choose the x-ray and radiological procedure:\t");             
					printf("\n\t\t   _________________________\n");              
					printf("\n\t\t  |(1) - ABG pH/CO2/HCO3    |\n"); 
					printf("\n\t\t  |(2) - BILIRUBIN TOTAL    |\n");
					printf("\n\t\t  |(3) - CALCIUM IONIZED    |\n");
					printf("\n\t\t  |(4) - CHLORIDE BLOOD     |\n");
					printf("\n\t\t  |(5) - CARBON MONOXIDE    |\n");
					printf("\n\t\t  |(6) - GLUCOSE QUANT BLOOD|\n");
					printf("\n\t\t  |(7) - LACTATE ACID       |\n");
					printf("\n\t\t  |(8) - MAGNESIUM          |\n");
					printf("\n\t\t  |(9) - SODIUM SERUM       |\n");	
					printf("\n\t\t  |(0) - RENAL FUNCTION     |\n");  
					printf("\n\t\t   _________________________ \n");
					 answer7 = getch();
					switch(answer7){
						case '1':
							 {
							  	 patient.laboratory_charges = 250;
								 break;
							 }
						case '2':
							 {
							  	 patient.laboratory_charges = 41;
								 break;						 
							 }
						case '3':
							 {
							  	 patient.laboratory_charges = 140;
								 break;							 
							 }
						case '4':
						     {
							  	 patient.laboratory_charges = 51;
								 break;					         
							 }
						case '5':
						     {
							  	 patient.laboratory_charges = 115;
								 break;
					         }
						case '6':
							 {
							  	 patient.laboratory_charges = 32;
								 break;
							 }
						case '7':
							 {
							  	 patient.laboratory_charges = 106;
								 break;
							 }
						case '8':
							 {
							  	 patient.laboratory_charges = 90;
								 break;
							 }
						case '9':
							 {
							  	 patient.laboratory_charges = 78;
								 break;
							 }
						case '0':
							 {
							  	 patient.laboratory_charges = 96;
								 break;
							 }
						default:
						     {
							  	 printf("Invalid Input: BACK TO MAIN MENU");
								 main_menu();
					         }
					      }
					  }
				     else if(answer6 == 2){
			 	      patient.laboratory_charges = 0;
					  }
					  system("cls");
					  		  printf("Professional fees? 1 if yes 2 if no");
				     scanf("%d", &answer7);
				     if(answer7 == 1){
	 			      system("cls");
		 			  printf("Choose the type of doctor/specialists:\t");             
					printf("\n\t\t   _________________________\n");              
					printf("\n\t\t  |(1) - PRIMARY CARE       |\n"); 
					printf("\n\t\t  |(2) - PEDIATRICIANS      |\n");
					printf("\n\t\t  |(3) - ALLOPATIC PHYS.    |\n");
					printf("\n\t\t  |(4) - SURGEONS     	  |\n");
					printf("\n\t\t  |(5) - OBSTETRICIANS      |\n");
					printf("\n\t\t  |(6) - OTOLARYNGOLISTS    |\n");
					printf("\n\t\t  |(7) - OPHTHALMOLOGISTS   |\n");
					printf("\n\t\t  |(8) - HEMATOLOGISTS      |\n");
					printf("\n\t\t  |(9) - ONCOLOGISTS        |\n");	
					printf("\n\t\t  |(0) - RADIOLOGISTS       |\n");  
					printf("\n\t\t   _________________________ \n");
					 answer7 = getch();
					switch(answer7){
						case '1':
							 {
							  	 patient.professional_charges = 2000;
								 break;
							 }
						case '2':
							 {
							  	 patient.professional_charges = 5000;
								 break;						 
							 }
						case '3':
							 {
							  	 patient.professional_charges = 7500;
								 break;							 
							 }
						case '4':
						     {
							  	 patient.professional_charges = 15000;
								 break;					         
							 }
						case '5':
						     {
							  	 patient.professional_charges = 2500;
								 break;
					         }
						case '6':
							 {
							  	 patient.professional_charges = 8000;
								 break;
							 }
						case '7':
							 {
							  	 patient.professional_charges = 8000;
								 break;
							 }
						case '8':
							 {
							  	 patient.professional_charges = 10000;
								 break;
							 }
						case '9':
							 {
							  	 patient.professional_charges = 15000;
								 break;
							 }
						case '0':
							 {
							  	 patient.professional_charges = 1500;
								 break;
							 }
						default:
						     {
							  	 printf("Invalid Input: BACK TO MAIN MENU");
								 main_menu();
					         }
					      }
					  }
				     else if(answer7 == 2){
			 	      patient.professional_charges = 0;
					  }
				  system("cls");
				  printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\nOperation charges = %.2f\nX-ray charges = %.2f\nLaboratory charges = %.2f\nProfessional fees = %.2f\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges, patient.operating_charges, patient.xray_charges, patient.laboratory_charges, patient.professional_charges);
					  system("pause");
					  system("cls");
			
			  		  printf("Philhealth card? 1 if yes 2 if no");
				     scanf("%d", &answer8);
				     if(answer8 == 1){
	 			      system("cls");
		 			  printf("List of case accepted by Philhealth:\t");             
					printf("\n\t\t   ___________________________________________________\n");              
					printf("\n\t\t  |(1) - DENGUE             (11) - HEMODIALYSIS       |\n"); 
					printf("\n\t\t  |(2) - PNEUMONIA          (12) - MALARIA            |\n");
					printf("\n\t\t  |(3) - HYPERTENSION       (13) - CAESARIAN           |\n");
					printf("\n\t\t  |(4) - CEREBRAL INFRACTION(14) - NORMAL DELIVERY    |\n");
					printf("\n\t\t  |(5) - HEMORRHAGE         (15) - TUBERCOLOSIS       |\n");
					printf("\n\t\t  |(6) - GASTROENTERITIS    (16) - KIDNEY DIALYSIS    |\n");
					printf("\n\t\t  |(7) - ASTHMA             (17) - CATARACT           |\n");
					printf("\n\t\t  |(8) - TYPHOID FEVER      (18) - APPENDICITIS       |\n");
					printf("\n\t\t  |(9) - NEWBORN CARE       (19) - BONE CYST          |\n");	
					printf("\n\t\t  |(10)- RADIOTHERAPY       (20) - CASE NOT DEDUCTABLE|\n");  
					printf("\n\t\t   ___________________________________________________\n");
					 scanf("%d", &answer9);
					switch(answer9){
						case 1:
							 {
							  	 strcpy(patient.pcase, "Dengue");
							  	 patient.phhealth_deduc = 8000;
								 break;
							 }
						case 2:
							 {
							  	 strcpy(patient.pcase, "Pneumonia");
							  	 patient.phhealth_deduc = 15000;
								 break;						 
							 }
						case 3:
							 {
							  	 strcpy(patient.pcase, "Hypertension");
							  	 patient.phhealth_deduc = 9000;
								 break;							 
							 }
						case 4:
						     {
							  	 strcpy(patient.pcase, "Cerebral Infraction");
							  	 patient.phhealth_deduc = 28000;
								 break;					         
							 }
						case 5:
						     {
							  	 strcpy(patient.pcase, "Hemorrhage");
							  	 patient.phhealth_deduc = 38000;
								 break;
					         }
						case 6:
							 {
							  	 strcpy(patient.pcase, "Gastroenteritis");
							  	 patient.phhealth_deduc = 6000;
								 break;
							 }
						case 7:
							 {
							  	 strcpy(patient.pcase, "Asthma");
							  	 patient.phhealth_deduc = 9000;
								 break;
							 }
						case 8:
							 {
							  	 strcpy(patient.pcase, "Typhoid Fever");
							  	 patient.phhealth_deduc = 14000;
								 break;
							 }
						case 9:
							 {
							  	 strcpy(patient.pcase, "Newborn Care");
							  	 patient.phhealth_deduc = 1750;
								 break;
							 }
						case 10:
							 {
							  	 strcpy(patient.pcase, "Radiotherapy"); 
							  	 patient.phhealth_deduc = 3000;
								 break;
							 }
					    case 11:
							 {
							  	 strcpy(patient.pcase, "Hemodialysis"); 
							  	 patient.phhealth_deduc = 4000;
								 break;
							 }
						case 12:
							 {
							  	 strcpy(patient.pcase, "Malaria"); 
							  	 patient.phhealth_deduc = 4000;
								 break;						 
							 }
						case 13:
							 {
							  	 strcpy(patient.pcase, "Caesarian"); 
							  	 patient.phhealth_deduc = 19000;
								 break;							 
							 }
						case 14:
						     {
							  	 strcpy(patient.pcase, "Normal Delivery"); 
							  	 patient.phhealth_deduc = 6500;
								 break;					         
							 }
						case 15:
						     {
							  	 strcpy(patient.pcase, "Tubercolosis"); 
							  	 patient.phhealth_deduc = 6500;
								 break;
					         }
						case 16:
							 {
							  	 strcpy(patient.pcase, "Kidney Dialysis"); 
							  	 patient.phhealth_deduc = 14500;
								 break;
							 }
						case 17:
							 {
							  	 strcpy(patient.pcase, "Cataract"); 
							  	 patient.phhealth_deduc = 16000;
								 break;
							 }
						case 18:
							 {
							  	 strcpy(patient.pcase, "Appendicitis"); 
							  	 patient.phhealth_deduc = 6000;
								 break;
							 }
						case 19:
							 {
							  	 strcpy(patient.pcase, "Bone Cyst"); 
							  	 patient.phhealth_deduc = 8260;
								 break;
							 }
						case 20:
							 {
							  	 strcpy(patient.pcase, "Not accepted by Philhealth"); 
							  	 patient.phhealth_deduc = 0;
								 break;
							 }
						default:
						     {
							  	 printf("Invalid Input: BACK TO MAIN MENU");
								 main_menu();
					         }
					      }
					  }
				     else if(answer8 == 2){
			 	      patient.professional_charges = 0;
					  }
				  system("cls");
				  printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\nOperation charges = %.2f\nX-ray charges = %.2f\nLaboratory charges = %.2f\n______________________________________\nLess:\n    Philhealth deduction(including Pro Fees deduction) = %.2f\n	Case:%s\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges, patient.operating_charges, patient.xray_charges, patient.laboratory_charges, patient.phhealth_deduc, patient.pcase);
	patient.expense = ( patient.roomexpense + patient.labor_charges + patient.operating_charges + patient.xray_charges + patient.laboratory_charges ) - patient.downpayment; 	
	patient.total_expense = (patient.expense - patient.phhealth_deduc);	
	              system("pause");
					  system("cls");
				   printf("Patient discount (for PWD's & Senior citizens)? 1 if yes 2 if no");
				    scanf("%d", &answer10);
				      if(answer10 == 1)
					  {
	   			        patient.twenty_percent = patient.total_expense * .20;
	   			        patient.discount = patient.total_expense - patient.twenty_percent;
				      }
					  else if(answer10 == 2){
					  	patient.discount = patient.total_expense;
				      }
 				  printf("\nRoom expense:%d days * %.2f = %.2f\nLabor charges = %.2f\nOperation charges = %.2f\nX-ray charges = %.2f\nLaboratory charges = %.2f\n______________________________________\nLess:\n    Philhealth deduction = %.2f\n    Downpayment = %.2f\n	Discount = %.2f\n--------------------------------------\nTOTAL = %.2f Peso(s) only.\n______________________________________\n______________________________________\n\n", patient.daysadmit, patient.room_rate, patient.roomexpense, patient.labor_charges, patient.operating_charges, patient.xray_charges, patient.laboratory_charges, patient.phhealth_deduc, patient.downpayment, patient.twenty_percent, patient.discount);
					  system("pause");
					  system("cls");		 
	fprintf(b, "%d\t%s, %s %s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f= %.2f\n", patient.patientnum, patient.lname, patient.fname, patient.mname, patient.roomexpense, patient.labor_charges, patient.operating_charges, patient.xray_charges, patient.laboratory_charges,patient.downpayment,patient.phhealth_deduc, patient.discount); 		
	
				}
	}
	
	fclose(a);	
	fclose(b);
	if(number_present==0)
	{
	printf("Patient not found!");
    }

    
}
          
//-----------------------------------------------------------------------------//

void bill_deleting(){
	 int pay1;
    printf("Pay now? 1 if YES 2 if NO");
     scanf("%d", &pay1);
    if(pay1 == 1){
		char ans, lname[30];
			int succ=0;
			printf("Discharge patient now? [Y/N]: ");
			scanf("%s", &ans);
			
			if(toupper(ans)== 'Y')
			{
					printf("Kindly re-enter the patient's last name: ");
					scanf("%s", &lname);
					
					a = fopen("patient.txt","r");
					t = fopen("temp.txt","w");
					
					while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment)!=EOF)
					{
						// start of while
						if(strcmp(lname,patient.lname)==0)//if the same name
						{
							printf("\nPatients lastname: %s", patient.lname);
							printf("\nAre you sure you want to discharge the patient now?[Y/N]");
							scanf("%s", &ans);
							if(toupper(ans)== 'Y')
							{ 
								printf("\nSuccesfully Discharged");
								succ=1;
								
							}
							else{
								fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
								succ=1;
									}
						}//end of not the same 
						
						else{//not the same
							fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
						}
					}//end of while scanf
					
					fclose(a);
					fclose(t);
					remove("patient.txt");
					rename("temp.txt","patient.txt");
					
					if(succ==0){
						printf("\nPatient not found");
					}	      
	      			getch();
			 system("pause");
			 main_menu();
			}// end of toupper
		}		
	main_menu();
}
	 
//-----------------------------------------------------------------------------//

void deleting(){
			char ans, lname[30];
			int succ=0;
			printf("Do you want to delete Record [Y/N]: ");
			scanf("%s", &ans);
			
			if(toupper(ans)== 'Y')
			{
				do{
					printf("Enter Last name to be deleted: ");
					scanf("%s", &lname);
					
					a = fopen("patient.txt","r");
					t = fopen("temp.txt","w");
					
					while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment)!=EOF)
					{
						// start of while
						if(strcmp(lname,patient.lname)==0)//if the same name
						{
							printf("\nPatients lastname: %s", patient.lname);
							printf("\nAre you sure you want to delete this Record[Y/N]");
							scanf("%s", &ans);
							if(toupper(ans)== 'Y')
							{ 
								printf("\nSuccesfully Deleted");
								succ=1;
								
							}
							else{
								fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
								succ=1;
									}
						}//end of not the same 
						
						else{//not the same
							fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
						}
					}//end of while scanf
					
					fclose(a);
					fclose(t);
					remove("patient.txt");
					rename("temp.txt","patient.txt");
					
					if(succ==0){
						printf("\nPatient not found");
					}	      
	      			getch();
	      		
	      			printf("\nDo you want to delete more[Y/N]:");
	      			scanf("%s", &ans);
				}while(toupper(ans)=='Y');
			 system("pause");
			 main_menu();
			}// end of toupper
				}

//-----------------------------------------------------------------------------//

void update(){
	 
	char answer, laname[30];
	int success=0;
system("cls");

	
	printf("\nDo you want to update a file (N/Y): ");
	scanf("%s", &answer);
	
	
		
	
	if(toupper(answer)=='Y'){
		do{
			printf("Enter the Patient lastname to Update: ");
			scanf("%s",&laname);
			a = fopen("patient.txt","r");
			t = fopen("temp.txt", "w");
			while(fscanf(a,"%d%d%d%d%s%s%s%d%s%d%s%s%s%s%d%d%f", &patient.patientnum, &patient.month, &patient.day, &patient.year, &patient.lname, &patient.fname, &patient.mname, &patient.age, &patient.gender, &patient.house_num, &patient.street, &patient.barangay, &patient.city, &patient.room, &patient.floor_num, &patient.room_num, &patient.downpayment) != EOF){
				// start of while scanf
				if(strcmp(laname,patient.lname)==0)// if the same last name
				{	system("cls");
					printf("Choose the info you want to update:\t");             
					printf("\n\t\t   _________________________\n");              
					printf("\n\t\t  |(1) - PATIENT NUMBER     |\n"); 
					printf("\n\t\t  |(2) - ADMISSION DATE     |\n");
					printf("\n\t\t  |(3) - NAME               |\n");
					printf("\n\t\t  |(4) - AGE                |\n");
					printf("\n\t\t  |(5) - GENDER             |\n");
					printf("\n\t\t  |(6) - ROOM TYPE          |\n");
					printf("\n\t\t  |(7) - FLOOR NUMBER       |\n");
					printf("\n\t\t  |(8) - ROOM NUMBER        |\n");
					printf("\n\t\t  |(9) - DOWNPAYMENT        |\n");	
					printf("\n\t\t  |(0) - RETURN TO MENU     |\n");  
					printf("\n\t\t   _________________________ \n");   
					choice = getch();
					switch(choice){//case opening
                        case '1':
							 {
							   	  system("cls");
							   	  printf("New patient number:");
							   	   scanf("%d", &input.patientnum);
							   	   patient.patientnum = input.patientnum;
							   	   break;  
		   	   				 }
   				        case '2':
							 {    system("cls");
							   	  do
								  { //Date admitted loop if wrong input
								  system("cls");
								  printf("Date of admission:");
								  printf("\nMonth:");
								  scanf("%d", &input.month);
								  printf("\nDay:");
								  scanf("%d", &input.day);
								  printf("\nYear:");
								  scanf("%d", &input.year);
								  }while((input.month > 12) || (input.day > 31) || (input.year > 2016)); 
   				                  patient.month = input.month;
   				                  patient.day = input.day;
   				                  patient.year = input.year;
								  break;
							  }
   				        case '3':
					         {	  system("cls");
						   	      int want;
						   	      printf("\t\t   Choose the info you want to update:\t\n\n");             
								  printf("\n\t\t   ___________________\n");              
								  printf("\n\t\t  |(1) - LAST NAME    |\n\n"); 
								  printf("\n\t\t  |(2) - FIRST NAME   |\n\n");
								  printf("\n\t\t  |(3) - MIDDLE NAME  |\n\n");
								  printf("\n\t\t   ___________________\n");
								  printf("Your choice?");
								   scanf("%d", &want);
								  
								  if(want == 1)
								  {
  			     				    printf("New last name:");
  			     				     scanf("%s", &input.lname);
  			     				     strcpy(patient.lname, input.lname);
							      }
							      if(want == 2)
								  {
			   		                printf("New first name:");
			   		                 scanf("%s", &input.fname);
			   		                 strcpy(patient.fname, input.fname);
							      }
								  if(want == 3)
								  {
								    printf("New middle name");
									 scanf("%s", &input.mname);
									 strcpy(patient.mname, input.mname);
							      }
								  break;
				             }
						case '4':
							 {
							   	  system("cls");
							   	  printf("New age:");
							 	   scanf("%d", &input.age);
			 	                  patient.age = input.age;
			 	                  break;
						     }
			            case '5':
							 {
							   	  system("cls");
							   	  printf("New gender:");
							   	   scanf("%s", &input.gender);
						   	       strcpy(patient.gender, input.gender);
						   	       break;
					         }
                        case '6':
							 {
							   	   system("cls");
							   	   printf("\nRoom type:\n1 if Nursery\n2 if Ward\n3 if Private\n4 if V.I.P \n\nInput:");
								   scanf("%d", &input.room_type);
	      
 			    				    if(input.room_type == 1)
								   	{
	     						   	  strcpy(patient.room, "Nursery");
									}
									if(input.room_type == 2)
									{
									  strcpy(patient.room, "Ward");
									}
									if(input.room_type == 3)
									{
									  strcpy(patient.room, "Private");
									}
									if(input.room_type == 4)
									{
									  strcpy(patient.room, "V.I.P");
									}
									break;
							 }
		
                        case '7':
							 {
			   				      system("cls");
	   	                          printf("New floor number:");
	   	                           scanf("%d", &input.floor_num);
   	                              patient.floor_num = input.floor_num;
   	                              break;
						     }
			            case '8':
							 {
							   	  system("cls");
							   	  printf("New room number:");
							   	   scanf("%d", &input.room_num);
						   	      patient.room_num = input.room_num;
						   	      break;
				             }
	                    case '9':
							 {
							   	  system("cls");
							   	  printf("New amount of downpayment:");
							   	   scanf("%f", &input.downpayment);
						   	      patient.downpayment = input.downpayment;
						   	      break;
						     }
			            case '0':
							 {
							   	  system("cls");
							   	  main_menu();
							   	  break;
						     }
			            default:
							 {
								  system("cls");
							   	  main_menu();
							   	  break;
                             }
								  	 	   	    
					}//case closing   	      

					fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
					
					printf("\n\n Patient was successfully Updated!!! press Enter to continue!");
					success=1;
				} // end of found
				else{ //not the same
					fprintf(t,"%d\t%d\t%d\t%d\t%s\t%s\t%s\t%d\t%s\t%d\t%s\t%s\t%s\t%s\t%d\t%d\t%.2f\n",patient.patientnum, patient.month, patient.day, patient.year, patient.lname, patient.fname,patient.mname, patient.age, patient.gender, patient.house_num, patient.street, patient.barangay, patient.city,patient.room, patient.floor_num, patient.room_num, patient.downpayment);
				} //end of not found
				}// end of while fscanf
				
				fclose(a);
				fclose(t);
				remove("patient.txt");
				rename("temp.txt","patient.txt");
				if(success==0){
				
				printf("\nRecord not Found!!");
								}
								
				getch();
				printf("\nDo you want to Edit more [Y/N]: ");
				scanf("%s", &answer);
		}//end of do
		while(toupper(answer)== 'Y');
		system("pause");
		main_menu();
		}//end of toupper
}
	
			   	  		 			  //END OF PROGRAM//
  									    //DEVELOPERS//
                  //Ryan Joseph R. Samonte, Eliakim D. Urian, Ike F. Tag-at//
                 //Marlon V. Ni�o, Alec Brian A. Roxas, John Carlo F. Ubi�a//
                 		         //Jose Paulo Flores Matoci�os//
             		     //DATE STARTED: 1st Day of March year 2016//
             		     //DATE FINISHED:8th Day of March year 2016//





