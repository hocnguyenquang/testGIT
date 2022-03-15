#include<iostream.h>
#include<conio.h>
class SV {
	private :
		char ten[30];
		int msv;
	public :
		SV(){
			
		}
		~SV(){
			
		}
	    void nhap(){
    		cout <<"\n nhap ten sinh vien :";
    		cin.getline(ten,30);
    		cout<<"\n Nhap ma sv :";
    		cin>>msv;
    		cin.ignore();
    	}
    	void xuat(){
	    	cout <<"\n Ten sinh vien :" << ten;
	    	cout <<"\n Ma sinh vien :"<< msv ;
	    }
	   
};
main(){
	SV *sv = new SV[1000];
	char n = 1 ;
	while(n!=27){
		int i = 1 ;
		cout <<"\n Nhap vao thong tin sinh vien la :";
		sv[i].nhap();
		cout <<"\n Xuat vao thong tin sinh vien la :";
		sv[i].xuat();
		i++;
		n = getch();
	}
}