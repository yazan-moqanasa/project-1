//testing and tracing
#include <iostream>


#pragma warning(disable : 4996)

using namespace std;

struct address {
	char street[20];
	char city[20];
	char country[20];
};
struct employee {
	//the structure employe contains another structure a
	address a; //structure variable a, of type address 
	char name[20];
	int ID;
	float salary;
};



struct student {
	char name[50];
	float avg;
	int ID;
};
int main(){
	
	student s1 = { "Ali", 70.5, 2222 }, s2;

	cout << s1.name<<endl;	//ali
	cout << s1.avg<<endl;	//70.5
	cout << s1.ID<<endl;	  //2222

	
	strcpy(s2.name, s1.name);
	s2.avg = s1.avg;
	s2.ID = s1.ID;
	s2 = s1; //ok
	if (strcmp(s2.name, s1.name) == 0 && s1.avg == s2.avg && s1.ID == s2.ID) { // ok
		cout << "YAS!"<<endl;

	}
	
	employee e; // e is a nested structure
	cin >> e.name;
	cin >> e.ID;
	cin >> e.salary;

cin >> e.a.street;
	cin >> e.a.city;
	cin >> e.a.country;
	
cout<<endl << e.name<<endl;
cout << e.ID << endl;
cout << e.salary << endl<<endl;


cout << e.a.street << endl;
cout << e.a.city << endl;

	cout << e.a.country << endl;


}

	


