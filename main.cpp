#include <iostream>
#include <algorithm>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
void choicePath();
void adminLogIn();
void customerLogIn();
void requstLesson();
void mainMenu();
void userMenu();
void MTsubMenu();
void manageUser();
void AssignTutor();
void adminReports();
void tutorReports();
void customerReports();
void addTutor();
void addCustomer();
void editTutor();
void deleteTutor();
void viewBill();
void report();
void bill();
void editCustomer();
void deleteCustomer();
string GetID;
string GetID1;
string GetID2;

int main()
{
    system(" title Sip Sewana Academy System V1.0");
    choicePath();
    adminLogIn();
    customerLogIn();
    requstLesson();
    userMenu();
    MTsubMenu();
    manageUser();
    AssignTutor();
    adminReports();
    tutorReports();
    customerReports();
    addTutor();
    addCustomer();
    editTutor();
    deleteTutor();
    editCustomer();
    deleteCustomer();
    viewBill();
    report();
    bill();
    return 0;
}
void Design()
{
    cout<<" ================================================================================";
	cout<<"              :------------------ SIP SEWANA ACADEMY --------------------:"<<endl;

	cout<<" ================================================================================"<<endl;
	cout<<""<<endl;

}


void choicePath()
{
    char NO;
  //Design();
  int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"         Choice Path           "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Admin Login               "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. Customer Login            "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-2] : ";
	cin>>NO;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO)
	{
	    case'1':
	    adminLogIn();
	    break;
	    case'2':
	    customerLogIn();
	    break;
	}
}


void adminLogIn()
{
    string temp = "0";
    string UserName;
    //string Passwrd;

    Design();

    if(temp == "0")
	{
		cout<<"           Please Enter User Name And Password To Enter The System!"  <<endl;

	}
	else
	{
		cout<<"           Your User Name OR Password Incorrect. Please Try again......."<<endl;
	}
	cout<<" ________________________________________________________________________________"<<endl;

	cout<<"\n                           ENTER USER NAME : ";
	cin>>UserName;
	cout<<""<<endl;
	cout<<"                           ENTER PASSWORD  : ";

    string pass = "";
	char ch;

	while ((ch=_getch()) != 13)
	{
		if (ch == 8)
		{
			if (pass.length() > 0) {
				pass.erase(pass.length()-1);
				cout << "\b \b";
			}
		}
		else
		{
			pass.push_back(ch);
			cout << '*';
		}
	}

	if(UserName == "Admin" && pass == "123")
	{
		system("cls");
		mainMenu();
	}
	else
	{
		system("cls");
		temp = "1";
		adminLogIn();
	}
}


void customerLogIn()
{
    string temp = "0";
    string UserName;
    //string Passwrd;

    Design();

    if(temp == "0")
	{
		cout<<"           Please Enter User Name And Password To Enter The System!"  <<endl;

	}
	else
	{
		cout<<"           Your User Name OR Password Incorrect. Please Try again......."<<endl;
	}
	cout<<" ________________________________________________________________________________"<<endl;

	cout<<"\n                           ENTER USER NAME : ";
	cin>>UserName;
	cout<<""<<endl;
	cout<<"                           ENTER PASSWORD  : ";

    string pass = "";
	char ch;

	while ((ch=_getch()) != 13)
	{
		if (ch == 8)
		{
			if (pass.length() > 0) {
				pass.erase(pass.length()-1);
				cout << "\b \b";
			}
		}
		else
		{
			pass.push_back(ch);
			cout << '*';
		}
	}

                                                            if(UserName == "User" && pass == "123")
                                                            {
                                                                system("cls");
                                                                userMenu();
                                                            }
                                                            else
                                                            {
                                                                system("cls");
                                                                temp = "1";
                                                                customerLogIn();
                                                            }


}

void mainMenu()
{
    char NO1;
    Design();

    int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"         Admin Menu            "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Manage Tutor              "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. Manage Customer           "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  3. Assign Tutor              "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  4. Reports                   "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  5. Back                      "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-5] : ";
	cin>>NO1;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO1)
	{
	    case'5':
	    choicePath();
	    break;
	    case'4':
	    adminReports();
	    break;
	    case'3':
	    AssignTutor();
	    break;
	    case'2':
	    manageUser();
	    break;
	    case'1':
	    MTsubMenu();
	    break;

        default :
        cout << "Invalid Choice Number. Do you want continue (Y/N) : ";

      cin>>number;
   }
   if(number == "Y")
   {
   		system("cls");
   		mainMenu();
    }
    if(number == "N")
    {
        system("cls");
        choicePath();
    }
}

