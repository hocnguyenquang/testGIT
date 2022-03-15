#include<iostream.h>
#include<math.h>
class tamgiac{
	private : 
	   float a,b,c; 
 	public :
 	   tamgiac(){
   	 }
   	 ~tamgiac(){
 	   }
    void nhap (){
    	cout <<" \n Nhap 3 canh cua tam giac :\n ";
    	cout<<"\n Canh a :";
	    cin>>a;
	    cout<<"\n Canh b : ";
	    cin>>b;
	    cout <<" Canh c : ";
   		cin >> c ;
    }
    float cvi (){
    	return (a+b+c)/2 ;
    }
  	void xuat(tamgiac tg){
	  	cout <<"\n Dien tich tam giac la : " << sqrt(tg.cvi()*(tg.cvi()-tg.a)*(tg.cvi()-tg.b)*(tg.cvi()-tg.c));
	  }
};
main(){
	tamgiac tg ;
	tg.nhap();
	tg.xuat(tg);
}