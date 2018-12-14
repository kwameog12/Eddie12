#include <iostream>

using namespace std;

struct Student
    {
        char name[25];
        

        int id;
        char class_stud[20];
        int age;
        double tel;
        int marks;
        char grade[4];
        int courseCode;
        char courseTitle[25];
    };





int main()
{
   char answer;
     int det=0;
     int det2=0;
     int det3=0;
        
        cout << "You are welcome to Heathen Prepratory School Management System" << endl;
       cout << "Enter 1 to Edit or Delete or Add Student Details " << endl;
       cout << "Enter 2 Edit to Delete or Add Staff Records" << endl;


       cout << endl;
       cout << "Select Option:";

       int m;
       cin >>m ;

       switch (m)
    {
        case  1 :

         cout << "You Can Edit/Add/Delete Student Records.. \n";

    do
   {
       Student stud[100];
        
	  cout << "// STUDENT PORTAL // " << endl;  
       cout << "Hit 1 to a Add New Student Registration" << endl;
       cout << "Hit 2 to Delete Student Information" << endl;
       cout << "Hit 3 to update already existing student information" << endl;
       cout << "Hit 4 to Display the list of all students with respective information" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int detailsCheck = 0;

    int mn;
    cin >> mn;

    switch(mn)
    {
        case  1 :


        cout << "\n Enter the info of the student " << det+1 << endl;

        cout << "\t Enter the ID No. = ";
    int iden_2;
    int iden_1;


//To show that the record already exist
    cin >> iden_1;

    for(int k=0; k<=det; k++){

        iden_2=iden_1;
    if(iden_2 == stud[k].id)
    {
        detailsCheck= 1;
         }
    }
    if(detailsCheck!= 1) 
	{
        stud[det].id=iden_1;

    cout <<"\t Enter the Name  : ";
    cin >> stud[det].name;

    

    cout << "\t Enter the Telephone no  : ";
    cin >> stud[det].tel;

    cout << "\t Enter the Class  : ";
    cin >> stud[det].class_stud;

    cout << "\t Enter the Course code : ";
    cin >> stud[det].courseCode;

    cout << "\t Enter the Course title  : ";
    cin >> stud[det].courseTitle;

    cout << "\t Enter the Marks  : ";
    cin >> stud[det].marks;

    cout << "\t Enter the Grade  :";
    cin >> stud[det].grade;

    cout << "\t Enter the Age  :";
    cin >> stud[det].age;
    det=det+1;
    }
    else
    {
        cout << "This Record Already Exists please Try Again! \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID Number of the Student to Delete: " << endl;

            cin >> iden_1;

            for(int k=0; k<= det; k++)
            {

                iden_2=iden_1;
            if(iden_2==stud[k].id)
            {
                stud[k].id = 'x';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter the ID No. of the Student to Edit: " << endl;


            cin >>iden_1;

        for(int k=0; k<=det; k++)
        {


            iden_2=iden_1;
        if(iden_2 == stud[k].id)
        {
        cout << "\t ID Number  ";
        cout << stud[k].id;
        
        cout << "\t Name  :";
        cout << stud[k].name;
        
        cout << "\t Telephone no : ";
        cout << stud[k].tel;
        cout << "\t Class : ";
        cout << stud[k].class_stud;

        cout << "\t Course Code : ";
        cout << stud[k].courseCode;

        cout << "\t Course Title : ";
        cout << stud[k].courseTitle;
        
        cout << "\t Marks = ";
        cout << stud[k].marks;
        
        cout << "\t Grade = ";
        cout << stud[k].grade;


    cout << "\n\t Please re-enter the student's info ";
            cout << "\n\t Enter the Name = ";
            cin >> stud[k].name;

            

            cout << "\n\t Enter the Telephone no = ";
            cin >> stud[k].tel;

            cout << "\n\t Enter the Class = ";
            cin >> stud[k].class_stud;

            cout << "\n\t Enter the Course Code = ";
            cin >> stud[k].courseCode;

            cout << "\n\t Enter the Course Title = ";
            cin >> stud[k].courseTitle;

            cout << "\n\t Enter the Marks = ";
            cin >> stud[k].marks;

            cout << "\n\t Enter the Grade = ";
            cin >> stud[k].grade;

            cout << "\n\t Enter the Age = ";
            cin >> stud[k].age;
               }

    }
    break;


        case 4:
            cout << "\n________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No.        ||";
                cout << " Name         ||";
                cout << "Tele no       ||";
                cout << " Class        ||";
                cout << " Course Code  || ";
                cout << " Course Title || ";
                cout << " Marks        || ";
                cout << " Grade        ||";
            for(int j=0; j<det;j++)
            {
                if(stud[j].id!='x')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[j].id;
                    cout << "   || ";
                    cout << stud[j].name;
                    cout << "   || ";
                    cout << stud[j].tel;
                    cout << "   ||  ";
                    cout << stud[j].class_stud;
                    cout << "   ||  ";
                    cout << stud[j].courseCode;
                    cout << "   ||  ";
                    cout << stud[j].courseTitle;
                    cout << "   ||   ";
                    cout << stud[j].marks;
                    cout << "   ||   ";
                    cout << stud[j].grade;
                    cout << "   ||";
                }

            }
            }

            cout << "\n________________________________________________________________________________________________________\n";
                break;


        default:
          cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Yes/No]";
          cin>> answer ;
            }

            while(answer== 'y');


      break;

        case 2:
            cout << "You Can Edit/Add/Delete Staff Records: " << endl;

            //update/delete/edit staff records
             do
   {
       Student stud[100];

       cout << "Press 1 to Add New Staff Record" << endl;
       cout << "Press 2 to Delete Staff Record" << endl;
       cout << "Press 3 to update Staff Record" << endl;
       cout << "Press 4 to Display the list of staff  record" << endl;

       cout << endl;
       cout << "\t Select Option:";

       int detailsCheck = 0;

    int m;
    cin >> m;

    switch(m)
    {
        case  1 :


        cout << "\n Enter the info of the Staff " << det2+1 << " is :" << endl;

        cout << "\t Enter the ID No. = ";
    int iden_2;
    int iden_1;

    cin >> iden_1;

// To check if staff details

    for(int k=0; k<=det2; k++){

        iden_2=iden_1;
    if(iden_2 == stud[k].id)
    {
        detailsCheck = 1;
         }
    }
    if(detailsCheck!= 1){
        stud[det2].id=iden_1;

    cout <<"\t Enter the Name  : ";
    cin >> stud[det2].name;

    cout << "\t Enter the Telephone no  :";
    cin >> stud[det2].tel;

    cout << "\t Enter the Age  : ";
    cin >> stud[det2].age;
    det2=det2+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter the ID No. of the Staff to Delete: " << endl;

            cin >> iden_1;

            for(int k=0; k<=det2; k++)
            {

                iden_2=iden_1;
            if(iden_2 == stud[k].id)
            {
                stud[k].id= 'x';
                cout << "\t Record Successfully Deleted";
                  }
            }
                    break;
                    
        //To edit staff details//
        
        case 3:
            cout << "\n Enter the ID No. of the Staff to Edit: " << endl;


            cin >>iden_1;

        for(int k=0; k<=det; k++)
        {


            iden_2=iden_1;
        if(iden_2 == stud[k].id)
        {
        cout << "\t ID No.  ";
        cout << stud[k].id;
        cout << "\t Staff Name = ";
        cout << stud[k].name;
        cout << "\t Telephone no ";
        cout << stud[k].tel;
        cout << "\t Age ";
        cout << stud[k].age;


    cout << "\n\t Please re-enter the staffs information ";
            cout << "\n\t Enter the Staff ID No. = ";
            cin >> stud[k].id;
            cout << "\n\t Enter the Staff Name = ";
            cin >> stud[k].name;
cout << "\n\t Enter the Telephone no = ";
            cin >> stud[k].tel;

            cout << "\n\t Enter the Age = ";
            cin >> stud[k].age;
               }
        }

                break;

            case 4:
            cout << "\n_________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No.   |";
                cout << " Name    |";
                cout << "Address  |";
                cout << "Tele no  |";
                cout << " Age     |";
            for(int j=0; j<det; j++)
            {
                if(stud[j].id!='x')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[j].id;
                    cout << "   | ";
                    cout << stud[j].name;
                    cout << "   | ";
                    cout << stud[j].tel;
                    cout << "   |  ";
					cout << stud[j].age;
                    cout << "   |";
                }

            }
            }

            cout << "\n-----------------------------------------------------------------------------------------------------------\n";

                break;


        default:
            cout << "\t You've selected a wrong Option";
            break;
    }
          cout << "\n \n \t Do You want to Continue Again? [Yes/No]";
          cin>> answer;
            }

            while(answer =='y');

            break;




    return 0;
    




    }


}