void userMenu()
{
    char NO1;
    Design();

    int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"         User Menu             "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Request a Lesson          "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. View Bill                 "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  3. Pay Bill                  "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  4. Log Out                   "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  5. Exit                      "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-5] : ";
	cin>>NO1;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO1)
	{
	    case'1':
	    requstLesson();
	    break;
	    case'2':
	    viewBill();
	    break;
	    case'3':
	    report();
	    break;
	    case'4':
	    case'5':
	    choicePath();
	    break;

        default :
        cout << "Invalid Choice Number. Do you want continue (Y/N) : ";

      cin>>number;
	}
	  if(number == "Y")
   {
   		system("cls");
   		userMenu();
    }
    if(number == "N")
    {
        system("cls");
        choicePath();
    }
}

void MTsubMenu()
{
    char NO1;
    Design();

    int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"        Manage Tutor           "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Add Tutor                 "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. Edit Tutor                "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  3. Delete Tutor              "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  4. Back to Main menu         "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-4] : ";
	cin>>NO1;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO1)
	{
	    case'1':
	    addTutor();
	    break;
	    case'2':
	    editTutor();
	    break;
	    case'3':
	    deleteTutor();
	    break;
	    case'4':
	    mainMenu();
	    break;

        default :
        cout << "Invalid Choice Number. Do you want continue (Y/N) : ";

      cin>>number;
	}
	 if(number == "Y")
   {
   		system("cls");
   		MTsubMenu();
    }
    if(number == "N")
    {
        system("cls");
        mainMenu();
    }
}

