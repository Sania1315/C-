#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
char portal ( string x );

char cafe( string y);

void display();
int winchecker();
char array[9]={'1','2','3','4','5','6','7','8','9'};

void guess_the_number();
int main() 
{   int opt;
	string x;
	char a,game;
	cout<<"\n\n\n \t\t\t\t W E L C O M E  T O  A I R  U N I V E R S I T Y  I S L A M A B A D"<<endl;
	cout<<"\t\t _______________________________________________________________________________________________________ "<<endl<<endl<<endl;
	cout<<"\t\t\t Press : \n\t\t\t\t 1 for TEACHERS PORTAL \n\t\t\t\t 2 for UNIVERSITY CAFE \n\t\t\t\t 3 for UGAMING ZONE \n\n\t\t\t\t     OPTION....";
	cin>>opt;
	if (opt==1)
	{portal (x);}
    
     if (a=='y' || a=='Y')
	{ a=portal (x);}
	
	
	string y;
	if ( opt==2 )
	{cafe (y);}
	
	
	if (opt==3){
	cout<<"\n\n\n \t\t\t Press T for TIC TAC TOE & G for GUESS THE NUMBER : ";
	cin>>game;}
	
	if (game=='G')
	{cout<<endl<<endl<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t\t\t\t\t\tG U E S S  T H E  N U M B E R  G A M E"<<endl;
		cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	 guess_the_number();}
	
	int player,option,WinCheck,choice;
	if (game=='T')
	{
	player=1;//intialzing player =1
	char replace,opt;
	string player1,player2;
	system("cls");
	cout<<endl<<endl;
	cout<<endl<<endl<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t\t\t\t\t\t[ W E L C O M E  T O  T I C  T A C  T O E ]"<<endl;
		cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t\t\t =>> Press 1 to start the game ";
	cin>>choice;
	 cout<<endl;

	if(choice==1){
		system("cls");
		
	   cout<<"\n\n Enter player1 name : ";
	     cin>>player1;
	     cout<<endl;
	   cout<<" Player 1 Name = "<<player1<<endl<<" Symbol assigned = [X]"<<endl<<endl;
	   cout<<" Enter player2 name : ";
	    cin>>player2;
	   cout<<" Player 2 name : "<<player2<<endl<<" Symbol assigned = [O]"<<endl;}
do{  
	   display();
	   //condition to return value of player either 0 or 1 after each iteratio
 if(choice==1)
	{ 
	 if(player%2==1)
	      { 
	     	//for player 1
	     	player=1;
	     	replace='X';
		  } 
	   else if(player%2==0)
		  {
		 	//for player 2
		 	player=2;
		 	replace='O';
		  }
	   if(player==1)
		 {
		  cout<<"\t"<<player1<<"'s turn Enter a number 1 to 9: ";
         }
       else if(player==2)
        {
         cout<<"\t"<<player2<<"'s turn Enter a number 1 to 9: ";
        }
      cin>>option;//input from user
     //condtions th check if the selected box is empty or not
     if(option==1 && array[0]=='1'){
    	array[0]= replace;
	}
	else if(option==2 && array[1]=='2'){
    	array[1]= replace;
	}
	else if(option==3 && array[2]=='3'){
    	array[2]= replace;
	}
	else if(option==4 && array[3]=='4'){
    	array[3]= replace;
	}
	else if(option==5 && array[4]=='5'){
    	array[4]= replace;
	}
	else if(option==6 && array[5]=='6'){
    	array[5]= replace;
	}
	else if(option==7 && array[6]=='7'){
    	array[6]= replace;
	}
	else if(option==8 && array[7]=='8'){
    	array[7]= replace;
	}
	else if(option==9 && array[8]=='9'){
    	array[8]= replace;
	}
	else{
	cout<<"\t\t :( Invalid option enter again from 1 to 9";
	player--;}
    WinCheck=winchecker();
    player++;}
}
while(WinCheck==2);
display();
    switch(WinCheck)
    {
    	//Wincheck 0 means game is draw
    	case 0:
    		{
    	    cout<<"\t\t\t\t\t <<<<<<M A T C H  D R A W>>>>>";
			}
			break;
		//win check 1 mean either player 1 or 2 has won the game
    	case 1:
    		{
    		player=--player;
    		if(player==2){
    		if(choice==1){
			}
    		}
			else{
    		cout<<"\t\t\t\t P L A Y E R "<<player1<<" W I N S ..... C O N G R A T U L A T I O N S"<<endl<<endl;
    		}
    		if(player==1){
    		if(choice==2){
    		}
				}
			else{
    		cout<<"\t\t\t\t P L A Y E R "<<player2<<" W I N S ..... C O N G R A T U L A T I O N S"<<endl<<endl;
			}
		break;}
return 0; }
}

}

