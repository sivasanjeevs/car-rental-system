#include<iostream>
#include<fstream>
#include<string>
#include<unistd.h>
#include<stdlib.h>
using namespace std;

int fflag=0;
int gflag=0;
int a,c,admin=0,login=0;
class A
{

    string id,cop;
    string password;

    public:
        void menu()
        {
            print();
            cout<<"\t\t\t---------------------------------------------\n";
            cout<<"\t\t\t|                                            |\n";
            cout<<"\t\t\t|         --- CAR RENTAL SYSTEM ---          |\n";
            cout<<"\t\t\t|                                            |\n";
            cout<<"\t\t\t|                 1) ADMIN                   |\n";
            cout<<"\t\t\t|                 2) USER                    |\n";
            cout<<"\t\t\t|                                            |\n";
            cout<<"\t\t\t---------------------------------------------\n\n";
            cout<<"enter the choice: ";
            cin>>a;
                if(a==1)
                {
//                      print();
                        cout<<endl;
                         cout<<"\t\t\t         ---ADMIN LOGIN---"<<endl;
//                                while(1)
//                                {
                                        ifstream myfile("admin.txt",ios::in);

                                        if(myfile.is_open())
                                        {
                                                int che=0;
                                                cout<<"\t\t\tenter the admin id:  ";
                                                cin>>id;
                                                while(!myfile.eof())
                                                {
                                                        myfile>>cop;
                                                        if(id==cop)
                                                        {
                                                                che=1;
                                                                cout<<"\t\t\tenter the password:  ";
                                                                cin>>password;
                                                                myfile>>cop;
                                                                if(password==cop)
                                                                {
                                                                        cout<<"\t\t\tYou are sucessfully logged in "<<endl;
                                                                        admin=1;
                                                                        break;
                                                                }
                                                                else
                                                                {
                                                                        cout<<"\t\t\tYour password is wrong"<<endl;
                                                                        sleep(2);
                                                                        menu();
                                                                }
                                                        }
                                                }
                                                if(che==0)
                                                {
                                                        cout<<"\t\t\tuser id not found"<<endl;
                                                        sleep(2);
                                                        menu();
                                                }
                                                //else
                                                  //      break;
//                                        }
                                }
                    fflag=1;
                }
                if(a==2)
                {
                        print();
                        cout<<endl;
                        cout<<"\t\t\t-----------------------------------------------------\n\n";
                        cout<<"\t\t\t          1) login (open an exixting account)\n\n";
                        cout<<"\t\t\t          2) sign up (create a new account)  \n\n";
                        cout<<"\t\t\t-----------------------------------------------------\n\n";
                        cout<<"enter the choice: ";
                        cin>>c;
                        if(c==2)
                        {
                                cout<<"\t\t\t          ---USER SIGNUP---"<<endl;
                                ofstream file("user.txt",ios::app);
                                if(!file.is_open())
                                {
                                        cout<<"file is not opening"<<endl;
                                }
                                else
                                {
                                        cout<<"\t\t\tenter id: ";
                                        cin>>id;
                                        cout<<"\t\t\tenter password: ";
                                        cin>>password;
                                        file<<id<<" "<<password<<endl;
                                        cout<<"\t\t\tsuccessfully created a new account"<<endl;
                                }
                                int flag=1;
                        }
                        if(c==1)
                        {
                                cout<<"\t\t\t         ---USER LOGIN---"<<endl;
                                while(1)
                                {
                                        ifstream myfile("user.txt",ios::in);

                                        if(myfile.is_open())
                                        {
                                                int check=0;
                                                cout<<"\t\t\tenter the user id:  ";
                                                cin>>id;
                                                while(!myfile.eof())
                                                {
                                                        myfile>>cop;
                                                        if(id==cop)
                                                        {
                                                                check=1;
                                                                cout<<"\t\t\tenter the password:  ";
                                                                cin>>password;
                                                                myfile>>cop;
                                                                if(password==cop)
                                                                {
                                                                        cout<<"\t\t\tYou are sucessfully logged in "<<endl;
                                                                        login=1;
                                                                        break;
                                                                }
                                                                else
                                                                {
                                                                        cout<<"\t\t\tYour password is wrong"<<endl;
                                                                        menu();
                                                                }
                                                        }
                                                }
                                                if(check==0)
                                                {
                                                        cout<<"\t\t\tuser id not found"<<endl;
                                                }
                                                else
                                                        break;
                                        }
                                }
                                int flag=1;
                        }
                        gflag=1;
                }
        }
         void print()
        {
                system("clear");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"                            ---------                   \n";
                cout<<"                            |       |                   \n";
                cout<<"                     --------       ------              \n";
                cout<<"                     |                    |             \n";
                cout<<"                      ----O----------O-----             \n";
                usleep(250000);
                system("clear");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"                                             ---------                   \n";
                cout<<"                                             |       |                   \n";
                cout<<"                                      --------       ------              \n";
                cout<<"                                      |                    |             \n";
                cout<<"                                       ----O----------O-----             \n";
                usleep(250000);
                system("clear");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"                                                              ---------                   \n";
                cout<<"                                                              |       |                   \n";
                cout<<"                                                       --------       ------              \n";
                cout<<"                                                       |                    |             \n";
                cout<<"                                                        ----O----------O-----             \n";
                usleep(250000);
                system("clear");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<"                                                                              ---------                   \n";
                cout<<"                                                                              |       |                   \n";
                cout<<"                                                                       --------       ------              \n";
                cout<<"                                                                       |                    |             \n";
                cout<<"                                                                        ----O----------O-----             \n";
                usleep(250000);
                system("clear");

        }
};



