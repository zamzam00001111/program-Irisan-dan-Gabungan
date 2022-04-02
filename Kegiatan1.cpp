#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i, j, a[20], b[20], banyakA, banyakB,pilih;
	cout<<"IRISAN & GABUNGAN 2 HIMPUNAN\n";
	cout<<"============================\n\n";
	cout<<"Masukkan banyaknya anggota himpunan A : ";
	cin>>banyakA;

	for(i=0;i<banyakA;i++)
	{
		cout<<"Masukkan anggota " << i+1 << " : ";
		cin>>a[i];
	}
	cout<<"\nMasukkan banyaknya anggota himpunan B : ";
	cin>>banyakB;
	for(i=0;i<banyakB;i++)
	{
		cout<<"Masukkan anggota " << i+1 << " : ";
		cin>>b[i];
	}
	cout<<"\nHimpunan A={ ";
	for(i=0;i<banyakA;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"}";
	cout<<"\nHimpunan B={ ";
	for(i=0;i<banyakB;i++)
	{
		cout<<b[i]<<" ";
	}
	
	cout<<"}";
	cout<<"\n\n-----------------------------\n";

	cout<<"Menu  Perhitungan : "<<endl;
	cout<<" 1. Irisan"  <<endl;
	cout<<" 2. Gabungan"<<endl;
	cout<<"Saya memilih : ";
	cin>>pilih;

	switch(pilih){
    	case 1:
			cout<<"A irisan B = { ";
        	for(i=0;i<banyakA;i++)
				{
        	    	for(j=0;j<banyakB;j++)
				{
					if(a[i]==b[j]) cout<<a[i]<<" ";
				}
	}
	cout<<"}";
    break;
    	case 2:
			cout<<"\n\nA gabungan B = { ";
            for(i=0;i<banyakA;i++)
				{
            		cout<<a[i]<<" ";
            	}
            	for(i=0;i<banyakB;i++)
				{
            		cout<<b[i]<<" ";
				}
            	cout<<"}"<<endl;
    break ;
    default:cout<<"Input Error"<<endl;
}
	cout<<"\n\nTekan sembarang untuk keluar ...";
	getch();
	
	return 0;
}

