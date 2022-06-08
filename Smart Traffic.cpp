#include<bits/stdc++.h>
#include <fstream>
#include <chrono> //for delay
#include <stdlib.h>
#include<ctime>


// ***** Smart Traffic Management Solution *****

//keep the record of vehicles                      == recOfVeh()
//keep the record of challan done                  == recOfChall()
//Search the record of vehicles                    == vehSearch()
//Display information of traffic in control booths == trafContBooth()
//Helpline Information and nearby hospitals        == helpInfo()
//control the traffic                              == trafCont()


using namespace std;


class SmartTrafficManagementSystem{


public:

    int welcome()
    {
        system("cls");
        time_t tt;
        struct tm * ti;
        time (&tt);
        ti = localtime(&tt);

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"                                                     " <<asctime(ti);
        delay1();

        system("cls");

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                          WELCOME TO                                                             '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                SMART TRAFFIC MANAGEMENT SYSTEM                                                  '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                   Press Your Option :-                                                                                          '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                    1.Record of Vehicles                                                                         '**"<<endl;
        cout<<"**'                                    2.Record of Challan                                                                          '**"<<endl;
        cout<<"**'                                    3.Search the Record of Vehicles                                                              '**"<<endl;
        cout<<"**'                                    4.Traffic Control Booths                                                                     '**"<<endl;
        cout<<"**'                                    5.Control the Traffic                                                                        '**"<<endl;
        cout<<"**'                                    6.Help                                                                                  '**"<<endl;
        cout<<"**'                                    7.Exit                                                                                       '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                   Enter your choice __                                                                                          '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<"**'                                                                                                                                 '**"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;


        int choice{0};
        cin>>choice;
        if(choice > 0 && choice < 8)
        {
            switch (choice)
            {
                case 1:
                    system("cls");
                    recOfVeh();
                    break;

                case 2:
                    system("cls");
                    recOfChall();
                    break;

                case 3:
                    system("cls");
                    vehSearch();
                    break;

                case 4:
                    system("cls");
                    trafContBooth();
                    break;

                case 5:
                    system("cls");
                    trafContBooth();
                    break;

                case 6:
                    system("cls");
                    helpInfo();
                    break;
                case 7:
                    exit(0);
            }
        } else{
            cout<<"Enter Valid option !!"<<endl;
            delay();

            system("cls");

            welcome();
        }
        return 0;
    }