int w;
class X : public A
{
        string na,cna;
        long int no,pr;
        long int dnu,nu;
        string yu;
        string de,array[1000];
        public:
                void cab()
                {
                        for(int i=0; ;i++)
                        {
                                cout<<"\t\t\t-----------------------------------"<<endl;
                                cout<<"\t\t\t|                                  |"<<endl;
                                cout<<"\t\t\t|        ---CAR BOOKING---         |"<<endl;
                                cout<<"\t\t\t|                                  |"<<endl;
                                cout<<"\t\t\t|          1) insert               |"<<endl;
                                cout<<"\t\t\t|          2) book a car           |"<<endl;
                                cout<<"\t\t\t|                                  |"<<endl;
                                cout<<"\t\t\t------------------------------------"<<endl;
                                cout<<"enter your choice : ";
                                cin>>w;
                                if(w==2)
                                {
                                        ofstream file("d.txt",ios::app);
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                cout<<"enter name: ";
                                                cin>>na;
                                                cout<<"contact number: ";
                                                cin>>nu;
                                                cout<<"enter your place: ";
                                                cin>>yu;
                                                cout<<"enter destination: ";
                                                cin>>de;
                                                file<<"NAME:"<<na<<"      "<<"CONTACT NO:"<<nu<<"      "<<"YOURPLACE:"<<yu<<"      "<<"DESTINATION:"<<de<<"      "<<endl;
                                        }
                                        cout<<"\n\n\t\t\tLIST OF CARS AVAILABLE!\n\n";
                                        ifstream myfile;
                                        myfile.open("cabs.txt");
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                string line;
                                                int i=1;
                                                while(!myfile.eof())
                                                {
                                                        getline(myfile,line);
                                                        cout<<i++<<" "<<line<<endl;
                                                }
                                        }
                                        myfile.close();

                                        int l=0,co;
                                        cout<<"enter the sno of the car which you wanna book: ";
                                        cin>>co;
                                        ifstream mfile;
                                        mfile.open("cabs.txt");
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                while(!mfile.eof())
                                                {
                                                        getline(mfile,array[l]);
                                                        l++;
                                                }
                                        }
                                        mfile.close();
                                        for(int k=0;k<l;k++)
                                        {
                                                if(co==k)
                                                {
                                                        system("clear");
                                                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPROCESSING...."<<endl;
                                                        sleep(1);
                                                        system("clear");

                                                        cout<<"\t\t\t\t-----------------------------------------------------------------\n";
                                                        cout<<"\t\t\t\t|               SUCCESSFULLY BOOKED A CAR                        |\n";
                                                        cout<<"\t\t\t\t|                                                                |\n";
                                                        cout<<"\t\t\t\t|            car will be in your place in 5 min                  |\n";
                                                        cout<<"\t\t\t\t|                                                                |\n";
                                                        cout<<"\t\t\t\t|   "<<array[k-1]<<"        |\n";
                                                        cout<<"\t\t\t\t------------------------------------------------------------------\n";
                                                        cout<<"\t\t\t\t\t\tNAME: "<<na<<endl;
                                                        cout<<"\t\t\t\t\t\tNUMBER: "<<nu<<endl;
                                                        cout<<"\t\t\t\t\t\tYOUR LOCATION: "<<yu<<endl;
                                                        cout<<"\t\t\t\t\t\tDESTINTION: "<<de<<endl;
                                                        cout<<"\t\t\t\t------------------------------------------------------------------\n";
                                                        sleep(5);
                                                }
                                        }
                                        break;
                                }
                                else if(w==1)
                                {
                                        ofstream file("cabs.txt",ios::app);
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                cout<<"car name: ";
                                                cin>>cna;
                                                cout<<"driver number: ";
                                                cin>>dnu;
                                                cout<<"no of seats: ";
                                                cin>>no;
                                                cout<<"price: ";
                                                cin>>pr;
                                                file<<"CAR:"<<cna<<"  "<<"DRIVER NO:"<<dnu<<"  "<<"SEATS:"<<no<<"  "<<"PRICE PER KM:"<<pr<<"  "<<endl;
                                        }
                                        break;
                                }
                                else
                                {
                                        cout<<"you entered a wrong number "<<endl;
                                }
                        }
                }
};
class Xu
{
        string na,cna;
        long int no,pr;
        long int dnu,nu;
        string yu;
        string de,array[1000];
        public:
                    void cabu()
                    {
                        for(int i=0; ;i++)
                        {
                                cout<<"\t\t\t-------------------------------------"<<endl;
                                cout<<"\t\t\t|                                    |"<<endl;
                                cout<<"\t\t\t|         ---CAR BOOKING---          |"<<endl;
                                cout<<"\t\t\t|                                    |"<<endl;
                                cout<<"\t\t\t|          1) book a car             |"<<endl;
                                cout<<"\t\t\t|                                    |"<<endl;
                                cout<<"\t\t\t--------------------------------------"<<endl;
                                cout<<"enter your choice : ";
                                cin>>w;                                if(w==1)
                                {
                                        ofstream file("d.txt",ios::app);
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                system("cls");
                                                cout<<"enter name: ";
                                                cin>>na;
                                                cout<<"contact number: ";
                                                cin>>nu;
                                                cout<<"enter your place: ";
                                                cin>>yu;
                                                cout<<"enter destination: ";
                                                cin>>de;
                                                file<<"NAME:"<<na<<"      "<<"CONTACT NO:"<<nu<<"      "<<"YOURPLACE:"<<yu<<"      "<<"DESTINATION:"<<de<<"  $
                                        }
                                        cout<<"\n\n\t\t\tLIST OF CARS AVAILABLE!\n\n";
                                        ifstream myfile;
                                        myfile.open("cabs.txt");
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                string line;
                                                int i=1;
                                                while(!myfile.eof())
                                                {
                                                        getline(myfile,line);
                                                                   cout<<i++<<" "<<line<<endl;

                                                }
                                        }
                                        myfile.close();

                                        int l=0,co;
                                        cout<<"enter the sno of the car which you wanna book: ";
                                        cin>>co;
                                        ifstream mfile;
                                        mfile.open("cabs.txt");
                                        if(!file.is_open())
                                        {
                                                cout<<"cant open file"<<endl;
                                        }
                                        else
                                        {
                                                while(!mfile.eof())
                                                {
                                                        getline(mfile,array[l]);
                                                        l++;
                                                }
                                        }
                                        mfile.close();
                                        for(int k=0;k<l;k++)
                                        {
                                                if(co==k)
                                                {
                                                        system("clear");
                                                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPROCESSING...."<<endl;
                                                        sleep(1);
                                                        system("clear");

                                                        cout<<"\t\t\t\t-----------------------------------------------------------------\n";
                                                        cout<<"\t\t\t\t|             SUCCESSFULLY BOOKED A CAR                          |\n";
                                                        cout<<"\t\t\t\t|                                                                |\n";
                                                        cout<<"\t\t\t\t|           car will be in your place in 5 min                   |\n";
                                                        cout<<"\t\t\t\t|                                                                |\n";
                                                        cout<<"\t\t\t\t|   "<<array[k-1]<<"        |\n";
                                                        cout<<"\t\t\t\t------------------------------------------------------------------\n";
                                                        cout<<"\t\t\t\t\t\tNAME: "<<na<<endl;
                                                        cout<<"\t\t\t\t\t\tNUMBER: "<<nu<<endl;
                                                        cout<<"\t\t\t\t\t\tYOUR LOCATION: "<<yu<<endl;
                                                        cout<<"\t\t\t\t\t\tDESTINTION: "<<de<<endl;
                                                        cout<<"\t\t\t\t------------------------------------------------------------------\n";
                                                        sleep(5);
                                                }
                                        }
                                        break;
                                }
                        }
                    }
};

