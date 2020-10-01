#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void first();
void second();
int choice;
int main()
{ cout<<"This is Management Team of Jain Hospital.\n";
  char cho='y';
  string userName;
  string userPassword;
  int loginAttempt = 0;

     while(loginAttempt < 3)
    {   cout<<"Please Enter Your UserName: ";
        cin>>userName;
        cout<<"Please Enter Your User Password: ";
        cin>>userPassword;
        cout<<"\n\n";

        if(userName == "ravi" && userPassword == "kant")
        {   cout<<"Welcome to Jain Private Hospital!\n";
            cout<<"Thank You For Logging in. \n";
            cout<<"\n";
            break;
        }
        else
        {   cout<<"Invalid Login Attempt. Please Try Again.\n";
            loginAttempt++;
        }
    }
    if(loginAttempt == 3)
    {   cout<<"Too many login attempts! The program will now terminate.";
      return 0;
    }
    while(cho=='y'||cho=='Y')
   { cout<<"This programme will help in managing the patient  record."<<endl<<endl;
     cout<<"----------------------------------------------------------------------------"<<endl<<endl;
     cout<<"Choose '1' if the patient was warded or "<<endl<<"Choose '2' if the patient was a normal patient."<<endl<<endl;
     cin>>choice;

    if(choice == 1)
        first();
    if(choice == 2)
        second();
    cout<<endl<<endl<<"Wanna continue(y/n) : ";
    cin>>cho;
    cout<<endl;
   }
    getch();
    return 0;
}
 class patient
    {   char Name[30],Gender[7];
        int  Age,Day,Month,Spent,Year,rate,service1,total,grandtotal;
        float Sum8;
        double  service2;
        public : int pid;
                 void display();
                 void getdata();
                 void medservice();
                 void servcharge();
                 void hoscharge();
                 void medicine();
                 void modify();
                 void dailyrate();
    };
void patient :: getdata()
{   cout<<endl<<"Enter patient id no : ";
    cin>>pid;
    cout<<"Enter Patient Name: ";
    cin>>Name;
    cout<<"Enter Patient Gender (Female/Male): ";
    cin>>Gender;
    cout<<"Enter Patient Year of Birth (YYYY) : ";
    cin>>Year;
    cout<<"Enter Patient Month of Birth (MM): ";
    cin>>Month;
    cout<<"Enter Patient Day of Birth (DD): ";
    cin>>Day;
    cout<<"Enter Patient Age: ";
    cin>>Age;
    if(choice == 1)
    { cout<<"\nPlease enter number of days spent in the hospital: ";
      cin>>Spent;
    }
    cout<<"Please select the daily rate according to the classes:"<<endl;
    cout<<"1. Executive Class \n";
    cout<<"2. First Class \n";
    cout<<"3. Second Class \n\n";
    cin>>rate;
    hoscharge();
    medicine();
    medservice();
    servcharge();
    hoscharge();
}
void patient :: display()
{ cout<<endl<<endl<<"Patient id no : "<<pid;
  cout<<endl<<"Patient Name: "<<Name;
  cout<<endl<<"Patient Gender: "<<Gender;
  cout<<endl<<"Patient DOB: "<<Day<<"/"<<Month<<"/"<<Year;
  cout<<endl<<"Patient Age: "<<Age;
  if(choice==1)
  dailyrate();
  if(choice==1)
  cout<<"No of days spent in hospital : "<<Spent;
  cout<<endl<<"Medication Charges: Rs"<<(service2 + Sum8);
  cout<<endl<<"Grand total : Rs"<<grandtotal;
}
void patient :: medservice()
{           int f1=200, f2=400, f3=350, f4=150;
            if(rate==1)
            cout<<"Type of Service \t\t Executive Class\n";
            else if(rate==2)
            cout<<"Type of Service \t\t First Class\n";
            else
            cout<<"Type of Service \t\t Second Class\n";

            cout<<"----------------------------------------\n";
            cout<<"1. Lab Test \t\t\t Rs" <<f1<<endl;
            cout<<"2. Operation \t\t\t Rs"<<f2<<endl;
            cout<<"3. Gynaecology \t\t\t Rs"<<f3<<endl;
            cout<<"4. Medical Check Up \t\t Rs"<<f4<<endl<<endl;
            cout<<"Select type of service(choose only between 1 and 4) : ";
            cin>>service1;
}

