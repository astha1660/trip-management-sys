#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<conio.h>
using namespace std;

class place
{
public:
    place()
    {
        cout<<endl<<"**************************************************************"<<endl;
        cout<<"                            WELCOME                            ";
        cout<<endl<<"**************************************************************"<<endl<<endl;
    }
    string destination,source,trans,y;
	 float  bill;
    void getSource()
    {
    cout<<"ENTER SOURCE : (Delhi/Bhopal/Mumbai) : ";
    }
    void setSource()
    {
    getline(cin,source);
    }
    void getDestination()
    {
    cout<<"ENTER DESTINATION :  (Kerela,Bangalore,Bhopal,Assam,Kota) : ";
    }
    void setDestination()
    {
    getline(cin,destination);
    }
    void getTrans()
    {
        cout<<"ENTER MODE OF TRANSPORT (Train/Flight) : ";
    }
    void setTrans()
    {
        getline(cin,trans);
        cout<<endl<<endl;
    }
    void transDetails()
    {
     if ((source.compare(0,5,"delhi",0,5))==0 && (destination.compare(0,6,"kerela",0,6))==0)
    {
            if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1234         1200 kms.          25 hrs.       3000/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
      
       
        else 
        {
        	cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO          4 hrs.        5000/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
        }
       
    }

    else if ((source.compare(0,5,"delhi",0,5))==0 && (destination.compare(0,9,"bangalore",0,9))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        		cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   12345         2100 kms.         31 hrs.       2500/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        
        }
       
        else 
        {
            cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO          4 hrs.        5000/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
        
    }

   else if ((source.compare(0,5,"delhi",0,5))==0 && (destination.compare(0,5,"assam",0,5))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
          cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY         TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"SPICEJET          3.5 hrs.        3000/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
       
        }
        
        else 
        {
            cout<<"TOTAL DISTANCE: 1533  kms"<<endl;
            cout<<"TOTAL FARE: Rs.2780 + convenience fee"<<endl;
        }
      
    }

    else if ((source.compare(0,5,"delhi",0,5))==0 && (destination.compare(0,4,"kota",0,4))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
          cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1809         465 kms.          6 hrs.       1000/-"<<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
        else 
        {
           cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<" KINGFISHER      1.5 hrs.        2900/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
        

    }
    else if ((source.compare(0,5,"delhi",0,5))==0 && (destination.compare(0,6,"bhopal",0,6))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
           cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1452        950 kms.          20 hrs.       1150/-"<<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
      
        else 
        {
              cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO          2 hrs.        2500/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       

    }
    else if ((source.compare(0,6,"bhopal",0,6))==0 && (destination.compare(0,4,"kota",0,4))==0)
    {
            if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   2839        1490 kms.          30 hrs.       2990/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
         
        }
      
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  SPICEJET        2.5 hrs.        3400/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
     

    }
    else if ((source.compare(0,6,"bhopal",0,6))==0 && (destination.compare(0,6,"bhopal",0,6))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"oops!! source and destination cannot be same."<<endl<<endl;
           
        }
       
        else 
        {
            cout<<"oops!! source and destination cannot be same."<<endl<<endl;
        }
       
    }

    else if ((source.compare(0,6,"bhopal",0,6))==0 && (destination.compare(0,5,"assam",0,5))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   7381         1120 kms.          27 hrs.       2400/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
            
        }
        
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  AIR INDIA      1.5 hrs.        2800/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
    }

