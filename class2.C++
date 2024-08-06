#include <iostream>
#include <fstream>
#include <string>

class student
{
private:
    char name[30];
    int roll_no;
    char course[30];
    char address[30];
    char email_id[30];
    char contact_no[30];

public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
};
void student::menu()
{
menustart:
    int choice;
    char x;
    system("cls");

    cout << "\t\t\t-----------------------------\n";
    cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |\n";
    cout << "\t\t\t-----------------------------\n";
    cout << "\t\t\t 1. Enter New Record\n";
    cout << "\t\t\t 2. Display Record\n";
    cout << "\t\t\t 3. Modify Record\n";
    cout << "\t\t\t 4. Search Record\n";
    cout << "\t\t\t 5. Delete Record\n";
    cout << "\t\t\t 6. Exit\n";

    cout << "\t\t\t---------------------------\n";
    cout << "\t\t\tChoose Option:[1/2/3/4/5/6]\n";
    cout << "\t\t\t---------------------------\n";
    cout << "Enter Your Choose: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
	do
	{
	    insert();
	    cout << "\n\t\t\t Add Another Student Record (Y,N): ";
	    cin>>x;
	} while (x== 'y' || x== 'Y');
	break;
    case 2:
	display();
	break;
    case 3:
	modify();
	break;
    case 4:
	search();
	break;
    case 5:
	deleted();
	break;
    case 6:
	exit(0);
    default:
	cout << "\n\t\t\t Invalid choice... Please Try Again..";
	break;
    }
    goto menustart;
}
void student::insert() // add student details
{
    system("cls");
    fstream file;
    cout << "\n-----------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------- Add Student Details ---------------------------------------------\n";

    cout << "\t\t\tEnter Name: ";
    gets( name);
    cout << "\t\t\tEnter Roll No.: ";
    cin >> roll_no;
    cout << "\t\t\tEnter Course: ";
    gets( course);
    cout << "\t\t\tEnter Email Id: ";
    gets( email_id);
    cout << "\t\t\tEnter Contact No: ";
    cin >> contact_no;
    cout << "\t\t\tEnter Address: ";
    gets( address);
    ifstream in("studentRecord.txt");
    file << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
    file.close();
}

void student::display() // display students details
{
    system("cls");
    fstream file;
    int total = 1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << "\n";
    cout << "------------------------------------- Student Record Table --------------------------------------------" << "\n";
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
	/* code */
	cout << "\n\t\t\tNo Data Is Present...";
	file.close();
    }
    else
    {
	file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	while (!file.eof())
	{
	    cout << "\n\n\t\t\t Student No.: " << total++ << "\n";
	    cout << "\t\t\t Student Name: " << name << "\n";
	    cout << "\t\t\t Student Roll No.: " << roll_no << "\n";
	    cout << "\t\t\t Student course: " << course << "\n";
	    cout << "\t\t\t Student Email Id.: " << email_id << "\n";
	    cout << "\t\t\t Student Contact No.: " << contact_no << "\n";
	    cout << "\t\t\t Student Address: " << address << "\n";
	    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	}
	if (total == 0)
	{
	    cout << "\n\t\t\tNo Data Is Present...";
	}
    }
    file.close();
}
void student::modify() // Modify Students Details
{
    system("cls");
    fstream file, file1;
    int rollno;
    int found = 0;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details ------------------------------------------" << endl;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
	cout << "\n\t\t\tNo Data is Present..";
	file.close();
    }
    else
    {
	cout << "\nEnter Roll No. of Student which you want to Modify: ";
	cin >> rollno;
	file1.open("record.txt", ios::app | ios::out);
	file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	while (!file.eof())
	{
	    if (rollno != roll_no)

		file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
	    else
	    {
		cout << "\n\t\t\tEnter Name: ";
		cin >> name;
		cout << "\t\t\tEnter Roll No.: ";
		cin >> roll_no;
		cout << "\t\t\tEnter Course: ";
		cin >> course;
		cout << "\t\t\tEnter Email Id: ";
		cin >> email_id;
		cout << "\t\t\tEnter Contact No.: ";
		cin >> contact_no;
		cout << "\t\t\tEnter Address: ";
		cin >> address;
		file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
		found++;
		break;
	    }
	    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	    if (found == 0)
	    {
		cout << "\n\t\t\t Student Roll No. Not Found....";
	    }
	}
	file1.close();
	file.close();
	remove("studentRecord.txt");
	rename("record.txt", "studentRecord.txt");
    }
}
void student::search() // search data of student
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
	cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
	cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
	cout << "\n\t\t\t No Data Is Present...";
    }
    else
    {
	int rollno;
	cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
	cout << "------------------------------------- Student Search Data ------------------------------------------" << endl;
	cout << "\n Enter Roll No. of Student Which You Want to Search: ";
	cin >> rollno;
	file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	while (!file.eof())
	{
	    if (rollno == roll_no)
	    {
		cout << "\n\t\t\t Student Name: " << name << "\n";
		cout << "\t\t\t Student Roll No.: " << roll_no << "\n";
		cout << "\t\t\t Student course: " << course << "\n";
		cout << "\t\t\t Student Email Id.: " << email_id <<"\n";
		cout << "\t\t\t Student Address: " << address <<"\n";
		found++;
	    }
	    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	}
	if (found == 0)
	{
	    cout << "\n\t\t\tStudent Roll No. Not Found...";
	}
	file.close();
    }
}
void student::deleted()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    int roll;
    cout << "\n-------------------------------------------------------------------------------------------------------" << "\n";
    cout << "------------------------------------- Delete Student Details ------------------------------------------" << "\n";
    file.open("studentRecord.txt", ios::in);
    if (!file)
    {
	cout << "\n\t\t\tNo Data is Present..";
	file.close();
    }
    else
    {
	cout << "\nEnter Roll No. of Student which you want Delete Data: ";
	cin >> roll;
	file1.open("record.txt", ios::app | ios::out);
	file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	while (!file.eof())
	{
	    if (roll != roll_no)
	    {
		file1 << " " << name << " " << roll_no << " " << course << " " << email_id << " " << contact_no << " " << address << "\n";
	    }
	    else
	    {
		found++;
		cout << "\n\t\t\tSuccessfully Delete Data";
		break;
	    }
	    file >> name >> roll_no >> course >> email_id >> contact_no >> address;
	}
	if (found == 0)
	{
	    cout << "\n\t\t\t Student Roll NO. Not Found....";
	}
	file1.close();
	file.close();
	remove("studentRecord.txt");
	rename("record.txt", "studentRecord.txt");
    }
}
 int main()
{
    student project;
    project.menu();
    return 0;
}