void patient :: medicine()
{   float Medicine1, Medicine2, Medicine3, Medicine4, Medicine5, Medicine6, Medicine7;
    float vitamin = 10, injection = 118.70, cream = 34.50;
    float tablet = 30.48, paramol = 23.33, eyedrop = 20.60, vaccine = 91.00;
    float Sum1, Sum2, Sum3, Sum4, Sum5, Sum6, Sum7;
    cout<<"Type of Medicine \t\t\t\t\t Price \n";
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"1. Vitamin C 1000mg Orange Chewable \t\t\t Rs"<<vitamin<<endl;
    cout<<"2. Sustanon 250 Injection (1ml Amp) \t\t\t Rs"<<injection<<endl;
    cout<<"3. Lipro Cream \t\t\t\t\t\t Rs"<<cream<<endl;
    cout<<"4. Bio-Zinc Complex Tablets \t\t\t\t Rs"<<tablet<<endl;
    cout<<"5. Paramol 250 Suspension (Banana Flavour) \t\t Rs"<<paramol<<endl;
    cout<<"6. Colircusi Tropicamide 1% Eye Drops \t\t\t Rs"<<eyedrop<<endl;
    cout<<"7. Pediacel Vaccine \t\t\t\t\t Rs"<<vaccine<<endl;
    cout<<endl;

    cout<<"Quantity of Vitamin C 100mg Orange Chewable: ";
    cin>>Medicine1;
    Sum1 = (Medicine1*vitamin);

    cout<<"Quantity of Sustanon 250 Injection (1ml Amp): ";
    cin>>Medicine2;
    Sum2 = (Medicine2*injection);

    cout<<"Quantity of Lipro Cream: ";
    cin>>Medicine3;
    Sum3 = (Medicine3*cream);

    cout<<"Quantity of Bio-Zinc Complex Tablets: ";
    cin>>Medicine4;
    Sum4 = (Medicine4*tablet);

    cout<<"Quantity of Paramol 250 Suspension (Banana Flavour): ";
    cin>>Medicine5;
    Sum5 = (Medicine5*paramol);

    cout<<"Quantity of Colircusi Tropicamide 1% Eye Drop: ";
    cin>>Medicine6;
    Sum6 = (Medicine6*eyedrop);

    cout<<"Quantity of Pediacel Vaccine: ";
    cin>>Medicine7;
    Sum7 = (Medicine7*vaccine);

    cout<<endl;
    Sum8 =(Sum1 + Sum2 + Sum3 + Sum4 + Sum5 + Sum6 + Sum7);
}
void patient :: dailyrate()
{
     int a = 800, b = 350, c = 100;

 switch (rate)
{   case 1:cout<<endl<<"Daily Rate: Rs"<<a<<endl;
              break;
    case 2:cout<<endl<<"Daily Rate: Rs"<<b<<endl;
              break;
    case 3:cout<<endl<<"Daily Rate: Rs"<<c<<endl;
              break;
}

}

void patient :: servcharge()
{int e1=700, e2=1100, e3=800, e4=400, f1=200, f2=400, f3=350,   f4=150, s1=20, s2=30, s3=15, s4=30;

switch(rate)
{   case 1 :if(service1 == 1)
              service2 = e1;
            else if(service1 == 2)
              service2 = e2;
            else if(service1 == 3)
              service2 = e3;
            else
              service2 = e4;
            break;

    case 2: if(service1 == 1)
              service2 = f1;
            else if(service1 == 2)
              service2 = f2;
            else if(service1 == 3)
              service2 = f3;
            else
              service2 = f4;
            break;

    case 3: if(service1 == 1)
              service2 = s1;
            else if(service1 == 2)
              service2 = s2;
            else if(service1 == 3)
              service2 = s3;
            else
              service2 = s4;
            break;
}
    grandtotal=service2 + Sum8 + total;

}
void patient :: hoscharge()
{    int a = 800, b = 350, c = 100;
    if(rate == 1)
     total=(Spent * a);
    else if(rate == 2)
     total=(Spent * b);
    else
     total=(Spent* c);
}
void patient :: modify()
{
     if(choice == 1)
    { cout<<"\nPlease enter number of days spent in the hospital: ";
      cin>>Spent;
    }
    cout<<"Please select the daily rate according to the classes:"<<endl;
    cout<<"1. Executive Class \n";
    cout<<"2. First Class \n";
    cout<<"3. Second Class \n\n";
    cin>>rate;
    hoscharge();
    medicine();
    medservice();
    servcharge();
    hoscharge();
}


