/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// hotel management
#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodle=0, Qshake=0, Qpizza=0;
	//food item sold
	int Srooms=0,Spasta=0, Sburger=0, Snoodle=0, Sshake=0, Spizza=0;
	//Total price of iteams
	int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodle=0, Total_shake=0, Total_pizza=0;
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms avaliable:";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta :";
	cin>>Qpasta;
	cout<<"\n Quantity of burger :";
	cin>>Qburger;
	cout<<"\n Quantity of noodles :";
	cin>>Qnoodle;
	cout<<"\n Quantity of shake :";
	cin>>Qshake;
	cout<<"\n Quantity of pizza :";
	cin>>Qpizza;
	
	m:
	cout<<"\n\t\t\t Please select from the menu options";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Noodles";
	cout<<"\n5) Shake";
	cout<<"\n6) Pizza";
	cout<<"\n7) Inforation regarding sales and collection";
	cout<<"\n8) Exit";
	
	cout<<"\n\n please enter your choice!";
	cin>>choice;
	
	switch(choice)
	{
	    case 1:
	        cout<<"\n\n Enter the number of rooms you want:";
	        
	        cin>>quant;
	        if(Qrooms-Srooms >=quant)
	        {
	            Srooms=Srooms+quant;
	            Total_rooms= Total_rooms+quant*1200;
	            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
	          break;
	            case 2:
	        cout<<"\n\n Enter pasta quantity:";
	        
	        cin>>quant;
	        if(Qpasta-Spasta>=quant)
	        {
	            Spasta=Spasta+quant;
	            Total_pasta= Total_pasta+quant*250;
	            cout<<"\n\n\t\t"<<quant<<" Pasta is order!";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qpasta-Spasta<<" Pasta remaining in hotel";
	          break; 
	          case 3:
	        cout<<"\n\n Enter the quantity of burger:";
	        
	        cin>>quant;
	        if(Qburger-Sburger>=quant)
	        {
	            Sburger=Sburger+quant;
	            Total_burger= Total_burger+quant*140;
	            cout<<"\n\n\t\t"<<quant<<" Burger is order!";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qrooms-Srooms<<" Burgers remaining in hotel";
	          break;
	           case 4:
	        cout<<"\n\n Enter Noodle Quantity :";
	        
	        cin>>quant;
	        if(Qnoodle-Snoodle >=quant)
	        {
	            Snoodle=Snoodle+quant;
	            Total_noodle= Total_noodle+quant*200;
	            cout<<"\n\n\t\t"<<quant<<" noodle is order!";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qrooms-Srooms<<"Noodles remaining in hotel";
	          break;
	           case 5:
	        cout<<"\n\n Enter the quantity of shake:";
	        
	        cin>>quant;
	        if(Qshake-Sshake>=quant)
	        {
	            Sshake=Sshake+quant;
	            Total_shake= Total_shake+quant*120;
	            cout<<"\n\n\t\t"<<quant<<" shake is order!";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qrooms-Sshake<<" shakes ramining in hotel";
	          break;
	         
	          case 6:
	        cout<<"\n\n Enter the quantity of pizza:";
	        
	        cin>>quant;
	        if(Qpizza-Spizza>=quant)
	        {
	            Spizza=Spizza+quant;
	            Total_pizza= Total_pizza+quant*150;
	            cout<<"\n\n\t\t"<<quant<<"Pizza is order!";
	            
	        }
	        else
	        
	          cout<<"\n\tOnly"<<Qpizza-Spizza<<"pizza remaining in hotel";
	          break;
	        
	        case 7:
	        cout<<"\n\nDetails of sales and collection";
	        
	        cout<<"\n\n Number of rooms we had: "<<Qrooms;
	        cout<< "\n\n Number of rooms we gave for rent :" <<Srooms;
	        cout<<"\n\n Remaining rooms: "<<Qrooms -Srooms;
	        cout<<"\n\n Total rooms collection for the day :"<<Total_rooms;
	        
	        cout<<"\n\n Number of pastass we had: "<<Qpasta;
	        cout<<"\n\n Number of pastas we sold: "<<Spasta;
	        cout<<"\n\n Remaining pastas: "<<Qpasta-Spasta;
	        cout<<"\n\n Total pastas collection for the day :"<<Total_pasta;
	        
	      
	        cout<<"\n\n Number of burger we had : "<<Qburger;
	        cout<< "\n\n Number of burger we sold :" <<Sburger;
	        cout<<"\n\n Remaining burgers: "<<Qburger-Sburger;
	        cout<<"\n\n Total burgers collection for the day :"<<Total_burger;
	        
	       
	        cout<<"\n\n Number of rooms we had : "<<Qnoodle;
	        cout<< "\n\n Number of noodle we sold :" <<Snoodle;
	        cout<<"\n\n Remaining noodles: "<<Qnoodle-Snoodle -Snoodle;
	        cout<<"\n\n Total noodles collection for the day :"<<Total_noodle;
	        
	        
	        cout<<"\n\n Number of shake we had : "<<Qshake;
	        cout<< "\n\n Number of shake we sold :" <<Sshake;
	        cout<<"\n\n Remaining shakes: "<<Qshake-Sshake;
	        cout<<"\n\n Total shakes collection for the day :"<<Total_shake;
	        
	     
	        cout<<"\n\n Number of pizza we had : "<<Qpizza;
	        cout<< "\n\n Number of pizza we sold :" <<Spizza;
	        cout<<"\n\n Remaining pizzas: "<<Qpizza -Spizza;
	        cout<<"\n\n Total pizzas collection for the day :"<<Total_pizza;
	        
	        cout<<"\n\n Total collection for the day :"<<Total_rooms+Total_pasta+Total_burger+Total_noodle+Total_shake+Total_pizza;
	        break;
	        
            case 8:
                  exit(0);
                  
                  default:
                    cout<<"\n Please select the number mentioned about!";
	}
	   goto m;
    }
            
