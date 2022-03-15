#include<iostream.h>
class dien {
	private :
		char ten[30];
		int cscu;
		int csmoi;
		int dongia;
		int phidichvu ;
		int loai ;
	public :
		dien(){
			
		}
		~dien(){
			
		}
	    void nhap(){
	    	cout<<"\n Nhap loai dich vu ( 1 : nha may , 2 : nha dan ) :" ;
	    	cin>>loai;
	    	cin.ignore();
    		cout <<"\n nhap ten khach hang :";
    		cin.getline(ten,30);
    		cout<<"\n Nhap chi so cu :";
    		cin>>cscu;
    		cout<<"\n Nhap chi so moi :";
    		cin>>csmoi;
    		cout<<"\n Nhap don gia :";
    		cin>>dongia;
    		if ( loai == 1){
		    	cout<<"\n Nhap phi dich vu :";
    			cin>>phidichvu;
		    }
    	}
    	int tientra(int dongia,int csmoi,int cscu , int phidichvu){
	    	return dongia*(csmoi - cscu) + phidichvu;
	    }
	    int tientra(int dongia,int csmoi,int cscu){
	    	return dongia*(csmoi - cscu);
	    }
    	void xuat(){
	    	cout <<"\n Ten khach hang :" << ten;
	    	cout <<"\n So kwh tieu thu :"<< csmoi - cscu ;
	    	cout <<"\n So tien phai tra : ";
	    	if (loai ==1){
	    		cout<<tientra(dongia,csmoi,cscu,phidichvu);
	    	}
	    	else
	    	cout<<tientra(dongia,csmoi,cscu);
	    }
	   
};
main(){
	int n ;
	cout <<"\n Nhap vao so luong khach :";
	cin >> n ;
	dien *kh = new dien[n];
	for(int i = 0 ; i < n ; i++){
		cout <<"\n Nhap vao thong tin khach hang thu "<< i+1 <<" la :";
		kh[i].nhap();
	}
	for(int i = 0 ; i < n ; i++){
		cout <<"\n Xuat vao thong tin khach hang thu "<< i+1 <<" la :";
		kh[i].xuat();
	}
}