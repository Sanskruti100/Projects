#include<iostream>
using namespace std;
int main()
{
	cout<<"******************************************************************"<<endl;
	int x,y,ch,add,sub,mult,div,mod;
	char cx;
	cal:
		
	int i;
	do
	{
		cout<<"                    CALCULATOR                    "<<endl;
		cout<<"1.ADDITION"<<endl<<"2.SUBTRACTION"<<endl<<"3.MULTIPLICATION"<<endl
		<<"4.DIVISION"<<endl<<"5.MODULUS"<<endl<<"6.EXIT"<<endl
		<<"Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"           ADDITION           "<<endl;
				cout<<"Enter any two number"<<endl;
				cin>>x>>y;
				add=x+y;
				cout<<"Addition is = "<<add<<endl;
				cout<<"DO YOU WANT TO CALTULATE AGAIN?"<<endl;
				break;
			case 2:
				cout<<"           SUBTRACTION           "<<endl;
				cout<<"Enter any two number"<<endl;
				cin>>x>>y;
				sub=x-y;
				cout<<"Subtraction is = "<<sub<<endl;
				cout<<"DO YOU WANT TO CALCULATE AGAIN?"<<endl;
				break;
			case 3:
				cout<<"           MULTIPLICATION          "<<endl;
				cout<<"Enter any two number"<<endl;
				cin>>x>>y;
				mult=x*y;
				cout<<"Multiplication is = "<<mult<<endl;
				cout<<"DO YOU WANT TO CALCULATE AGAIN?"<<endl;
				break;
			case 4:
				cout<<"           DIVISION           "<<endl;
				cout<<"Enter anhy two number"<<endl;
				cin>>x>>y;
				div=x/y;
				cout<<"Division is = "<<div<<endl;
				cout<<"DO YOU WANT TO CALCULATE AGAIN?"<<endl;
				break;
			case 5:
				cout<<"           MODULUS           "<<endl;
				cout<<"Enter any two number"<<endl;
				cin>>x>>y;
				mod=x%y;
				cout<<"Modulud is = "<<mod<<endl;
				cout<<"DO YOU WANT TO CALCULATE AGAIN?"<<endl;
				break;
			case 6:
				if(ch==6)
				{
					cout<<"DO YOU WANT TO STOP?(PRESS y/n)"<<endl;
					cin>>cx;
					if(cx=='y')
					{
						cout<<"THANK YOU :-)"<<endl;
					}
					else
					{
						goto cal;
					}
				}
				break;
			default:
				cout<<"INVALID OPTION"<<endl;
				goto cal;
				break;
			
		}
	}while(ch!=6);
	cout<<"*******************************************************************"<<endl;
}