class carbuy : public A
{
    string ca,nam;
    string co,arr[1000];
    long int numb,con;
    int pri;
    public:
    void buy()
     {
        int a;
        for(int i=0; ;i++)
        {
            cout<<"\t\t\t-----------------------------\n";
            cout<<"\t\t\t|                           |\n";
            cout<<"\t\t\t|     ---CAR BUYING---      |\n";
            cout<<"\t\t\t|                           |\n";
            cout<<"\t\t\t|        1) insert          |\n";
            cout<<"\t\t\t|        2) buy             |\n";
            cout<<"\t\t\t|                           |\n";
            cout<<"\t\t\t-----------------------------\n";
            cout<<"enter your choice: ";
            cin>>a;            if(a==1)
            {
                ofstream file("buy.txt",ios::app);
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    cout<<"car: ";
                    cin>>ca;
                    cout<<"colour: ";
                    cin>>co;
                    cout<<"no of seats: ";
                    cin>>numb;
                    cout<<"price: ";
                    cin>>pri;
                    file<<"CAR:"<<ca<<"  "<<"DRIVER NO:"<<co<<"  "<<"SEATS:"<<numb<<"  "<<"PRICE:"<<pri<<"  "<<endl;
                }
                break;
            }
            else if(a==2)
            {
                ofstream file("info.txt",ios::app);
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                         cout<<"enter name: ";
                    cin>>nam;
                    cout<<"contact number: ";
                    cin>>con;
                    file<<"NAME:"<<nam<<"  "<<"CONTACT NO:"<<con<<"  "<<endl;
                }
                cout<<"\n\n\t\t\tLIST OF CARS AVAILABLE!\n\n";
                ifstream myfile;
                  myfile.open("buy.txt");
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    int j=1;
                    string line;
                    while(!myfile.eof())
                    {
                        getline(myfile,line);
                        cout<<j++<<" "<<line<<endl;
                    }
                }
                myfile.close();
                int l=0,co;
                cout<<"enter the no of the car which you want to book:";
                cin>>co;
                ifstream mfile;
                mfile.open("buy.txt");
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    while(!mfile.eof())
                    {
                        getline(mfile,arr[l]);
                        l++;
                    }
                }
                mfile.close();
                for(int k=0;k<l;k++)
                {
                    if(co==k)
                    {
                        system("clear");
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPROCESSING...."<<endl;
                        sleep(1);
                        system("clear");

                        cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
                        cout<<"\t\t\t\t|                    SUCCESSFULLY REGISTERED A CAR                        |\n";
                        cout<<"\t\t\t\t|                                                                         |\n";
                        cout<<"\t\t\t\t|      you can take your car in our nearby car showroom by paying         |\n";
                        cout<<"\t\t\t\t|                                                                         |\n";
                        cout<<"\t\t\t\t|   "<<arr[k-1]<<"                |\n";
                        cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
                        cout<<"\t\t\t\t\t\tNAME: "<<nam<<endl;
                        cout<<"\t\t\t\t\t\tNUMBER: "<<con<<endl;
                        cout<<"\t\t\t\t--------------------------------------------------------------------------\n";
                        sleep(5);
                    }
                }
                break;
            }
            else
            {
                cout<<"you entered a wrong number "<<endl;
            }

        }
    }
};

