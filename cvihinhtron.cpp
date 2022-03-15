#include<iostream.h>
#include<math.h>
class hinhtron{
	private : 
	   float s; 
 	public :
 	   hinhtron(float s = 4.7){
   	 	  this->s = s ; 
   	 }
   	 ~hinhtron(){
 	   	
 	   }
  	void xuat(){
	  	cout <<"\n Chu vi hinh tron co s = 4.7 la :" << sqrt(s/3.14)*3,14*2 ;
	  }
};
main(){
	hinhtron ht ;
	ht.xuat();
}