void manageUser()
{
      char NO1;
    Design();

    int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"      Manage Customer          "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Add Customer              "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. Edit Customer             "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  3. Delete Customer           "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  4. Back to Main menu         "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-4] : ";
	cin>>NO1;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO1)
	{
	    case'1':
	    addCustomer();
	    break;
	    case'2':
	    editCustomer();
	    break;
	    case'3':
	    deleteCustomer();
	    break;
	    case'4':
	    mainMenu();
	    break;

	    default :
        cout << "Invalid Choice Number. Do you want continue (Y/N) : ";

      cin>>number;
	}
	 if(number == "Y")
   {
   		system("cls");
   		manageUser();
    }
    if(number == "N")
    {
        system("cls");
        mainMenu();
    }
}
void addTutor()
{
    system("cls");
	Design();
	//getID
			string ID;
			ifstream fin("GenerateID.txt");
			if(fin.is_open())
			{

			}
			else
			{
			ofstream foutone;
			foutone.open("GenerateID.txt",ios::out);
			foutone<<"1";
			foutone.close();
			addTutor();
			}
			fin.close();

			ifstream file("GenerateID.txt");

		string content;

		while(file >> content)
		 {
		 }

		 string name;
		 string subject;
		 string workingDay;
		 string workingTime;
		 string rate;
		 string expertise;
		 string contactNo;
		 string email;

		 cout<<"      *----------------- Please Enter Correct Details -----------------*"<<endl;
		cout<<""<<endl;

		cout<<"                     Membership ID = "<<content<<endl;
		GetID = content;
		cout<<"                     Teacher Name  = ";
		cin>>name;
		cout<<"                     Subject       = ";
		cin>>subject;
		cout<<"                     Working Days  = ";
		cin>>workingDay;
		cout<<"                     Working Time  = ";
		cin>>workingTime;
		cout<<"                     Hourly Rate   = ";
		cin>>rate;
		cout<<"                     Expertise     = ";
		cin>>expertise;
		cout<<"                    Contact Number = ";
		cin>>contactNo;
		cout<<"                     Email         = ";
		cin>>email;
		cout<<" "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		string YesNo;
		cout<<"              Do you Want save this Details (Y/N) : ";
		cin>>YesNo;

		if(YesNo == "Y"||YesNo=="y")
		{
			ofstream fout;
			fout.open("MemberDetails.txt",ios::app);
			fout<<" "<<content<<"  "<<name<<"  "<<subject<<"    "<<workingDay<<"   "<<workingTime<<"   "<<rate<<"     "<<expertise<<"     "<<contactNo<<" "<<email<<endl;
			fout.close();
			cout<<endl;

				//save generate code
            stringstream ss(GetID);
			int i;
  			ss >> i;
  			int j = i +1;

  			if(j<50)
  			{
  			    ofstream foutone;
			    foutone.open("GenerateID.txt",ios::out);
                foutone<<j<<endl;
                foutone.close();


                string Continue;
                cout<<"File Saving Success. Do you want continue (Y/N) : ";
                cin>>Continue;

                if(Continue == "Y"||Continue == "y")
			{
				system("cls");
				addTutor();
			}
			if(Continue=="N"||Continue=="n")
			{
				system("cls");
				MTsubMenu();
		    }
  			}
  			else
  			{
  			    string Continue;
  			    cout<<"Teacher's Full. Sorry Can't Save this File. Do you want continue (Y/N) : ";
  			    cin>>Continue;

  			         if(Continue == "Y"||Continue == "y")
                    {
                        system("cls");
                        addTutor();
                    }

                    if(Continue=="N"||Continue=="n")
                    {
                        system("cls");
                        MTsubMenu();
                    }
  			}
		}
		if(YesNo=="N"||YesNo=="n")
		{
		    system("cls");
		    mainMenu();
		}

}
void addCustomer()
{
    system("cls");
	Design();
	//getID
			string ID1;
			ifstream fin("GenerateID1.txt");
			if(fin.is_open())
			{

			}
			else
			{
			ofstream foutone;
			foutone.open("GenerateID1.txt",ios::out);
			foutone<<"1";
			foutone.close();
			addCustomer();
			}
			fin.close();

		ifstream file("GenerateID1.txt");

		string content;

		while(file >> content)
		 {
		 }

		 string CustomerName;
		 string userName;
		 string password;
		 string address;
		 string contactNo;
		 string email;

        cout<<"      *----------------- Please Enter Correct Details -----------------*"<<endl;
		cout<<""<<endl;


		cout<<"                    Membership ID = "<<content<<endl;
		GetID1 = content;
		cout<<"                    Customer Name = ";
		cin>>CustomerName;
		cout<<"                        User Name = ";
		cin>>userName;
		cout<<"                         Password = ";
		cin>>password;
		cout<<"                          Address = ";
		cin>>address;
		cout<<"                   Contact Number = ";
		cin>>contactNo;
		cout<<"                            Email = ";
		cin>>email;
		cout<<" "<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
		string YesNo;
		cout<<"              Do you Want save this Details (Y/N) : ";
		cin>>YesNo;

		if(YesNo == "Y"||YesNo=="y")
		{
			ofstream fout;
			fout.open("MemberDetails1.txt",ios::app);
			fout<<" "<<content<<"   "<<CustomerName<<"         "<<userName<<"         "<<password<<"        "<<address<<"      "<<contactNo<<"    "<<email<<endl;
			fout.close();
			cout<<endl;

				//save generate code
			stringstream ss(GetID1);
			int i;
  			ss >> i;
  			int j = i +1;
  			if(j<1000)
  			{
            ofstream foutone;
			foutone.open("GenerateID1.txt",ios::out);
			foutone<<j<<endl;
			foutone.close();


			string Continue;
			cout<<"File Saving Success. Do you want continue (Y/N) : ";
			cin>>Continue;

			if(Continue == "Y"||Continue == "y")
			{
				system("cls");
				addCustomer();
			}
			if(Continue=="N"||Continue=="n")
			{
				system("cls");
				MTsubMenu();
		    }
  			}
  			else
  			{
  			    string Continue;
  			    cout<<"Customer's Full. Sorry Can't Save this File. Do you want continue (Y/N) : ";
  			    cin>>Continue;

  			         if(Continue == "Y"||Continue == "y")
			{
				system("cls");
				addCustomer();
			}
			if(Continue=="N"||Continue=="n")
			{
				system("cls");
				MTsubMenu();
		    }
  			}
		}
		if(YesNo=="N"||YesNo=="n")
		{
		    system("cls");
		    mainMenu();
		}

}
void deleteTutor()
{
    system("cls");
	Design();
    cout<<"----------------------------Search Member Deitails------------------------------"<<endl;
	int searchid;
	cout<<"Please Enter Membership ID : ";
	cin>>searchid;

	ifstream db;
	db.open("MemberDetails.txt",ios::in);
	int idONE;
	string name,subject,workingDay,workingTime,rate,expertise,contactNo,email;
	int count =0;
    int whilecount=0;
												while(!db.eof())
													{
													    db>>idONE>>name>>subject>>workingDay>>workingTime>>rate>>expertise>>contactNo>>email;


													    if(idONE==searchid)
															{
																    cout<<"ID             = "<<idONE;
																    cout<<"\nTeacher Name   = "<<name;
																    cout<<"\nSubject        = "<<subject;
																    cout<<"\nWorking Day    = "<<workingDay;
																    cout<<"\nWorking Time   = "<<workingTime;
																    cout<<"\nRate           = "<<rate;
																    cout<<"\nExpertise      = "<<expertise;
																    cout<<"\nContact Number = "<<contactNo;
																    cout<<"\nEmail          = "<<email;
																	count++;
																		string a;
                                                cout<<endl;
												cout<<"\nDo you want delete this (Y/N) : ";
												cin>>a;
												if(a=="Y"||a=="y")
													{
														//system("cls");
														if(remove("MemberDetails.txt")!=idONE)
														{
														    cout<<"error deleting file";
														}
														else
														{
														    cout<<"deleting succeful";
														}
													}
                                                if(a=="N"||a=="n")
                                                {
                                                    system("cls");
                                                    MTsubMenu();
                                                }
																	break;

															}
															else
															{
															    cout<<"\nCan Not Find Id:";
															    break;
															}
													}

													db.close();


                                                string a;
                                                cout<<endl;
												cout<<"\nDo you want continue (Y/N) : ";
												cin>>a;
												if(a=="Y"||a=="y")
													{
														system("cls");
														deleteTutor();
													}
                                                if(a=="N"||a=="n")
                                                {
                                                    system("cls");
                                                    MTsubMenu();
                                                }


}
void editTutor()
{
    Design();
}
void editCustomer()
{
    Design();
}
void deleteCustomer()
{
    Design();
}
void AssignTutor()
{
    system("cls");
    Design();

    string subject;
    string day;
    string time;
    string teacher;
    string rate;

    cout<<"      *----------------- Please Enter Correct Details -----------------*"<<endl;
    cout<<""<<endl;

    cout<<"                    Subject  = ";
    cin>>subject;
    cout<<"                    Day      = ";
    cin>>day;
    cout<<"                    Time     = ";
    cin>>time;
    cout<<"                    Teachers = ";
    cin>>teacher;
    cout<<"                    Rate     = ";
    cin>>rate;
    cout<<" "<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    string YesNo;
    cout<<"              Do you Want save this Details (Y/N) : ";
    cin>>YesNo;

		if(YesNo == "Y"||YesNo=="y")
		{
		    ofstream fout;
			fout.open("AssignTutorDetails.txt",ios::app);
			fout<<subject<<" "<<day<<" "<<time<<" "<<teacher<<" "<<rate<<endl;
			fout.close();
			cout<<endl;

			string Continue;
			cout<<"      File Saving Success";
			cout<<"\n   Do you want continue (Y/N) : ";
			cin>>Continue;

			if(Continue == "Y"||Continue == "y")
			{
				system("cls");
				AssignTutor();
			}
			if(Continue=="N"||Continue=="n")
			{
				system("cls");
				MTsubMenu();
		    }
		}
		if(YesNo=="N"||YesNo=="n")
		{
		    system("cls");
		    MTsubMenu();
		}
}
void requstLesson()
{
    system("cls");
    Design();
    cout<<"----------------------------Search Lesson Deitails------------------------------"<<endl;
    string searchSub;
    string searchDay;
    string searchTime;
    cout<<"Please Enter Subject : ";
    cin>>searchSub;
    cout<<"Please Enter Day     : ";
    cin>>searchDay;
    cout<<"Please Enter Time    : ";
    cin>>searchTime;
    cout<<endl;

    ifstream db1;
	db1.open("AssignTutorDetails.txt",ios::in);
	string subject,day,time,teacher,rate;
	int count =0;
    int whilecount=0;
												while(!db1.eof())
												{
												    db1>>subject>>day>>time>>teacher>>rate;

												    if(subject==searchSub&&day==searchDay&&time==searchTime)
												    {
                                                                    cout<<"Teachers            = "<<teacher;
																    cout<<"\nRate                = "<<rate;
																	count++;
                                                string a;
                                                cout<<endl;
                                                cout<<"\nDo you want select teacher (Y/N) : ";
												cin>>a;
												if(a=="Y"||a=="y")
													{
														system("cls");
														bill();
													}
                                                if(a=="N"||a=="n")
                                                {
                                                    system("cls");
                                                    userMenu();
                                                }
                                                break;

												    }
												}
}
void bill()
{
    system("cls");
    Design();
    cout<<"----------------------------Teacher Deitails------------------------------"<<endl;
    string searchTech;
    cout<<"\nPlease Select the Teacher : ";
    cin>>searchTech;
    cout<<endl;

    ifstream db1;
	db1.open("MemberDetails.txt",ios::in);
	int idONE;
	string name,subject,workingDay,workingTime,rate,expertise,contactNo,email;
	int count =0;
    int whilecount=0;
												while(!db1.eof())
												{
												    db1>>idONE>>name>>subject>>workingDay>>workingTime>>rate>>expertise>>contactNo>>email;
												    if(name==searchTech)
												    {
												        cout<<"  ID              = "<<idONE;
												        cout<<"\n  Teacher Name    = "<<name;
												        cout<<"\n  Working Day     = "<<workingDay;
												        cout<<"\n  Working Time    = "<<workingTime;
												        cout<<"\n  Rate            = "<<rate;
												        cout<<"\n  Expertise       = "<<expertise;
												        cout<<"\n  Contact Number  = "<<contactNo;
												        cout<<"\n  Email           = "<<email;
												        cout<<endl;
												        count++;

                                                string a;
                                                //cout<<endl;
                                                cout<<"\nDo you want continue (Y/N) : ";
												cin>>a;
												if(a=="Y"||a=="y")
													{
														system("cls");
														requstLesson();
													}
                                                if(a=="N"||a=="n")
                                                {
                                                    system("cls");
                                                    userMenu();
                                                }
                                                break;

												    }
												}

}
void report()
{
    system("cls");
    Design();
    cout<<endl;
    string searchTech,day,time;
    int houre;
    cout<<"Please Enter the Teacher Name : ";
    cin>>searchTech;
    cout<<"Please Enter recived Day      : ";
    cin>>day;
    cout<<"Please Enter recived Time     : ";
    cin>>time;
    cout<<"Please Enter the Houre        : ";
    cin>>houre;
    cout<<endl;

    string BillNo;


    ifstream db1;
	db1.open("MemberDetails.txt",ios::in);
	int idONE,rate;
	string name,subject,workingDay,workingTime,expertise,contactNo,email;
	int count =0;
    int whilecount=0;

                                                while(!db1.eof())
												{
												    db1>>idONE>>name>>subject>>workingDay>>workingTime>>rate>>expertise>>contactNo>>email;
												    int total = rate*houre;
												    if(name==searchTech)
												    {
												        ifstream fin("GenerateBillNo.txt");
                                                        if(fin.is_open())
                                                        {

                                                        }
                                                        else
                                                        {
                                                            ofstream foutone;
                                                            foutone.open("GenerateBillNo.txt",ios::out);
                                                            foutone<<"1";
                                                            foutone.close();
                                                            report();
                                                        }
                                                        fin.close();
                                                        ifstream file("GenerateBillNo.txt");

                                                        string content;

                                                        while(file >> content)
                                                        {
                                                        }

                                                        cout<<"    ------------------------Sip Sewana Academy-------------------------"<<endl;
                                                        cout<<"\n       Bill No        : "<<content;
                                                        GetID2=content;
                                                        cout<<endl;
                                                        cout<<"\n       Recived Day    : "<<day;
                                                        cout<<"\n       Recived Time   : "<<time;
                                                        cout<<"\n       Teacher Name   : "<<name;
                                                        cout<<"\n       Subject        : "<<subject;
                                                        cout<<"\n       Rate           : "<<rate;
                                                        cout<<"\n       Houre          : "<<houre;
                                                        cout<<"\n       Contact Number : "<<contactNo;
                                                        cout<<endl;
                                                        cout<<"    -------------------------------------------------------------------"<<endl;
                                                        cout<<"       Total          : "<<total;
                                                        cout<<endl;
                                                        cout<<"    -------------------------------------------------------------------"<<endl;
                                                        cout<<"    -------------------------------------------------------------------"<<endl;
                                                        cout<<endl;
                                                        cout<<"    ------------------------Thank You Wellcome-------------------------"<<endl;
                                                        string YesNo;
                                                        cout<<"\n              Do you want pay this bill (Y/N) : ";
                                                        cin>>YesNo;

                                                        if(YesNo=="Y"||YesNo=="y")
                                                        {
                                                            ofstream fout;
                                                            fout.open("BillDetails.txt",ios::app);
                                                            fout<<" "<<content<<"   "<<day<<"   "<<time<<"   "<<name<<"           "<<subject<<"    "<<rate<<"     "<<houre<<"     "<<contactNo<<"   "<<total<< endl;
                                                            fout.close();
                                                            cout<<endl;

                                                            stringstream ss(GetID2);
                                                            int i;
                                                            ss >> i;
                                                            int j = i +1;
  			//cout<<j<<endl;

                                                            ofstream foutone;
                                                            foutone.open("GenerateBillNo.txt",ios::out);
                                                            foutone<<j<<endl;
                                                            foutone.close();

                                                            string a;
                                                            cout<<"              Bill pay Success. Go to main menu (Y/N) : ";
                                                            cin>>a;
                                                            if(a=="Y"||a=="y")
                                                            {
                                                                system("cls");
                                                                userMenu();
                                                            }
                                                            if(a=="N"||a=="n")
                                                            {
                                                                system("cls");
                                                                choicePath();
                                                            }
                                                        }
                                                        if(YesNo=="N"||YesNo=="n")
                                                        {
                                                            system("cls");
                                                            userMenu();
                                                        }
												    }
												}


}
void viewBill()
{
    system("cls");
	Design();
    cout<<"----------------------------View Bill Deitails-------------------------------"<<endl<<endl;

            string line;
			ifstream fin("BillDetails.txt");
			if(fin.is_open())
			{
				cout<<"ID | Day | Recive Time | Teacher Name | Subject | Rate | Houre | contact No | Total |"<<endl;
				cout<<"-------------------------------------------------------------------------------------"<<endl;
				while(!fin.eof())
				{
					getline(fin,line);

					cout<<line<<endl<<endl;
				}
			}
			string back;
			cout<<"Do you want to go main menu (Y): ";
			cin>>back;
			if(back=="Y"||back=="y")
			{
			    system("cls");
			    userMenu();
			}
}
void adminReports()
{
     char NO;
  //Design();
  int menuNo;
	cout<<"\t             "<<char(474);
	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}

	cout<<char(447)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;

    cout<<"\t             "<<char(691)<<"         Reports               "<<char(691)<<endl;
    cout<<"\t             "<<char(691)<<"   ";
    for(int i=0;i<22;i++)
	{
		cout<<char(452);
	}


	cout<<"\t     "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  1. Tutor reports             "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  2. Customer reports          "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"  3. Back                      "<<char(691)<<endl;
	cout<<"\t             "<<char(691)<<"\t\t                     "<<char(691)<<endl;
    cout<<"\t             "<<char(448);

    	for(int i=0;i<31;i++)
	{
		cout<<char(452);
	}
	cout<<char(473)<<"\n\n";




	cout<<"________________________________________________________________________________"<<endl;
	cout<<"                      Enter Your Choice [1-3] : ";
	cin>>NO;
	cout<<"________________________________________________________________________________"<<endl;
	string number;

	switch(NO)
	{
	    case'1':
	    tutorReports();
	    break;
	    case'2':
	    customerReports();
	    break;
	    case'3':
	    mainMenu();
	    break;
	}
}
void tutorReports()
{
    system("cls");
	Design();
    cout<<"----------------------------View Tutor Deitails-------------------------------"<<endl<<endl;

            string line;
			ifstream fin("MemberDetails.txt");
			if(fin.is_open())
			{
				cout<<"ID | Name | Subject | Day |   Time    | rate | Exper | Con no   | Email             |"<<endl;
				cout<<"-------------------------------------------------------------------------------------"<<endl;
				while(!fin.eof())
				{
					getline(fin,line);

					cout<<line<<endl<<endl;
				}
			}
			string back;
			cout<<"Do you want to go main menu (Y): ";
			cin>>back;
			if(back=="Y"||back=="y")
			{
			    system("cls");
			    mainMenu();
			}
}
void customerReports()
{

    system("cls");
	Design();
    cout<<"----------------------------View Customer Deitails-------------------------------"<<endl<<endl;

            string line;
			ifstream fin("MemberDetails1.txt");
			if(fin.is_open())
			{
				cout<<"ID |  Full Name  | User Name | Password |  Address   |  Con no   | Email            |"<<endl;
				cout<<"-------------------------------------------------------------------------------------"<<endl;
				while(!fin.eof())
				{
					getline(fin,line);

					cout<<line<<endl<<endl;
				}
			}
			string back;
			cout<<"Do you want to go main menu (Y): ";
			cin>>back;
			if(back=="Y"||back=="y")
			{
			    system("cls");
			    mainMenu();
			}
}