class carbuyu
{
    string ca,nam;
    string co,arr[1000];
    int numb,con;
    int pri;
        public:
        void buyu()
        {
                int a;
            for(int i=0 ; ;i++ )
            {
            cout<<"\t\t\t----------------------------\n";
            cout<<"\t\t\t|                          |\n";
            cout<<"\t\t\t|     ---CAR BUYING---     |\n";
            cout<<"\t\t\t|                          |\n";
            cout<<"\t\t\t|         1) buy           |\n";
            cout<<"\t\t\t|                          |\n";
            cout<<"\t\t\t----------------------------\n";
            cout<<"enter your choice: ";
            cin>>a;
            if(a==1)
            {
                ofstream file("info.txt",ios::app);
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    cout<<"enter name: ";
                    cin>>nam;
                    cout<<"contact number: ";
                    cin>>con;
                    file<<"NAME:"<<nam<<"  "<<"CONTACT NO:"<<con<<"  "<<endl;
                }
                cout<<"\n\n\t\t\tLIST OF CARS AVAILABLE!\n\n";
                ifstream myfile;
                myfile.open("buy.txt");
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    int j=1;
                    string line;
                    while(!myfile.eof())
                    {
                        getline(myfile,line);
                        cout<<j<<" "<<line<<endl;
                        j++;
                    }
                }
                myfile.close();
                int l=0,co;
                cout<<"enter the no of the car which you want to book:";
                cin>>co;
                ifstream mfile;
                mfile.open("buy.txt");
                if(!file.is_open())
                {
                    cout<<"cant open file"<<endl;
                }
                else
                {
                    while(!mfile.eof())
                    {
                        getline(mfile,arr[l]);
                        l++;
                    }
                }
                mfile.close();
                for(int k=0;k<l;k++)
                {
                    if(co==k)
                    {
                        system("clear");
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tPROCESSING...."<<endl;
                        sleep(1);
                        system("clear");

                        cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
                        cout<<"\t\t\t\t|                    SUCCESSFULLY REGISTERED A CAR                        |\n";
                        cout<<"\t\t\t\t|                                                                         |\n";
                        cout<<"\t\t\t\t|      you can take your car in our nearby car showroom by paying         |\n";
                        cout<<"\t\t\t\t|                                                                         |\n";
                        cout<<"\t\t\t\t|   "<<arr[k-1]<<"                |\n";
                        cout<<"\t\t\t\t---------------------------------------------------------------------------\n";
                        cout<<"\t\t\t\t\t\tNAME: "<<nam<<endl;
                        cout<<"\t\t\t\t\t\tNUMBER: "<<con<<endl;
                        cout<<"\t\t\t\t--------------------------------------------------------------------------\n";
                        sleep(5);
                    }
                }
                break;
            }
            else
            {
                cout<<"you entered a wrong number "<<endl;
            }

        }
    }
};

