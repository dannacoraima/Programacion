#include<iostream>
using namespace std;

int main()
{
	int DCSY_i=0,DCSY_l;
	float DCSY_x,DCSY_s=0;
	cout<<"ingrese el limite DCSY_l="; cin>>DCSY_l;
	do{
		
	cout<<"ingrese el numero DCSY_x="; cin>>DCSY_x;
	DCSY_i=DCSY_i+1;
	DCSY_s=DCSY_s+DCSY_x;



	}while(DCSY_i<DCSY_l);
	cout<<"Se ingresaron "<<DCSY_l<<" numeros "<< "que sumaron "<<DCSY_s<<endl;
	return 0;



}




