/*WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity*/
 
#include<iostream>
 
using namespace std;
 
class footplace{
 	public:
	int hotel_id;
	char hotel_name[20];
 	char hotel_type[20]; //(like hotel or motel)
 	int hotel_rating; //(like 1 Star, 2 Start, ..., 7 Star)
	char hotel_location[20];
	int  hotel_establish_year;
	int  hotel_staff_quantity;
	int hotel_room_quantity;

   void setter(){
	
	cout<<"enter  hotel_id :"<<endl;
	cin>> hotel_id;
	
	cout<<"enter hotel_name :"<<endl;
	cin>> hotel_name[20];
	
	cout<<"enter  hotel_type :"<<endl;
	cin>> hotel_type[20];
	
	cout<<"enter hotel_rating :"<<endl;
	cin>> hotel_rating;
	
	cout<<"enter  hotel_location :"<<endl;
	cin>>hotel_location[20];
	
	cout<<"enter  hotel_establish_year :"<<endl;
	cin>> hotel_establish_year;
	
	cout<<"enter hotel_staff_quantity:"<<endl;
	cin>> hotel_staff_quantity;
	
	cout<<"enter hotel_room_quantity :"<<endl;
	cin>> hotel_room_quantity;
	}

  void getter(){
	 
	cout<<"your  hotel_id :"<<endl;
	cin>> hotel_id;
	
	cout<<"your hotel_name :"<<endl;
	cin>> hotel_name[20];
	
	cout<<"your  hotel_type :"<<endl;
	cin>> hotel_type[20];
	
	cout<<"your hotel_rating :"<<endl;
	cin>> hotel_rating;
	
	cout<<"your  hotel_location :"<<endl;
	cin>>hotel_location[20];
	
	cout<<"your  hotel_establish_year :"<<endl;
	cin>> hotel_establish_year;
	
	cout<<"your hotel_staff_quantity:"<<endl;
	cin>> hotel_staff_quantity;
	
	cout<<" your hotel_room_quantity :"<<endl;
	cin>> hotel_room_quantity;
	
	}


};

main(){
	
footplace f;
f.setter();
f.getter();

}