char portal ( string x )
    { int selection,option;
    float labp[15],labr[15];  
	  string  classes[4];
	
	cout<<endl<<endl<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t\t\t\t\t      W E L C O M E  T O  T E A C H E R ' S   P O R T A L"<<endl;
	cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<endl<<"\t\t\t> Enter classes here : "<<endl;
	for ( int i=0; i<4; i++)
		{cout<<"\t\t\t\t\t      ";
		  cout<<i+1<<" - ";
		  cin>>classes[i];
    	 getline(cin,classes[i]);
		 }
		 
		 cout<<endl<<endl;
		 
	 	do { 
	cout<<"\t\t\t> Now press 1,2,3 or 4 for class selection : ";
	cin>>selection;
	if ( selection == 1)
	{ cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";
	cout<<"\n  \t\t\t\t   W E L C O M E  T O  C E - 1 1 2 L  M T S  l l - B"<<endl;
	cout<<"\t\t\t`````````````````````````````````````````````````````````````````````";}
	if ( selection == 2)
	{ cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";
	cout<<"\n  \t\t\t\t   W E L C O M E  T O  C E - 1 1 2 L  M T S  l l - A";
	cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";}	 
	if ( selection == 3)
	{ cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";
	cout<<"\n  \t\t\t\t   W E L C O M E  T O  C E - 1 1 2 L  B E E P  l l - A";
	cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";}
	if ( selection == 4)
	{ cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````";
	cout<<"\n  \t\t\t\t   W E L C O M E  T O  C E - 1 1 2 L  B E E P  l l - B";
	cout<<"\n\t\t\t`````````````````````````````````````````````````````````````````````"; }
	} while (selection != 1 && selection != 2 && selection !=3 && selection !=4);
	
	int strength;
	string name[strength];
	int rollnum[strength];
	float midterm[strength],finalterm[strength],cea[strength];
	cout<<"\n\n\t\t\t ENTER NUMBER OF STUDENT IN THE CLASS : ";
	cin>>strength;
	cout<<"\n\n \t\t\t\t   W E L C O M E  T O  S T U D E N T   P R O F I L E"<<endl;
			 for (int i=0; i<strength; i++)
			 {  
			 cout<<"\n\n\t\t\t > Enter Name here : ";
		     cin>>name[i];
    	     getline(cin,name[i]);
			 cout<<"\t\t\t > Enter Roll Number here : ";
			 cin>>rollnum[i];

		

	{
	cout<<"\n\n\t\t\t ******************************************************************************************";
	cout<<"\n \t\t\t\t       W e l c o m e  t o  L A B  P E R F O R M A N C E  S E C T I O N"<<endl;
	cout<<"\t\t\t ******************************************************************************************"<<endl<<endl;
	for (int i=0; i<15; i++)
	{cout<<"\t\t\t\t\t=> Enter Marks for Lab Performance Number "<<i+1<<" : ";
	cin>>labp[i];}
	}
	
 
	{
	cout<<"\n\n\t\t\t ******************************************************************************************";
	cout<<"\n \t\t\t\t       W e l c o m e  t o  L A B  R P O R T  S E C T I O N"<<endl;
	cout<<"\t\t\t ******************************************************************************************"<<endl<<endl;
	for (int i=0; i<15; i++){
	cout<<"\t\t\t\t\t=> Enter Marks for Lab Report Number "<<i+1<<" : ";
	cin>>labr[i];}
	} 
	
	
	{	cout<<"\n\n\t\t\t ******************************************************************************************";
	cout<<"\n \t\t\t\t       W e l c o m e  t o  M I D  T E R M  S E C T I O N"<<endl;
	cout<<"\t\t\t ******************************************************************************************"<<endl<<endl;
    cout<<"\t\t\t\t\t=> Enter Marks for Mid Term : ";
	cin>>midterm[i];}
	

	{	cout<<"\n\n\t\t\t ******************************************************************************************";
	cout<<"\n \t\t\t\t       W e l c o m e  t o C O M P L E X E N G I N E E R I N G  S E C T I O N"<<endl;
	cout<<"\t\t\t ******************************************************************************************"<<endl<<endl;
	cout<<"\t\t\t\t\t=> Enter Marks for CEA : ";
	cin>>cea[i];}
	
	{cout<<"\n\n\t\t\t ******************************************************************************************";
	cout<<"\n \t\t\t\t       W e l c o m e  t o F I N A L  T E R M  S E C T I O N"<<endl;
	cout<<"\t\t\t ******************************************************************************************"<<endl<<endl;
	cout<<"\t\t\t\t\t=> Enter Marks for Final Term : ";
	cin>>finalterm[i];}
	cout<<"\n\n \t\t\t -----------------------------------------------------------------------------------------------"<<endl;
	
}
    float p[15],r[15],fr[15],fp[15],fcea[15],n[15],m[15],fmid[15],fterm[15],c[15];
    cout<<endl<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
     cout<<"\n\t\t\t\t\t\t D I S P L A Y I N G  R E S U L T";
     cout<<endl<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
	 for (int k=0; k<strength; k++)
	{  
        for (int j=0; j<15; j++)
			{
			  p[j]=labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j]+labp[j];
			  fp[j]=(p[j]/210)*25;
		    }
	    for (int i=0; i<15; i++)
		    {
			 r[i]=labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i]+labr[i];
			 fr[i]=(r[i]/210)*20;
			}
			c[k]=cea[k];
			fcea[k]=(c[k]/20)*10;
			
            m[k]=midterm[k];
            fmid[k]=(midterm[k]/55)*20;
            
			n[k]=finalterm[k];
			fterm[k]=(n[k]/50)*25;
    }


    cout<<endl<<endl;
for (int i=0; i<strength; i++)
{  cout<<"\t\t\t >> Name of student"<<i+1<<" : "<<name[i]<<endl<<endl;
   cout<<"\t\t\t >> Roll Number of the student : "<<rollnum[i]<<endl<<endl;
   cout<<"\t\t\t >> Lab Performance Marks :"<<fp[i]<<endl<<endl;
   cout<<"\t\t\t >> Lab Report Marks: "<<fr[i]<<endl<<endl;
   cout<<"\t\t\t >> Mid Term Marks: "<<fmid[i]<<endl<<endl;
   cout<<"\t\t\t >> CEA Marks: "<<fcea[i]<<endl<<endl;
   cout<<"\t\t\t >> Final Term Marks: "<<fterm[i]<<endl;
}
   
   cout<<endl<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
     cout<<"\n\t\t\t\t\t\t D I S P L A Y I N G  R E S U L T  O U T  O F  1 0 0";
     cout<<endl<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
   float h[strength];
   
   for (int i=0; i<strength; i++)
   {
    cout<<endl<<endl;
   	cout<<"\t\t\t >> Name of student"<<i+1<<" : "<<name[i]<<endl;
   	cout<<"\t\t\t >> Roll Number of the student : "<<rollnum[i]<<endl;
   	        h[i]=fp[i]+fr[i]+fmid[i]+fcea[i]+fterm[i];
   	cout<<"\t\t\t >> Total Marks Out Of 100: "<<h[i]<<endl;
   	cout<<endl<<endl<<"\t\t\t G R A D E  R E P O R T "<<endl<<endl;
   		if (h[i]>=90)
	cout<<"\t\t\t =>> Student's Grade is = A"<<endl;
	if (h[i]>=80 && h[i]<=89)
	cout<<"\t\t\t =>> Students's Grade is = B"<<endl;
	if (h[i]>=70 && h[i]<=79)
	cout<<"\t\t\t =>> Students's Grade is = B-"<<endl;
	if (h[i]>=60 && h[i]<=69)
	cout<<"\t\t\t =>> Students's Grade is = C"<<endl;
    if (h[i]>=50 && h[i]<=59)
	cout<<"\t\t\t =>> Student's Grade is = C-"<<endl;
	if (h[i]>=40 && h[i]<=49)
	cout<<"\t\t\t =>> Student's Grade is = D"<<endl;
	if (h[i]<40)
	cout<<"\t\t\t =>> Students's Grade is = F"<<endl;

   }
   char access,a;
   	cout<<"\n\n\t\t Do You Want To Access classes again? Type N for no or Y for yes: ";
	cin>>access;
	a=access;
	if (a=='Y' && a=='y')
	{return a;}
   //THE END OF PORTAL
}