int main()
{
/*
    A car1;
    car1.menu();*/
    X cab1;
    cab1.menu();
    Xu xu1;
    carbuy b;
    carbuyu bu;
    int a;
    if(fflag==1)
    {
        for(int t=0; ;t++)
        {
                cab1.print();
                cout<<"\n\n\t\t\t-------------------------------------";
                cout<<"\n\n\t\t\tPress<1> to insert or rent a car"<<endl;
                cout<<"\n\n\t\t\tPress<2> to insert or buy a car"<<endl;
                cout<<"\n\n\t\t\tpress<3> exit"<<endl;
                cout<<"\n\t\t\t-------------------------------------\n\n";
                cout<<"enter your choice: ";
                cin>>a;
                if(a==1)
                        cab1.cab();
                else if(a==2)
                        b.buy();
                else
                        break;
        }
    }

    else if(gflag==1)
    {
        cout<<"\n\n\t\t\t-------------------------";
        cout<<"\n\n\t\t\tPress<1> to rent a car"<<endl;
        cout<<"\n\n\t\t\tPress<2> to buy a car"<<endl;
        cout<<"\n\n\t\t\t------------------------\n\n";
        cout<<"enter your choice";
        cin>>a;
        if(a==1)
                xu1.cabu();
        else
                bu.buyu();
    }
    cab1.print();

}
