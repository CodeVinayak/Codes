//conversion program dollar to rupee
//here in this program we will write conversion 
//routine in destinatin object( in Rupee class)

#include<iostream>
using namespace std;

class Dollar{
	private:
		int dollar;
	public:
		Dollar(int d = 0):dollar(d){}
		void display(){
			cout<<"Dollar value:"<<dollar<<endl;
		}
		// function to return dollar value
		int getValue(){
			return dollar;
		}

};

class Rupee
{
	private:
		int rupee;
	public:
		Rupee(int r = 0):rupee(r){}
		// conversion routine
		Rupee(Dollar d){
			rupee = 82 * d.getValue();
		}
		void display(){
			cout<<"Rupee value:"<<rupee<<endl;
		}
};

int main(){
	Dollar d1(1);
	Rupee r1;
	r1 = d1;
	d1.display();
	r1.display();
	return 0;
} 