char cafe( string y)
{  int x=0,b=0,menu;
string option,size1;
do{
   	cout<<endl<<endl<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
	cout<<"\t\t\t\t\t\t\t\t                                W E L C O M E  T O  A U  C A F E  M E N U"<<endl;
	cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl<<endl;
	
	
	  cout<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
   cout<<"\t\t\t\t\t\t  D R I N K S  S E C T I O N";
     cout<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
   cout<<"\n\n \t 1.Press 1 for Water Bottle.....Rs. 80 (1 ltr.) & Rs. 130 (1.5 ltr.)"<<endl;
   cout<<"\t 2. Press 2 for Pepsie.........Rs. 50 (1 ltr.) & Rs. 120 (1.5 ltr.)"<<endl;
   cout<<"\t 3. Press 3 for 7up..........Rs. 50 (1 ltr.) & Rs. 120 (1.5 ltr.)"<<endl;
   cout<<"\t 4. Press 4 for Sprite...............Rs. 50 (1 ltr.) & Rs. 120 (1.5 ltr.)"<<endl;
   cout<<"\t 5. Press 5 for Mountain DEW.............Rs. 80"<<endl;
   cout<<"\t 6. Press 6 for Tea.......................Rs. 50"<<endl;
   cout<<"\t 7. Press 7 for Coffee..................Rs. 70"<<endl;
   cout<<"\t 8. Press 8 for Fresh Juices.............Rs. 120 (for all types of juices)"<<endl<<endl;
   
   cout<<"\t\t\t -------------------------------------------------------------------------------------"<<endl;
   cout<<"\t\t\t\t\t\t  E A T A B L E  I T E M S";
     cout<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl<<endl;
   cout<<"\t 9. Press 9 for Lays................Large Rs.50"<<endl;	
   cout<<"\t 10. Press 10 for Choclates:...................Rs.150 ";
   cout<<"\n\t 11. Eclairs.........................Rs.5"<<endl;
   cout<<"\t 12. Press 11 for French fries.................Rs.50 per plate\n";
   float size;
   do {
   	cout<<endl<<endl<<endl<<"\t\tEnter YOUR Menu Here: ";
    cin>>menu; } while (menu !=1 && menu !=2 && menu !=3 && menu !=4 && menu !=5 && menu !=6 && menu !=7 && menu !=8 && menu !=9 && menu !=10 && menu !=11 && menu !=12 );
   	if (menu == 1)
   	{   cout<<"\n\t\t    >>Enter size here 1 or 1.5 : ";
   	    cin>>size;
   	    if (size==1)
   	    { x=80;}
   	    if (size == 1.5)
   	    { x=130;}   }
	   if (menu == 2 )
	{   cout<<"\n\t\t    >> Enter size here 1 or 1.5 : ";
   	    cin>>size;
   	    if (size==1)
   	    { x=50;}
   	    if (size == (1.5))
   	    { x=120;}    }
	   
	   if (menu == 3)
	{   cout<<"\n\t\t    >> Enter size here 1 or 1.5: ";
   	    cin>>size;
   	    if (size==1)
   	    { x=50;}
   	    if (size == 1.5)
   	    { x=120;}}
		   
		if (menu == 4)
	{   cout<<"\n\t\t    >> Enter size here 1 or 1.5: ";
   	    cin>>size;
   	    if (size==1)
   	    { x=50;}
   	    if (size == 1.5)
   	    { x=120;}}
		   
		if (menu == 5)
		{ x=80;}
	
		if (menu == 6)
		{ x=50;}
		
		if (menu == 7)
		{ x=70;}

		if (menu ==8)
		{ x=120;}   
		    
		if (menu == 9)
		{x=50;}
		
		if (menu == 10)
		{x=150;}
	
	    if (menu== 11)
		{ x=5;}
		
		
		if (menu== 12)
		{ x=50;}
			b=x+b;
		    cout<<endl;
	   cout<<"\t\t >>> Type \"buy more items\" to add OR \"show bill\" to finalize the total bill: ";
	   cin.ignore(50,'\n');
	   getline(cin,option);
} while (option != "show bill");
  cout<<"\n\n\t\t\t -------------------------------------------------------------------------------------"<<endl;
   cout<<"\t\t\t\t\t\t  T O T A L  B I L L  : "<<b;
     cout<<endl<<"\t\t\t -------------------------------------------------------------------------------------"<<endl<<endl;
return 0;
}




