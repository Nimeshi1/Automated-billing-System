#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    int number,n;
    int total=0;
	char ask;

	float Chocolatecupcake=10;
	float Rainbowjarcake=8;
    float Chocochipscookie=5;
    float Whitebread=7;
    float Mangoicecream=3;
    float coffee=10;
    float Orangejuice=11;
    float Sinnamontea=15;
    float cash;


    string username;
    string password;

    do {
        cout << "Username: "<< endl;
        cin >> username;
       cout << "Password: "<< endl;
        cin>> password;

        if (username == "user1")
        {
            if (password == "123")
            {
                cout <<"____________________________________"<<endl;
                cout <<   "You have successfully logged in" << endl;
                cout <<"____________________________________"<< endl;
            }
            else{
                    cout <<"____________________________________________"<<endl;
                    cout <<   "You've entered incorrect login details." << endl;
                    cout <<"___________________________________________"<< endl;
            }
        }
        else{
                    cout <<"____________________________________________"<<endl;
                    cout <<   "You've entered incorrect login details." << endl;
                    cout <<"___________________________________________"<< endl;
            }

        } while (username != "user1" || password != "123");






    retry:
    cout<<"  |------------------------------------------------------------|\n";
    cout<<"  |                   Amber Bakery                             |\n";
    cout<<"  |                  **************                            |\n";
    cout<<"  |                                                            |\n";
    cout<<"  | Amber Bakery is one of the very famous pastry shops in UK. |\n";
    cout<<"  | Our bakery started in 2006.We offer different kinds of     |\n";
    cout<<"  | cakes,desserts,breads,cookies like delicious bakery        |\n";
    cout<<"  | items and other wonderful items.                           |\n";
    cout<<"  |                                                            |\n";
    cout<<"  | Email:- amber2006@gmail.com                                |\n";
    cout<<"  | Phone No:- 3478652109,3467859012                           |\n";
    cout<<"  |------------------------------------------------------------|\n";
    cout<<"                                                               \n\n";
    cout<<"     ______________________________________________________\n";
    cout<<"    |                      Amber bakery                    |\n";
    cout<<"    |                        ==Menu==                      |\n";
    cout<<"    |______________________________________________________|\n";
    cout<<"    |                                                      |\n";
    cout<<"    |                      *************                   |\n";
    cout<<"    |                      *  =Foods=  *                   |\n";
    cout<<"    |                      *************                   |\n";
    cout<<"    |                                                      |\n";
    cout<<"    | (1) Chocolate cup cake  ----------------10 pounds    |\n";
    cout<<"    | (2) Rainbow jar cake    -----------------8 pounds    |\n";
    cout<<"    | (3) Choco chips cookie  -----------------5 pounds    |\n";
    cout<<"    | (4) White bread         -----------------7 pounds    |\n";
    cout<<"    | (5) Mango ice-cream     -----------------2 pounds    |\n";
    cout<<"    |                                                      |\n";
    cout<<"    |                     *************                    |\n";
    cout<<"    |                     *  =Drinks= *                    |\n";
    cout<<"    |                     *************                    |\n";
    cout<<"    |                                                      |\n";
    cout<<"    | (6) coffee             -----------------10 pounds    |\n";
    cout<<"    | (7) Orange juice       -----------------12 pounds    |\n";
    cout<<"    | (8) Sinnamon tea       -----------------15 pounds    |\n";
    cout<<"    | (9) exit--------------------------------------       |\n";
    cout<<"    |______________________________________________________|\n";
    
    cout<<endl<<endl;
  cout<<"Enter your choice number:-";
	cin>>number;




	switch(number)
	{
		case 1:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += Chocolatecupcake*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;
		  
        case 2:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += Rainbowjarcake*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;  

	   	case 3:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += Chocochipscookie*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;


		case 4:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += Whitebread*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;
		  
        case 5:
        	cout<<"How many you want to buy:-";
		cin>>n;
		total += Mangoicecream*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;

		case 6:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += coffee*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;

 	    case 7:
		cout<<"How many you want to buy:-";
		cin>>n;
		total += Orangejuice*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;
		  
        case 8:
        	cout<<"How many you want to buy:-";
		cin>>n;
		total += Sinnamontea*n;
		cout<<"Do you want to buy something else?(y/n)";
		cin>>ask;
		if(ask=='y'){
			system("cls");
			goto retry;
		}else
		  goto end;
		  
		case 9:
		cout<<"Do you want to exit?(y/n)";
		cin>>ask;
		if(ask=='y'){
			goto exit;
		}else
		  goto retry;  
	}
       	
	end :
       cout<<endl;
       cout<<"Total money you must pay is "<<total<<" pounds"<<endl;
       cout<<"Cash:- ";
  cin>>cash;
  cout<<"Change:- "<< cash-total <<" pounds\n\n";
  
       
    cout<<"Enjoy your meal!\n";
    cout<<"\t--------------------\n";
    cout<<"Visit us again!\n";
    cout<<"\t--------------------\n";
    cout<<"AMBER BAKERY!\n";
    cout<<"\t--------------------\n";
    
     exit  :
       cout<<endl;
       cout<<"Thank you for joining"<<endl;            
       

}