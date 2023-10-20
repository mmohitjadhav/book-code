#include"book.h"

book(int id,string name ,double price){
	this->id=id;
	this->name =name;
	this->price=price;
}
		int getid(){
			return id;
		}
		void setid(int id){
			this->id=id;
		}
		string getname(){
			return name;
		}
		void setname(string name){
			this->name=name;
		}
		double getprice(){
			return price;
		}
		void setprice(double price){
			this->price=price;
		}