else if ((source.compare(0,6,"bhopal",0,6))==0 && (destination.compare(0,9,"bangalore",0,9))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
           
            cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  1458          1400 kms.          32 hrs.      2850/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  SPICEJET       1 hrs.          3000/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
    }

    else if ((source.compare(0,6,"bhopal",0,6))==0 && (destination.compare(0,6,"kerela",0,6))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  1732         1800 kms.          40 hrs.      2900/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
          
        }
        
        else 
        {
              cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  AIR INDIA      4 hrs.       2800/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
        
       
    }
    else if ((source.compare(0,6,"mumbai",0,6))==0 && (destination.compare(0,6,"kerela",0,6))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
            
            cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1784        910 kms.          19 hrs.       2000/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
        
        else 
        {
              cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO          4 hrs.        3200/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
    }

    else if ((source.compare(0,6,"mumbai",0,6))==0 && (destination.compare(0,5,"assam",0,5))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   7500         1200 kms.          34 hrs.       2900/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
        }
       
        else 
        {
              cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO          3 hrs.       2950/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
    }

    else if ((source.compare(0,6,"mumbai",0,6))==0 && (destination.compare(0,4,"kota",0,4))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
        	cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   2510        620 kms.          14 hrs.       1900/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
        }
        
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  SPICEJET        1.5 hrs.        3200/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
    
    }

    else if ((source.compare(0,6,"mumbai",0,6))==0 && (destination.compare(0,6,"bhopal",0,6))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {
           
            cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   2700       620 kms.          14 hrs.       2900/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  INDIGO        1.5 hrs.        3200/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
       
    }


    else if ((source.compare(0,6,"mumbai",0,6))==0 && (destination.compare(0,9,"bangalore",0,9))==0)
    {
        if((trans.compare(0,5,"train",0,5))==0)
        {cout<<"AVAILABLE TRAIN: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" TRAIN NO.    TOTAL DISTANCE    TOTAL TIME    TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1350        620 kms.          14 hrs.       2800/-" <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
            
        }
       
       
        else 
        {
             cout<<"AVAILABLE FLIGHT: "<<endl<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" COMPANY       TOTAL TIME     TOTAL FARE   "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"  SPICEJET        1.5 hrs.        3200/-"   <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
        }
      
    }
    else cout<<"Sorry! No Mode Of Transport Is Available!";
    }

    void setHotel()
    {
        cout<<"DO YOU WANT TO BOOK A HOTEL ROOM ? (yes/no) "<<endl;
        cin>>y;
        if((y.compare(0,3,"yes",0,3))==0)
        {
            if((destination.compare(0,6,"kerela",0,6))==0)
            {
            	cout<<endl;
            	cout<<"AVAILABLE HOTELS : "<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" S.NO.      HOTEL NAME       RATINGS    CHARGES/NIGHT       "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1.      Hotel Ambassador    9/10        2300/-           " <<endl;
            cout<<"   2.      Hotel President     6/10        900/-           " <<endl;
            cout<<"   3.      Hotel Savera        8/10        1100/-           " <<endl;
            cout<<"   4.      Hotel Raintree      7/10        1500/-           " <<endl;
            cout<<"   5.      Hotel Anna          9/10        2100/-           " <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
            
            
            }
            else if((destination.compare(0,9,"bangalore",0,9))==0)
            {
            		cout<<endl;
            	cout<<"AVAILABLE HOTELS : "<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" S.NO.      HOTEL NAME       RATINGS    CHARGES/NIGHT       "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1.      Hyatt Regency       9/10        2900/-           " <<endl;
            cout<<"   2.      Hotel Grand         6/10        1100/-           " <<endl;
            cout<<"   3.      Hotel Monarch       8/10        1300/-           " <<endl;
            cout<<"   4.      Hotel Enorch        7/10        1470/-           " <<endl;
            cout<<"   5.      Business Hotel      9/10        2210/-           " <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
            }
            else if((destination.compare(0,5,"assam",0,5))==0)
            {
            		cout<<endl;
            	cout<<"AVAILABLE HOTELS : "<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" S.NO.      HOTEL NAME       RATINGS    CHARGES/NIGHT       "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1.      Hotel Kohinoor      9/10        2700/-           " <<endl;
            cout<<"   2.      Hotel President     8.5/10      1900/-           " <<endl;
            cout<<"   3.      Hotel lalit Grand   8/10        1800/-           " <<endl;
            cout<<"   4.      Hotel Trident       7/10        1750/-           " <<endl;
            cout<<"   5.      Hotel Continental   6/10        1100/-           " <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
            }
            else if((destination.compare(0,6,"bhopal",0,6))==0)
            {
            	cout<<endl;
            	cout<<"AVAILABLE HOTELS : "<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" S.NO.      HOTEL NAME       RATINGS    CHARGES/NIGHT       "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1.      Hotel Dolphin      9/10        2700/-           " <<endl;
            cout<<"   2.      The Park Hotel     8.5/10      1940/-           " <<endl;
            cout<<"   3.      Hotel Grand look   8/10        2100/-           " <<endl;
            cout<<"   4.      Hotel Novapark     7/10        1750/-           " <<endl;
            cout<<"   5.      Hotel Oscar        6/10        1100/-           " <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
            
            }
            else if((destination.compare(0,4,"kota",0,4))==0)
            {
            	cout<<endl;
            	cout<<"AVAILABLE HOTELS : "<<endl;
        	cout<<"-----------------------------------------------------------"<<endl;
            cout<<" S.NO.      HOTEL NAME       RATINGS    CHARGES/NIGHT       "<<endl;
            cout<<"-----------------------------------------------------------"<<endl;
            cout<<"   1.      Hotel JK Residency  9/10        2700/-           " <<endl;
            cout<<"   2.      Hotel Kenil         8.5/10      2500/-           " <<endl;
            cout<<"   3.      Hotel Swiss         8/10        2100/-           " <<endl;
            cout<<"   4.      Hotel Tree          7/10        1800/-           " <<endl;
            cout<<"   5.      Hotel Jameson Inn   6/10        1900/-           " <<endl;
            cout<<"-----------------------------------------------------------"<<endl<<endl;
           
            }
            else cout<<"Sorry NO HOtel Available For this DEstination!";
        }
        else
            cout<<"OK!";
    }

    void getBill()
    {
        if((y.compare(0,3,"yes",0,3))==0)
        {
            bill=6150;
            cout<<"TOTAL FARE : Rs."<<bill<<"/-(inclusive of all taxes & charges)"<<endl;
        }
        else
        {
            bill=3550;
            cout<<"TOTAL FARE : Rs."<<bill<<"/- (inclusive of all taxes & charges)"<<endl;
        }
    }
};

