#include<iostream>
using namespace std;

int edad(int x, int y, int z){
	int edad;
		edad=(z-y*(z-x))/y;
		
	return edad;
}


int main (){
	int x,y,z,e;
	cout<<"ingrese x= ";cin >> x;
	cout<<"ingrese y= ";cin >> y;
	cout<<"ingrese z= ";cin >> z;
	
	e=edad(x,y,z);
	
	cout<<"mi edad es=  "<<e<<endl;
	
	
	
	return 0;
}
