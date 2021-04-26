// Tyler Pruitt

// DEFINE YOUR FUNCTIONS HERE
// They have to be declared in the "headers.h" file.
//
// You *have* to use these 2 functions (already declared in records.cpp), 
// but you may add other functions in here as well, if you want.
// See hint in the lab description document.

void InitializeStructures(UndergradStudents us[], int &size)
{
    int count = 0;
    string firstname, lastname, major;
    double gpa1, gpa2, gpa3, gpa4;

    for (int i=0;i<20;i++)
    {   
        cout << "Enter first name for student " << i+1 << " (or X to quit): ";
        getline(cin, firstname);

        if (firstname=="X")
        {
            break;
        }

        cout << "Enter last name for student " << i+1 << ": ";
        getline(cin, lastname);

        cout << "Enter major for student " << i+1 << ": ";
        getline(cin, major);

        cout << "Enter GPA Year 1 for student " << i+1 << ": ";
        cin >> gpa1;
        cout << "Enter GPA Year 2 for student " << i+1 << ": ";
        cin >> gpa2;
        cout << "Enter GPA Year 3 for student " << i+1 << ": ";
        cin >> gpa3;
        cout << "Enter GPA Year 4 for student " << i+1 << ": ";
        cin >> gpa4;

        cout << "" << endl; //insert extra line

        //cin.get();
        newLine();
        
       us[i] = {i+1, firstname, lastname, major, {gpa1, gpa2, gpa3, gpa4}};
       
       count++;
    }
    size = count;
}

void WriteResults(ofstream &outf, UndergradStudents us[], int size)
{
    SortResultsBubble(us, size);

    outf.open("Results.txt");

    outf.setf(ios::fixed);
    outf.setf(ios::showpoint);
    outf.precision(2);

    outf << "These are the sorted results:" << endl;

    for (int i=0;i<size;i++)
    {
        outf << "ID# " << us[i].id << ", " << us[i].lastName << ", " << us[i].firstName << ", " << us[i].major << ", Average GPA: " << (us[i].gpa.firstYear + us[i].gpa.secondYear + us[i].gpa.thirdYear + us[i].gpa.fourthYear)/4.0 << endl;
    }

    outf.close();
}

void SortResultsBubble(UndergradStudents us[], int size)
{
    //bubble sort

    //prepare last names for selection sort, but swap both names and us[]
    string lastname[size];
    
    for (int i=0;i<size;i++)
    {
        lastname[i] = us[i].lastName;
    }
    
    for (int i=size-1;i>=0;i--)
    {
        for (int j=1;j<=i;j++)
        {
            if (lastname[j-1]>lastname[j])
            {
                string tempName;
                tempName = lastname[j-1];
                lastname[j-1] = lastname[j];
                lastname[j] = tempName;

                UndergradStudents tempStudent;
                tempStudent = us[j-1];
                us[j-1] = us[j];
                us[j] = tempStudent;
            }
        }
    }
}

void newLine()
{
    char c;
    do
    {
        cin.get(c);
    } while(c != '\n');
}