void first()
{ patient p;
  fstream fil11,fil12;
  int ch,id,pos,flag=0;
  cout<<endl<<"1.Add record "<<endl<<"2.Delete record "<<endl<<"3.Modify record "<<endl<<"4.Search record "<<endl<<"5.Record details "<<endl<<"6.Exit"<<endl;
  cout<<"choose option(between 1 and 6 only) : ";
  cin>>ch;
  switch(ch)
 { case 1 : fil11.open("p11data.dat",ios::binary|ios::out|ios::app);
            p.getdata();
            fil11.write((char*)&p,sizeof(patient));
            fil11.close();
            break;
   case 2 : fil11.open("p11data.dat",ios::binary|ios::in);
            fil12.open("p12data.dat",ios::binary|ios::out|ios::app);
            char sure;
            cout<<endl<<"Enter the patient id no : ";
            cin>>id;
            while(fil11.read((char*)&p,sizeof(patient)))
            { if(id!=p.pid)
              fil12.write((char*)&p,sizeof(patient));
              else
              flag=1;
            }
            fil11.close();
            fil12.close();
            if(flag==0)
              cout<<endl<<"error 405 not found";
            if(flag==1)
            { remove("p11data.dat");
              rename("p12data.dat","p11data.dat");
              cout<<endl<<"Record deleted successfully";
            }
            break;
  case 3 :  fil11.open("p11data.dat",ios::binary|ios::out|ios::in);
            cout<<"Enter the patient id no : ";
            cin>>id;
            while(fil11.read((char*)&p,sizeof(patient)))
            { pos=fil11.tellg()-sizeof(p);
              if(p.pid==id)
              { flag=1;
                p.modify();
                fil11.seekg(pos);
                fil11.write((char*)&p,sizeof(patient));
                break;
              }
            }
            fil11.close();
            if(flag==0)
            cout<<endl<<"Record not found of patient id : "<<id<<endl;
            if(flag==1)
            cout<<endl<<"Record modified"<<endl;
            break;
  case 4 : fil11.open("p11data.dat",ios::binary|ios::in);
           cout<<"Enter the patient id no : ";
           cin>>id;
           while(fil11.read((char*)&p,sizeof(patient)))
           {  pos=fil11.tellg();
              if(p.pid==id)
              { p.display();
                flag=1;
              }
           }
           fil11.close();
           if(flag==0)
            cout<<endl<<"ERROR 405 Record not found"<<endl;
           break;
  case 5 : fil11.open("p11data.dat",ios::binary|ios::in);
           while(fil11.read((char*)&p,sizeof(patient)))
           { cout<<endl;
             p.display();
             cout<<endl;
             flag=1;
           }
           fil11.close();
           if(flag==0)
           cout<<endl<<"Record not found"<<endl;
           break;
  case 6 : exit(0);
  default : cout<<endl<<"you entered the wrong value "<<endl;
 }
}

void second()
{ patient p;
  fstream fil21,fil22;
  int ch,id,flag=0,pos;
  cout<<endl<<"1.Add record "<<endl<<"2.Delete record "<<endl<<"3.Modify record "<<endl<<"4.Search record "<<endl<<"5.Record details "<<endl<<"6.Exit"<<endl;
  cout<<"choose option(between 1 and 6 only) : ";
  cin>>ch;
  switch(ch)
 { case 1 : fil21.open("p21data.dat",ios::binary|ios::out|ios::app);
            p.getdata();
            fil21.write((char*)&p,sizeof(patient));
            fil21.close();
            break;
   case 2 : fil21.open("p21data.dat",ios::binary|ios::in);
            fil22.open("p22data.dat",ios::binary|ios::out|ios::app);
            char sure;
            cout<<endl<<"Enter the patient id no : ";
            cin>>id;
            while(fil21.read((char*)&p,sizeof(patient)))
            { if(id!=p.pid)
              fil22.write((char*)&p,sizeof(patient));
              else
              flag=1;
            }
            fil21.close();
            fil22.close();
            if(flag==0)
              cout<<endl<<"error 405 not found";
            if(flag==1)
            { remove("p21data.dat");
              rename("p22data.dat","p21data.dat");
              cout<<endl<<"Record deleted successfully deleted";
            }
            break;
  case 3 :  fil21.open("p21data.dat",ios::binary|ios::out|ios::in);
            cout<<"Enter the patient id no : ";
            cin>>id;
            while(fil21.read((char*)&p,sizeof(patient)))
            { pos=fil21.tellg();
              if(p.pid==id)
              { flag=1;
                p.modify();
                fil21.seekp(pos-sizeof(patient));
                fil21.write((char*)&p,sizeof(patient));
              }
            }
            fil21.close();
            if(flag==0)
            cout<<endl<<"Record not found of patient id : "<<id<<endl;
            if(flag==1)
            cout<<endl<<"Record modified"<<endl;
            break;
  case 4 : fil21.open("p21data.dat",ios::binary|ios::in);
           cout<<"Enter the patient id no : ";
           cin>>id;
           while(fil21.read((char*)&p,sizeof(patient)))
           {  if(p.pid==id)
              p.display();
           }
           fil21.close();
           break;
  case 5 : fil21.open("p21data.dat",ios::binary|ios::in);
           while(fil21.read((char*)&p,sizeof(patient)))
           { cout<<endl;
             p.display();
             cout<<endl;
             flag=1;
           }
           fil21.close();
           if(flag==0)
           cout<<endl<<"Record not found"<<endl;
           break;
  case 6 : exit(0);
  default : cout<<endl<<"you entered the wrong value "<<endl;
 }
}





