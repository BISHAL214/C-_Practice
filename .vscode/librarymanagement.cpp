#include<iostream>
using namespace std;

void book_details()
 {
    cout << "\n\n\n\t01. Book Name - Anna Karenina";
    cout << "\n\tAuthor Name - Leo Tolstoy";

	cout << "\n\n\n\t 02. Book Name - Madame Bovary";
	cout<< "\n\t Author Name - Gustav Flaubert";

	cout << "\n\n\n\t 03. Book Name - War and Peace";
	cout<< "\n\t Author Name - Leo Tolstoy";

	cout << "\n\n\n\t 04. Book Name - Lolita";
	cout<< "\n\t Author Name - Vladimir Nabokov";

	cout << "\n\n\n\t 05. Book Name - The Adventures of Huckleberry Finn";
	cout<< "\n\t Author Name - Mark Twain";

	cout << "\n\n\n\t 06. Book Name - Hamlet";
	cout<< "\n\t Author Name - William Shakespeare";

	cout << "\n\n\n\t 07. Book Name - The Great Gatsby";
	cout<< "\n\t Author Name - F. Scott Fizgerald";

	cout << "\n\n\n\t 08. Book Name - In Search of Lost Time";
	cout<< "\n\t Author Name - Marcel Proust";

	cout << "\n\n\n\t 09. Book Name - The Stories of Anton Chekhov";
	cout<< "\n\t Author Name - Anton Checkhov";

 }

 void sell_book()
 {


	cout << "\n\n\n\t01. Book Name - Anna Karenina";
    cout << "\n\tAuthor Name - Leo Tolstoy";
	cout << "\n\t Price - 1200 Rs.";

	cout << "\n\n\n\t 02. Book Name - Madame Bovary";
	cout<< "\n\t Author Name - Gustav Flaubert";
	cout << "\n\t Price - 1500 Rs.";

	cout << "\n\n\n\t 03. Book Name - War and Peace";
	cout<< "\n\t Author Name - Leo Tolstoy";
	cout << "\n\t Price - 1800 Rs.";

	cout << "\n\n\n\t 04. Book Name - Lolita";
	cout<< "\n\t Author Name - Vladimir Nabokov";
	cout << "\n\t Price - 1500 Rs.";

	cout << "\n\n\n\t 05. Book Name - The Adventures of Huckleberry Finn";
	cout<< "\n\t Author Name - Mark Twain";
	cout << "\n\t Price - 1250 Rs.";

	cout << "\n\n\n\t 06. Book Name - Hamlet";
	cout<< "\n\t Author Name - William Shakespeare";
	cout << "\n\t Price - 1670 Rs.";

	cout << "\n\n\n\t 07. Book Name - The Great Gatsby";
	cout<< "\n\t Author Name - F. Scott Fizgerald";
	cout << "\n\t Price - 1490 Rs.";

	cout << "\n\n\n\t 08. Book Name - In Search of Lost Time";
	cout<< "\n\t Author Name - Marcel Proust";
	cout << "\n\t Price - 1200 Rs.";

	cout << "\n\n\n\t 09. Book Name - The Stories of Anton Chekhov";
	cout<< "\n\t Author Name - Anton Checkhov";
	cout << "\n\t Price - 1200 Rs.";

	char ch4;
	do{
	cout << "\n\n\t Enter Book No.:";
	cin >> ch4;

	switch(ch4)
	{
		case '1':
		           cout << "\n\tYou Entered Anna Karenina Book";
				   break;
		case '2':
					cout << "\n\tYou Entered Madame Bovary Book";
					break;
		case '3':
					cout << "\n\tYou Entered War and Peace Book";
					break;
		case '4':
					cout << "\n\tYou Entered Lolita Book";
					break;
		case '5':
					cout << "\n\tYou Entered The Adventures of Huckleberry Finn Book";
					break;
		case '6':
					cout << "\n\tYou Entered Hamlet Book";
					break;
		case '7':
					cout << "\n\tYou Entered The Great Gatsby Book";
					break;
		case '8':
					cout << "\n\tYou Entered In Search of Lost Time Book";
					break;
		case '9':
					cout << "\n\tYou Entered The Stories of Anton Chekhov Book";
					break;
		default:
					cout << "\a";
	}
	}while(ch4!='9');
 }

 void lend_book()
 {

 }

 void intro()
 {
	int id;
	cout << "\n\n\n\t #################### WELCOME TO THE LIBRARY MANAGEMENT SYSTEM ####################";
	cout<<"\n\n\n\tEnter Your Id:";
	cin>>id;

	cout<<"\n\n\tCollege : SILIGURI INSTITUTE OF TECHNOLOGY";
	cin.get();
 }


int main()
{
	
	char ch;
	intro();
	do
	{
		cout<<"\n\n\n\t MAIN MENU";
		cout<<"\n\n\t01. BOOK DETAILS";
		cout<<"\n\n\t02. SELL BOOK";
		cout<<"\n\n\t03. LEND BOOK";
		cout<<"\n\n\t04. EXIT";
		cout<<"\n\n\tPlease Select Your Option (1-4): ";
		cin>>ch;
		switch(ch)
		 {
			case '1': 
				 	book_details();
					break;
			case '2':   sell_book();
				 	break;

			case '3':   lend_book();
				 	break;

			case '4':   return 0;

			default :   cout<<"\a";
		 }
	 } while(ch!='4');
 }