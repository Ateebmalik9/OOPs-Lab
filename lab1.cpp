Q1)
#include<iostream>
using namespace std;
int main()
{
	float tch,cost,dis,stax;
	cout<<"press 1 for teacher and 0 if you are not a teacher";
	cin>>tch;
	if(tch==1)
	{
		cout<<"Enter cost";
		cin>>cost;
		if(cost<100)
		{
		dis=cost-(cost*0.1);
		stax=dis+(dis*0.05);
		cout<<"Total price to be paid "<<stax;
		}
		else
		{
		dis=cost-(cost*0.12);
		stax=dis+(dis*0.05);
		cout<<"Total price to be paid "<<stax;
		}
	}
	else
	{
		cout<<"Enter cost";
		cin>>cost;
		stax=cost+(cost*0.05);
		cout<<"Total price to be paid "<<stax;
	}
}


Q2)
  #include<iostream>
using namespace std;
int main()
{
	float wt_lb,ht_in,bmi;
	cout<<"Enter your weight in pounds: ";
	cin>>wt_lb;
	cout<<"Enter your height in inches: ";
	cin>>ht_in;
	bmi=703*wt_lb/ht_in;
	if(bmi<18.5)
	{
		cout<<"Under weight";
	}
	else if(bmi>=18.5 && bmi<24.9)
	{
		cout<<"Normal";
	}
	else if(bmi>=25.0 && bmi<29.9)
	{
		cout<<"Overweight";
	}
	else if(bmi>=30)
	{
		cout<<"obese";
	}
}

Q3)
  #include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Enter earthquake intensity: ";
	cin>>n;
	if(n<5.0)
	{
		cout<<"Little or no damage";
	}
	else if(n>=5.0 && n<5.5)
	{
		cout<<"Some damage";
	}
	else if(n>=5.5 && n<6.5)
	{
		cout<<"Serious damage";
	}
	else if(n>=6.5 && n<7.5)
	{
		cout<<"Disaster";
	}
	else if(n>=7.5)
	{
		cout<<"Catastrophe";
	}
}