void display(){
	
	system("cls");
	    cout<<"\n\n\n \t\t\t\t ########### T.I.C T.A.C T.O.E ###########";
	   cout<<endl<<endl;
	cout<<"\t\t\t\t\t"<<array[0]<<"  |  "<<array[1]<<"  |  "<<array[2]<<endl;
	cout<<"\t\t\t\t\t"<<"--------------"<<endl;
	cout<<"\t\t\t\t\t"<<array[3]<<"  |  "<<array[4]<<"  |  "<<array[5]<<endl;
	cout<<"\t\t\t\t\t"<<"--------------"<<endl;
	cout<<"\t\t\t\t\t"<<array[6]<<"  |  "<<array[7]<<"  |  "<<array[8]<<endl<<endl;
}
int winchecker(){

  if(array[0]==array[1]&&array[1]==array[2]){	
   return 1;
  }

  else if(array[3]==array[4]&&array[4]==array[5]){
   return 1;}

  else if(array[6]==array[7]&&array[7]==array[8]){
   return 1;
  }
 
 else if(array[0]==array[4]&&array[4]==array[8]){
   return 1;} 
 else if(array[2]==array[4]&&array[4]==array[6]) {
 	
   return 1;}   
  else if(array[0]==array[3]&&array[3]==array[6]){
  	return 1;}
  else if(array[1]==array[4]&&array[4]==array[7]){
  	return 1;}
  else if(array[2]==array[5]&&array[5]==array[8]){
  	return 1;}
 else if(array[0]!='1' && array[1]!='2' && array[2]!='3'
    && array[3]!='4'&& array[4]!='5' && array[5] !='6'
	&& array[6]!='7' && array[7]!='8' && array[8]!='9') {		 		 
   return 0; }
 else {return 2;}
}


