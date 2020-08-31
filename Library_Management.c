

                     /*  LIBRARY MANAGEMENT SYSTEM  */

                    /* DEVELOPED BY ARITRA GUPTA BAKSI  */


#include<stdio.h>
#include<stdlib.h>
typedef struct BOOK{
	char person_name[30];

	char book_name[50];
	char author_name[20];
	int book_price;
	
}BOOK;
int add_book();  //Declaring add_book Function
void showdetails();  //Declaring Showdetails Function
void search_book();  //Declaring search_book Function
BOOK *book;    //Global Book type Pointer
int count=0;
int record_no; //Global Varibale for dynamic Memory Allocation
int i;

/* Defination add_book Function */

int add_book()
{
    system("cls");
	printf("******************ADD BOOK*******************\n\n");
	    printf("Enter Person Name : ");
	    scanf("%s",book[count].person_name);
		printf("Enter Book Name : ");
		scanf("%s",book[count].book_name);
		printf("Enter Autor Name : ");
		scanf("%s",book[count].author_name);
		printf("Enter Price of the Book (INR) : ");
		scanf("%d",&book[count].book_price);
		count++;
	
}

/* Defination Of Showdetails Funtion */

void showdetails()
{
	system("cls");
	system("color 71");
	printf("\n\n\t\t@@@@@@@@@@@Library Management System@@@@@@@@@@@\n\n");
	printf("\n\n\t\t*********************************************************\n");
	printf("\n\t\tBook Name\t\tAuthor Name\t\tPrice(INR)\n\n");
	printf("\n\t\t***********************************************************\n\n");
   for(i=0 ; i<count ; i++)
	{
	  printf("\t\t\t%s,book[i].person_name");
	  printf("\t\t%s",book[i].book_name);
	  printf("\t\t\t%s",book[i].author_name);
	  printf("\t\t\t%d\n\n\n",book[i].book_price);  
	}		
}

/* Defination of Search_book Funtion */

void search_book()
{
	system("cls");
	system("color 71");
    char search[30];
    printf("Enter the Book Name : ");
    scanf("%s",search);
    
    printf("\n\n\t\t@@@@@@@@@@@Library Management System@@@@@@@@@@@\n\n");
   	printf("\n\n\t\t*********************************************************\n");
	printf("\n\t\tPerson Name\t\tBook Name\t\tAuthor Name\t\tPrice\n\n");
	printf("\n\t\t***********************************************************\n\n");
    for(i=0 ; i<count ; i++)
    {
    	if(strcmp(search,book[i].book_name)==0)
    	{
    	       printf("\t\t%s",book[i].person_name);
    	       printf("\t\t%s",book[i].book_name);
	           printf("\t\t\t%s",book[i].author_name);
	           printf("\t\t\t%d\n\n\n",book[i].book_price);  
		}
		
	}
}

/* Defination of update_book Function */

void update_book()
{
     system("cls");
     system("color 71");
	 char update[20];
	 printf("Enter Book Name : ");
	 scanf("%s",update);
	 
	for(i=0 ; i<count ; i++)
    {
    	if(strcmp(update,book[i].book_name)==0)
    	{
    		    printf("\t\t%s",book[i].person_name);
    	       printf("Book Name : %s\n\n",book[i].book_name);
	           printf("Author Name : %s\n\n",book[i].author_name);
	           printf("Book Price (INR) : %d \n\n",book[i].book_price); 
	           
			   	printf("\n\n");
			   	
			   	/*Updating the selected Book*/
		
	        	printf("\tUpdate Your library\n");
	        	printf("*********************************************\n");
	  	         printf("\t\t%s",book[i].person_name);
	        	printf("Enter Book Name : ");
	        	scanf("%s",book[i].book_name);
	        	printf("Enter Autor Name : ");
	        	scanf("%s",book[i].author_name);
	        	printf("Enter Price of the Book : ");
	        	scanf("%d",&book[i].book_price);
		      
		}
	}	
	
	
	 	
}

/* Defination of Remove_book Funtion */

void remove_book()
{
	system("cls");
	system("color 71");
	char remove[20];
	printf("Enter the Book Name Which you want to remove : ");
	scanf("%s",remove);
	for(i=0 ; i<count ; i++)
    {
    	if(strcmp(remove,book[i].book_name)==0)
    	{
    		   printf("You want to Remove this Book\n\n\n");
    		  
    		    printf("Person Name : %s\n",book[i].person_name);
    	       printf("Book Name : %s\n",book[i].book_name);
	           printf("Author Name : %s\n",book[i].author_name);
	           printf("Book Price (INR) : %d \n",book[i].book_price); 
			   book[i]=book[i+1]; 
			   count--;
		}
		      
		      
	}
		  printf("After Remove the Book\n\n\n");
		  printf("\n\n\t\t@@@@@@@@@@@Library Management System@@@@@@@@@@@\n\n");
          printf("\n\n\t\t*********************************************************\n");
          printf("\n\t\tBook Name\t\tAuthor Name\t\tPrice(INR)\n\n");
	      printf("\n\t\t***********************************************************\n\n");
	
	for(i=0 ; i<count ; i++)
	{
		        printf("\t\t%s",book[i].person_name);
    	       printf("\t\t%s",book[i].book_name);
	           printf("\t\t\t%s",book[i].author_name);
	           printf("\t\t\t%d\n\n\n",book[i].book_price);  
	}
}




void main()
{
    
    printf("Enter the number you want to Add : ");
    scanf("%d",&record_no);
    
    // Dynamically allocate memory using calloc()
    
	book=(BOOK*)calloc(record_no,sizeof(BOOK));
	int choice;

	choose:
	printf("\n1.Add Book\n2.Show Details\n3.Search Book\n4.Update Book\n5.Remove Book\n6.Exit");
	printf("\n\nChoose a Number : ");
	scanf("%d",&choice);

	switch(choice)
	{
		char ans,ans1;  
		case 1 : 
		      add_book();   	//Calling the add_book funtion
		      goto choose;
		      
		case 2:
		     showdetails();   	//Calling showdetails funtion
			 goto choose;   
		
		case 3:
			 search_book();      //Calling search_book Function
			 goto choose;
			 
		case 4:
		     update_book();       //Calling update_book Function
			 goto choose;	 
			 
		case 5:
		     remove_book();       //Calling remove_book Function
			 goto choose;
			 	
		case 6:                      // exit Function 
	         exit: 
	         system("cls");
		     printf("\n Want to Exit(y/n): ");
		     scanf("%c",&ans);
		     if(ans=='y')
			 {
		     	system("cls");
		     	printf("You have succesfully Logged out.\n");
		     }
		     
		    else if(ans=='n')
				 {
				 	goto choose;
				 }
			
			 else
			 {
			 	printf("\n Please Enter a Valid Answer");
			 	goto exit;
			 }              	 
		     	 
	}	
}

             /***************************    END     *******************************/
             
             
