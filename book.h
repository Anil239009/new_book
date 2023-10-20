#include<iostream>

public class Book{
	private :
		int book_id;
		String book_name;
		double price;
		protected qty
		
	public:
	  	Book(int bid,string bnm,double pr){
	  		this->book_id=bid;
	  		this->book_name=bnm;
	  		this->price=pr;
		  }
		public int accept_qty();
		public void calculate_price(int qty,double price);  
};