    int delay()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(1000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int delay1()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(1000000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int delay2()
    {
        using namespace std::this_thread; // sleep_for, sleep_until
        using namespace std::chrono; // nanoseconds, system_clock, seconds

        sleep_for(nanoseconds(100000000));
        sleep_until(system_clock::now() + seconds(1));
    }
    int recOfVeh()
    {
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                      * Record of Vehicles *                                                         *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Add a New Vehicle                                                                           *"<<endl;
        cout<<"*                                      2. Search a Vehicle Using registration number                                                  *"<<endl;
        cout<<"*                                      3. Search a Vehicle Using Name of the owner                                                    *"<<endl;
        cout<<"*                                      4. Display Records                                                                             *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int ROVChoice{0};
        cin>>ROVChoice;
        switch (ROVChoice)
        {
            case 0:
                system("cls");
                welcome();
                break;

            case 1:
                recOfVeh_1();
                break;

            case 2:
                recOfVeh_2();
                break;

            case 3:
                recOfVeh_3();
                break;
            case 4:
                display1();
                break;

        }
        return 0;
    }
    int display1()
    {

        system("cls");
        string path = "RecordOfVehicles.txt";
        ifstream file( path.c_str() );
        string line;
        if( file.is_open() )
        {
            cout << "               Welcome to Vehicle Management System\n"<<endl;

            cout <<endl<< "Record of Vehicles: "<<endl ;
                    int n=1,count=1;
                    while (getline(file, line))
                    {
                        if(line == "")
                        {
                            cout << "Record #"<<n<<endl;
                            n++;
                        }

                        else if(count%2==0)
                        {
                            cout << "Owner Name: " << line << '\n';
                            count++;
                        }
                        else
                        {
                            cout << "Vehicle Number: " << line << '\n' ;
                            count++;

                        }


                    }


                    file.close();
        }


        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
        int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for Record of Vehicles : ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    system("cls");
                    recOfVeh();


    }
    int recOfVeh_1()
    {
        system("cls");
        fstream fio;
        string line;
        cout << "                    Welcome to Registration of Vehicles\n"<<endl;
        cout<<"Enter Registration number of the Vehicle in the first line "<<endl;
        cout<<"Enter Name of the owner in the second line "<<endl;
        cout<<endl<<"Enter './' to Exit ";
        fio.open("RecordOfVehicles.txt", ios::app | ios::out | ios::in);

        // Execute a loop If file successfully Opened
        while (fio) {

            // Read a Line from standard input
            getline(cin, line);

            // Press -1 to exit
            if (line == "./")
                break;

            // Write line in file
            fio << line << endl;
        }
        cout<<"Data Entered successfully !!"<<endl;
        delay();

        system("cls");
        recOfVeh();
    }

    int recOfVeh_2()
    {
        system("cls");
        string path = "RecordOfVehicles.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "                    Welcome to Registration of Vehicles\n" ;

            cout <<endl<< "Write the Registration number of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The registration number '" << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                (choice ==1) ? welcome(): recOfVeh_2();



            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                 (choice ==1) ? welcome(): recOfVeh_2();
            }
        }

        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }


    }

    int recOfVeh_3()
    {
        system("cls");

        string path = "RecordOfVehicles.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "                    Welcome to Registration of Vehicles\n" ;

            cout <<endl<< "Write the Name of the Owner of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate ) ++countwords ;
            }
            if (countwords > 0){
                cout << "The Name of the Owner '" << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfVeh_2();

            }
            else{
                cout<<"Name of the Owner does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfVeh_2();
            }
        }

        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }
    }

    int recOfChall()
    {
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                      * Record of Challan *                                                          *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Add a New Challan                                                                           *"<<endl;
        cout<<"*                                      2. Search a Challan Using registration number                                                  *"<<endl;
        cout<<"*                                      3. Search a Challan Using Name of the owner                                                    *"<<endl;
        cout<<"*                                      4. Display Challans                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int ROCChoice{0};
        cin>>ROCChoice;
        switch (ROCChoice)
        {
            case 0:
                system("cls");
                welcome();
                break;

            case 1:
                recOfChall_1();

                break;

            case 2:
                recOfChall_2();
                break;

            case 3:
                recOfChall_3();
                break;
            case 4:
                display();
                break;
            default:
                cout << "please enter a valid case" << endl;

        }
        return  0;
    }
    int display()
    {

        system("cls");
        string path = "RecordOfChallan.txt";
        ifstream file( path.c_str() );
        string line;
        if( file.is_open() )
        {
            cout << "               Welcome to Challan Management System\n"<<endl;

            cout <<endl<< "Record of Challans: "<<endl ;
                    int n=1,count=1;
                    while (getline(file, line))
                    {
                        if(line == "")
                        {
                            cout << "Challan #"<<n<<endl;
                            n++;
                        }

                        else if(count%2==0)
                        {
                            cout << "Owner Name: " << line << '\n';
                            count++;
                        }
                        else
                        {
                            cout << "Vehicle Number: " << line << '\n' ;
                            count++;

                        }


                    }


                    file.close();
        }


        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
        int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for Record of Challans : ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    system("cls");
                    recOfChall();

    }
    int recOfChall_1()
    {

        system("cls");
        fstream fio;
        string line;

        cout << "               Welcome to Challan Management System\n"<<endl;

        cout<<"Enter Registration number of the Vehicle in the first line "<<endl;
        cout<<"Enter Name of the owner in the second line "<<endl;
        cout<<endl<<"Enter './' to Exit ";
        fio.open("RecordOfChallan.txt", ios::app | ios::out | ios::in);

        // Execute a loop If file successfully Opened
        while (fio) {

            // Read a Line from standard input
            getline(cin, line);

            // Press -1 to exit
            if (line == "./")
                break;

            // Write line in file
            fio << line << endl;
        }
        cout<<"Data Entered successfully !!"<<endl;
        delay();

        system("cls");
        recOfChall();

    }

    int recOfChall_2()
    {

        system("cls");
        string path = "RecordOfChallan.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "               Welcome to Challan Management System\n"<<endl;

            cout <<endl<< "Write the registration number of the vehicle you want to searching for\n" ;
            string word ;
            getline(cin,word);

            int countwords = 0 ;
            string candidate ;
            while( getline(file,candidate) ) // for each candidate word read from the file
            {
                cout << candidate;
                if( word == candidate ){ ++countwords;
                }
            }
          if (countwords > 0){
                cout << "The Registration number '" << word << "' has been found in our records."<<endl ;
                delay();
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number.";

                cin>>choice;
                if (choice ==1){
                    welcome();
                    return 0;}
                else
                    recOfChall_2();
            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number.";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_2();
            }
        }

        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
    }

    int recOfChall_3()
    {
        system("cls");
        string path = "RecordOfChallan.txt";
        ifstream file( path.c_str() );

        if( file.is_open() )
        {
            cout << "               Welcome to Challan Management System\n"<<endl;

            cout <<endl<< "Write the Name of the Owner of the vehicle you want to searching for\n" ;
            string word ;
            cin >> word ;

            int countwords = 0 ;
            string candidate ;
            while( getline(file,candidate) ) // for each candidate word read from the file
            {
                if( word == candidate ) cout << candidate; ++countwords ;
            }
            if (countwords > 0){
                cout << "The Name of the Owner '" << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_3();

            }
            else{
                cout<<"Name of the Owner does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the Name of the Owner ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    recOfChall_3();
            }
        }

        else
        {
            cerr << "Error! 402!\n" ;
            delay();
            welcome();

        }
    }

    int vehSearch()
    {

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                 * Search the Record of Vehicles *                                                   *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                               Enter The Vehicles Registration Number                                                *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;


        string path = "RecordOfVehicles.txt";
        ifstream file( path.c_str() );
        system("cls");

        if( file.is_open() )
        {
            cout <<endl<< "Write the registration number of the vehicle you want to searching for\n" ;

            string word ;
            cin >> word ;
            int countwords = 0 ;
            string candidate ;
            while( file >> candidate ) // for each candidate word read from the file
            {
                if( word == candidate )++countwords ;

            }
            if (countwords > 0){
                cout << "The registration number '" << word << "' has been found in our records."<<endl ;

                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    vehSearch();
            }
            else{
                cout<<"Registration number does not foud !!";
                int choice;
                cout<<endl<<"Enter 1 to go to home screen and enter 2 for again entering the registration number ";
                cin>>choice;
                if (choice ==1)
                    welcome();
                else
                    vehSearch();
            }
        }
        else
        {
            cerr << "Error! 401!\n" ;
            delay();
            welcome();

        }


    }

    int trafContBooth()
    {

        // Traffic Control Booths

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                     * Traffic Control Booths *                                                      *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Chennai Traffic Control Booth                                                               *"<<endl;
        cout<<"*                                      2. Coimbatore Traffic Control Booth                                                            *"<<endl;
        cout<<"*                                      3. Madurai Traffic Control Booth                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int TCBChoice{0};
        cin>>TCBChoice;
        switch (TCBChoice)
        {
            case 0:
                system("cls");
                welcome();
                break;

            case 1:
                trafContBooth_1();
                break;

            case 2:
                trafContBooth_2();
                break;

            case 3:
                trafContBooth_3();
                break;

        }

        return 0;

    }
    int trafContBooth_1()
    {
        system("cls");

        for (int i = 0; i < 50; ++i) {

            cout<<"                     Chennai City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i+1<<"                                             "<<i+5<<endl;
            delay();

            system("cls");

        }
        trafContBooth();
    }

    int trafContBooth_2()
    {
        system("cls");

        for (int i = 0; i < 50; ++i) {

            cout<<"                      Coimbatore City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i+5<<"                                             "<<i*7<<endl;
            delay();

            system("cls");

        }
        trafContBooth();


    }

    int trafContBooth_3()
    {

        system("cls");

        for (int i = 0; i < 50; ++i) {

            cout<<"                      Madurai City Traffic Control Booth                 "<<endl;
            cout<<"Vehicles Going out of the City                   Vehicles coming into the City"<<endl;
            cout<<endl<<"      "<<i*16<<"                                             "<<i*22<<endl;
            delay();

            system("cls");

        }
        trafContBooth();
    }

    int helpInfo()
    {
        //Helpline Information and nearby hospitals

        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                            WELCOME TO                                                               *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                  SMART TRAFFIC MANAGEMENT SYSTEM                                                    *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                             * Helpline Information And Nearby Hospitals *                                           *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Press Your Option :-                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                      1. Helpline Number                                                                             *"<<endl;
        cout<<"*                                      2. Hospitals in Coimbatore                                                                     *"<<endl;
        cout<<"*                                      3. Hospitals in Madurai                                                                        *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                     Enter 0 For Home                                                                                                *"<<endl;
        cout<<"*                     Enter your choice __                                                                                            *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<"*                                                                                                                                     *"<<endl;
        cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

        int CTTChoice{0};
        cin>>CTTChoice;
        switch (CTTChoice) {
            case 0:
                system("cls");
                welcome();
                break;

            case 1: {
                system("cls");
                string line;
                ifstream myfile("HelpNumbers.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("cls");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("cls");
                        welcome();
                    }
                }
                break;
            }
            case 2: {

                system("cls");
                string line;
                ifstream myfile("HCoimbatore.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("cls");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("cls");
                        welcome();
                    }
                }
            }
                break;

            case 3: {

                system("cls");
                string line;
                ifstream myfile("HMadurai.txt");
                if (myfile.is_open()) {
                    while (getline(myfile, line)) {
                        cout << line << '\n';
                    }
                    myfile.close();
                } else cout << "Error! 403!";

                int choice;
                cout << endl << "Enter 1 to go Home Page" << endl;
                cin >> choice;
                if (choice == 1) {
                    system("cls");
                    welcome();
                } else {
                    cout << endl << "Enter Valid option !!";
                    cout << endl << endl << "Enter 1 to go Home Page" << endl;
                    cin >> choice;
                    if (choice == 1) {
                        system("cls");
                        welcome();
                    }
                }


                break;

            }
        }

        return 0;
    }

};
int main()
{
    SmartTrafficManagementSystem ob1;
    ob1.welcome();
    return 0;

}