int main()
{
    unsigned int h;
    place t1;
    t1.getSource();
    t1.setSource();
    t1.getDestination();
    t1.setDestination();
    t1.getTrans();
    t1.setTrans();
    t1.transDetails();
    t1.setHotel();
   {cout<<"ENTER THE HOTEL NO. YOU WANT TO STAY IN : ";
    cin>>h;
	} 
    ofstream a;
    string f=t1.source,t=t1.destination,tra=t1.trans,n;
    a.open("mmt.txt",ios::app);
    a<<"Source:"<<f<<endl<<"Destination:"<<t<<endl<<"Transport Mode:"<<tra<<ends<<endl;
    a.close();
    cout<<"DO YOU WANT TO PROCEED FURTHER FOR PAYMENT ?(yes/no)"<<endl;
    cin>>n;
    if((n.compare(0,3,"yes",0,3))==0)
    {
        string lname,fname,email;
        long int ph;
        cout<<"ENTER FIRST NAME: "<<endl;
        cin>>fname;
        cout<<"ENTER LAST NAME	: "<<endl;
        cin>>lname;
        cout<<"ENTER E-mail ID : "<<endl;
        cin>>email;
        cout<<"ENTER CONTACT NO.: "<<endl;
        cin>>ph;
        t1.getBill();
        cout<<endl;
        cout<<"YOUR TICKETS HAVE BEEN BOOKED. Hope you Visit us Again.!"<<endl;
        
        ofstream c;
        c.open("mmt.txt",ios::app);
        c<<"Passengers Details :-"<<endl<<"Name: "<<fname<<ends<<lname<<endl<<"E-mail Id: "<<email<<endl<<"Phone No : "<<ph<<endl<<"Destinationtal Bill : Rs."<<t1.bill<<endl<<endl<<endl;
        c.close();
       
       
    }
    else cout<<"Thanks For Visiting Us , Have A Nice Day !";
    }

