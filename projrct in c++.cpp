#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class rent
{
	private:
		char gmail[30],mobile[15];
		int a,age,b,d,acc,e;
		char input,yes;
		string name;
		public:
			void info()
		{
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"<<"{WELCOME TO KP GARAGES} "<<"\n\n\n";
			cout<<"\t\t\t\t"<<"#######################################################\n";
			cout<<"\t\t\t\t"<<"#. Dear customer your most welcome to KP Garages      #\n";
			cout<<"\t\t\t\t"<<"#. Right now we are the top market car rental company #\n";
			cout<<"\t\t\t\t"<<"#. We always full fill demands of our customer        #\n";
			cout<<"\t\t\t\t"<<"#######################################################\n";
			cout<<"\n\n\n\nPress any key to continue...";
			getch();
			system("CLS");
			
			
			cout<<"\n\nSelect the type of your car\n";
			cout<<"\n1.Hatchback\n2.Sedan\n3.SUV\n4.MUV\n5.Crossover\n6.Coupe\n7.Convertible\n\nEnter your choice: ";
			cin>>a;
			system("CLS");
			
		}
			void details(){
				switch(a)
				{
					case 1:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Tata Altroz \n";
	                    cout<<"2.Hyundai i20 \n";            
	                    cout<<"3.Maruti Swift\n";
	                    cout<<"4.Renault KWID\n";
	                    cout<<"5.Tata Tiago \n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Tata Altroz "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: XMA\n";
									cout<<"\t\tcolour: black\n";
									cout<<"\t\ttop speed: 120 km\n\n";
									cout<<"\t\trent: 5000 per day \n";
									
									break;	
								}
								case 2:
								{
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Hyundai i20  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: i20\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 110 km\n\n";
									cout<<"\t\trent: 3000 per day \n";
									
									break;
								case 3:
								{
									
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Maruti Swift  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: dzire\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 130 km\n";
									cout<<"\t\trent: 4000 per day \n";
									
								
									break;
								}
								case 4:
								{
									
									char y;
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Renault KWID  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: RXL\n";
									cout<<"\t\tcolour: brown\n";
									cout<<"\t\ttop speed: 100 km\n";
									cout<<"\t\trent: 3000 per day \n";
									
									
									break;
								}
								case 5:
								{
									
									char y;
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Tata Tiago  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: XM\n";
									cout<<"\t\tcolour: gray\n";
									cout<<"\t\ttop speed: 120 km\h\n";
									cout<<"\t\trent: 4000 per day \n";
									
									break;
								}
							
							
						}	
						
						
						
					}
					break;
				}
						case 2:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Rolls-Royce\n";
	                    cout<<"2.Audi\n";            
	                    cout<<"3.Mercedes\n";
	                    cout<<"4.BMW\n";
	                    cout<<"5.Porsche\n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{	
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Rolls-Royce "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: ghost\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 155 km\h\n";
									cout<<"\t\trent: 30000 per day \n";
									
									cout<<"enter your choice: ";
									cin>>e;
									
									break;
								}
								case 2:
								{
									
									char y;
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected:Audi  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: S8\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 155 km\h\n";
									cout<<"\t\trent: 30000 per day \n";
									
									
									break;
								}
								case 3:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Mercedes "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: AMG S65\n";
									cout<<"\t\tcolour: Purple\n";
									cout<<"\t\ttop speed: 186 km\h\n";
									cout<<"\t\trent: 35000 per day \n";
									
									
									break;
								}
								case 4:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: BMW  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: M5\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 305 km\h\n";
									cout<<"\t\trent: 50000 per day \n";
							
									break;
								}
								case 5:
						      {
						
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Porsche  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: 911\n";
									cout<<"\t\tcolour: black\n";
									cout<<"\t\ttop speed: 211 km\h\n";
									cout<<"\t\trent: 40000 per day \n";
									
									break;
								}
							
							
						}	
						break;	
					}
				case 3:
					{
					
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.MAHINDRA \n";
	                    cout<<"2.MG Hector \n";            
	                    cout<<"3.Maruti Suzuki S-Cross\n";
	                    cout<<"4.Toyota Fortuner\n";
	                    cout<<"5.Mercedes\n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{
					
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: MAHINDRA "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: XUV700 \n";
									cout<<"\t\tcolour: red\n";
									cout<<"\t\ttop speed: 200 km\h\n";
									cout<<"\t\trent: 30000 per day \n";
									
									break;
								}
								case 2:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: MG Hector  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Shine MT\n";
									cout<<"\t\tcolour: black\n";
									cout<<"\t\ttop speed: 150 km\h\n";
									cout<<"\t\trent: 20000 per day \n";
									
									break;
								}
								case 3:
								{
				
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Maruti Suzuki S-Cross "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: S-Cross Delta\n";
									cout<<"\t\tcolour: green\n";
									cout<<"\t\ttop speed: 160 km\h\n";
									cout<<"\t\trent: 15000 per day \n";
									break;
								}
								case 4:
								{
					
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Toyota Fortuner  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Fortuner 4X2\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 175 km\h\n";
									cout<<"\t\trent: 25000 per day \n";
									
									break;
								}
								case 5:
								{
				
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Mercedes  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: glc class \n";
									cout<<"\t\tcolour: purple\n";
									cout<<"\t\ttop speed: 180 km\h\n";
									cout<<"\t\trent: 30000 per day \n";
									
									break;
								}
							
							
						}	
						break;
						
						
					}
						case 4:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Maruti\n";
	                    cout<<"2.Renault\n";            
	                    cout<<"3.Mahindra \n";
	                    cout<<"4.Datsun\n";
	                    cout<<"5.Mercedes\n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{	
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Maruti "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: XL6\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 145 km\h\n";
									cout<<"\t\trent: 7000 per day \n";
									
									cout<<"enter your choice: ";
									cin>>e;
									
									break;
								}
								case 2:
								{
									
									char y;
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Renault  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Triber\n";
									cout<<"\t\tcolour: yellow\n";
									cout<<"\t\ttop speed: 130 km\h\n";
									cout<<"\t\trent: 6000 per day \n";
									
									
									break;
								}
								case 3:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Mahindra  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Marazzo\n";
									cout<<"\t\tcolour: green\n";
									cout<<"\t\ttop speed: 110 km\h\n";
									cout<<"\t\trent: 5000 per day \n";
									
									
									break;
								}
								case 4:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Datsun "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: GO-plus\n";
									cout<<"\t\tcolour: yellow\n";
									cout<<"\t\ttop speed: 105 km\h\n";
									cout<<"\t\trent: 4000 per day \n";
							
									break;
								}
								case 5:
						      {
						
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Mercedes  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: V-class\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 120 km\h\n";
									cout<<"\t\trent: 10000 per day \n";
									
									break;
								}
							
							
						}	
						break;	
					}
						case 5:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Mazda\n";
	                    cout<<"2.Kia\n";            
	                    cout<<"3.Honda \n";
	                    cout<<"4.Toyota\n";
	                    cout<<"5.Volkswagen\n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{	
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Mazda "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: CX-9\n";
									cout<<"\t\tcolour: red\n";
									cout<<"\t\ttop speed: 145 km\h\n";
									cout<<"\t\trent: 6000 per day \n";
									
									cout<<"enter your choice: ";
									cin>>e;
									
									break;
								}
								case 2:
								{
									
									char y;
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Kia  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: EV6\n";
									cout<<"\t\tcolour: gray\n";
									cout<<"\t\ttop speed: 190 km\h\n";
									cout<<"\t\trent: 15000 per day \n";
									
									
									break;
								}
								case 3:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Honda  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: CR-V Hybrid\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 105 km\h\n";
									cout<<"\t\trent: 5000 per day \n";
									
									
									break;
								}
								case 4:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Toyota "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: RAV4 Hybrid\n";
									cout<<"\t\tcolour: grey\n";
									cout<<"\t\ttop speed: 175 km\h\n";
									cout<<"\t\trent: 9000 per day \n";
							
									break;
								}
								case 5:
						      {
						
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Volkswagen  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: ID.4\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 160 km\h\n";
									cout<<"\t\trent: 70000 per day \n";
									
									break;
								}
							
							
						}	
						break;	
					}
		          	case 6:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Lamborghini\n";
	                    cout<<"2.Jaguar \n";            
	                    cout<<"3.Rolls-Royce  \n";
	                    cout<<"4.Ferrari\n";
	                    cout<<"5.Bentley \n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{	
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Lamborghini "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Huracan STO\n";
									cout<<"\t\tcolour: sky blue\n";
									cout<<"\t\ttop speed: 310 km\h\n";
									cout<<"\t\trent: 60000 per day \n";
									
									cout<<"enter your choice: ";
									cin>>e;
									
									break;
								}
								case 2:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Jaguar   "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: F-Type\n";
									cout<<"\t\tcolour: blue\n";
									cout<<"\t\ttop speed: 230 km\h\n";
									cout<<"\t\trent: 40000 per day \n";
									
									
									break;
								}
								case 3:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Rolls-Royce    "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Dawn\n";
									cout<<"\t\tcolour: black\n";
									cout<<"\t\ttop speed: 270 km\h\n";
									cout<<"\t\trent: 50000 per day \n";
									
									
									break;
								}
								case 4:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Ferrari "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Portofino\n";
									cout<<"\t\tcolour: white\n";
									cout<<"\t\ttop speed: 240 km\h\n";
									cout<<"\t\trent: 45000 per day \n";
							
									break;
								}
								case 5:
						      {
						
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Bentley   "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Continental\n";
									cout<<"\t\tcolour: brown\n";
									cout<<"\t\ttop speed: 280 km\h\n";
									cout<<"\t\trent: 55000 per day \n";
									
									break;
								}
							
							
						}	
						break;	
					}
		          case 7:
					{
						
						system("CLS");
						cout<<"\n\n\t\t\t\t\t\tSelect your car";
						cout<<"\n\n\t\t\t---------------------------Welcome "<<name<<"------------------------------\n\n\n";
	                    cout<<"name: "<<name<<"\tage: "<<age<<"\ngmail: "<<gmail<<"\tmobile number: "<<mobile<<"\n";
						cout<<"----------------\n";
						cout<<"1.Lamborghini\n";
	                    cout<<"2.Aston Martin \n";            
	                    cout<<"3.McLaren \n";
	                    cout<<"4.Ferrari\n";
	                    cout<<"5.Maserati \n";
						cout<<"----------------"; 
						cout<<"\nEnter your choice: ";
					    cin>>b;
					    system("CLS");
						switch(b)
						{
							case 1:
								{	
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Lamborghini  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: Huracan Evo\n";
									cout<<"\t\tcolour: sky blue\n";
									cout<<"\t\ttop speed: 310 km\h\n";
									cout<<"\t\trent: 60000 per day \n";
									
									cout<<"enter your choice: ";
									cin>>e;
									
									break;
								}
								case 2:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Aston Martin  "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: DB11\n";
									cout<<"\t\tcolour: black\n";
									cout<<"\t\ttop speed: 230 km\h\n";
									cout<<"\t\trent: 40000 per day \n";
									
									
									break;
								}
								case 3:
								{
									
									
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: McLaren   "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: 720S\n";
									cout<<"\t\tcolour: orange\n";
									cout<<"\t\ttop speed: 290 km\h\n";
									cout<<"\t\trent: 55000 per day \n";
									
									
									break;
								}
								case 4:
								{
								
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Ferrari "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: 812\n";
									cout<<"\t\tcolour: red\n";
									cout<<"\t\ttop speed: 260 km\h\n";
									cout<<"\t\trent: 50000 per day \n";
							
									break;
								}
								case 5:
						      {
						
									cout<<"\t\t\t\t\t\t----------------------------------";
									cout<<"\n\t\t\t\t\t\tyou have selected: Maserati   "<<"\n";
									cout<<"\t\t\t\t\t\t----------------------------------"<<"\n";
									cout<<"\t\tmodel: MC20\n";
									cout<<"\t\tcolour: gray\n";
									cout<<"\t\ttop speed: 270 km\h\n";
									cout<<"\t\trent: 55000 per day \n";
									
									break;
								}
							
							
						}	
						break;	
					}
		          
			
				}
				
			}
			void important()
			{
				cout<<"\t\t\t\t\t---------------------------------------------------\n";
						cout<<"\t\t\t\t\t\tPlease Provide Your Personal Details\n";
						cout<<"\t\t\t\t\t---------------------------------------------------\n";
						cout<<"\nEnter your details \n\n";
						fflush(stdin);
						cout<<"name: ";
						getline(cin,name);
						cout<<"age: ";
						cin>>age;
						
						if(age<=18||age>80)
						{
							cout<<"You are not eligible for our car rental service \n";
							exit(1);
						}
						cout<<"G-mail: ";
						cin>>gmail;
						cout<<"Mobile number: ";
						cin>>mobile;
						cout<<"\nPress Y to continue: ";
						cin>>input;
						if(input!='y'&& input!='Y')
						{
							exit(0);
						}
			}
		void payment(){
			int p,yes=yes;
			cout<<"\n1.pay on delivery: \n2.online payment\n\n";
									cout<<"enter your choice: ";
									cin>>e;
									switch(e)
									{
										case 1:
											{
												cout<<"\nYou can pay when you come to pick the car!!" ;
												break;
											}
										case 2:
											{
											cout<<"Pay on this mobile number : 7023******";
									        
											break;	
											}
									}
									cout<<"\nDo you want to really rent this car(y/n):";
									cin>>p;
									if(p==yes)
									{
										cout<<"\nYour car is successfully rented thankyou!!";
									}
									else
									{
										exit(0);
									}
		}
                        
};
int main()
{
	rent p;
	p.info();
	p.important();
	p.details();
	p.payment();
}