void guess_the_number()
{
	int num;
	int guess;
	int attempts=0;
	srand(time(0));
	num=(rand()%100)+1;
	
	do
	{
	cout<<endl<<"\n\n\t\t\tEnter your guess between 1 to 100: ";
	cin>>guess;
	
	while(guess<1||guess>100)
	{cout<<"\n\n\t\tInvalid guess, enter your guess again: ";
	cin>>guess;}
	
	if(guess==num)
	cout<<"\n\n\t\t<<<<< CONGRATULATIONS....You have guessed the correct number, you have won! >>>>>>>>>";
	else if(guess<num)
	{
	cout<<"\t\t\t <<<<<<   :( Your guess is not correct and is less than the number ):    >>>>>>>"<<endl;
	attempts++;
	cout<<"\t\t\t  Number of attempts left : "<<5-attempts<<" HURRY UP !!!";
	}
	else if(guess>num)
	{
	cout<<"\t\t\t <<<<<<   :( Your guess is not correct and is greater than the number ):    >>>>>>>"<<endl;
	attempts++;
	cout<<"\t\t\t Number of attempts left "<<5-attempts<<" HURRY UP !!!";
	}
	}while(guess!=num&&5-attempts!=0);
	if(attempts==5)
	cout<<endl<<"\n\n\t\t\t\t\t :( You have lost the game, the number was "<<num;
	cout<<"\n\n \t\t\t\t BETTER LUCK NEXT TIME :)";
	
	
}


















