/*

file: main.cpp

*/

#include <iostream>

#include "main.h"

#include <string.h>

#include <stdio.h>

#include <time.h>

#. Exit";

						cout<<"\n\nEnter your choice : ";							cin>>outerChoice;

	if( outerChoice == 1 )

		, ADMINUSER) == 0) && 

								    ( strcmp(adminPassword, ADMINPASSWORD) == 0)){

	getchar(); getchar();

		system("cls");

			int innerChoice = 0;

				while(innerChoice != 9){

					cout<<"\n\n Admin Login is Successful !! Press any key to continue..";	

						cout<<"\n1. Add Book";

							cout<<"\n2. Update Book";

								cout<<"\n3. Delete Book";

									cout<<"\n4. List of All Books";

										cout<<"\n9. Exit";

											cout<<"\n\n Enter your choice : ";

												cin>>innerChoice;

												        switch(innerChoice){

												            	case 1: addBook(); break;

												            	    	case 2: updateBook(); break;

												            	    	    	case 3: deleteBook(); break;

												            	    	    	    	case 4: listOfAllBooks(); break;

												            	    	    	    	    	default: cout<<"\n\n Invalid Choice. Press any key to continue..";

												            	    	    	    	    	    	         getchar();

		, USERPASSWORD) == 0)){

				    		int innerChoice = 0;

				    				while(innerChoice != 9){

				    						system("cls");

				    							     	cout<<"\n1. Borrow a Book";

				    							     		     	cout<<"\n2. Return a Book";

				    							     		     		     	cout<<"\n3. List of All Books";

				    							     		     		     		     	cout<<"\n9. Exit";  

				    							     		     		     		     			cout<<"\n\n Enter your choice : ";

				    							     		     		     		     					cin>>innerChoice; 	

		switch(innerChoice){

				case 1: borrowBook();break;

						case 2: returnBook();break;

								case 3: listOfAllBooks(); break;

										case 9: break;

												default: cout<<"\n\n Error: Invalid Choice. Press any key to continue..";

														getchar();getchar();

		}

		}

				system("cls");

						}

								else

										{

												cout<<"\n\n Error : Invalid Credentials. Press any key to conitnue";

														getchar();getchar();

		}

			}

				else if(outerChoice!=9){

						cout<<"\n\n Invalid choice. Press any key to continue..";

								getchar();getchar();

									}

										else

											{

													cout<<"\n\n Thank you for using it !! Press any key to exit";

															getchar();getchar();

																}

																}

return 0;

}

int addBook(){

int bookid;

char bookname[20];

char bookauthor[20];

int year, month, day;

time_t t = time(NULL);

struct tm tm = *localtime(&t);

year = tm.tm_year + 1900;

month = tm.tm_mon +1;

day = tm.tm_mday;

system("cls");

cout<<"\n ---- Add a new Book ----";

cout<<"\n\n Enter 4 digit numberic id :";

cin>>bookid;

cout<<"\n Enter book name : ";

cin>>bookname;

cout<<"\n Enter book author : ";

cin>>bookauthor;

char filename[20];

sprintf(filename,"%d%s",bookid,".dat");

ofstream file(filename);

file<<bookname<<"\n";

file<<bookauthor<<"\n";

file<<year<<"\n";

file<<month<<"\n";

file<<day<<"\n";

file.close();

cout<<"\n File Saved Successfully !!";

getchar(); getchar();	

}

int deleteBook(){

}

int updateBook(){

}

int listOfAllBooks(){

}

int borrowBook(){

}

int returnBook(){

}

int adminLogin(){

}

int userLogin(){

}

/*---------------  End of Main.cpp -----------*/

/* ---------------- main.h ----------------- */

#define ADMINUSER "admin"

#define ADMINPASSWORD "admin123"

#define USER "user"

#;

int borrowBook();

int returnBook();

int adminLogin();

int userLogin();

/* - -------------------- end of main.h -----------------*/
