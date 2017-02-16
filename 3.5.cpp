#include<iostream>
using namespace std;
class complex{
	private:float real_part;
            float img_part;
    public:void get_number();
            
            void display();
            friend complex add(complex,complex);
            friend complex sub(complex,complex);
            
};
void complex:: get_number(){
	cout<<"Enter the real and imaginary part of the complex no.\n";
	cin>>real_part>>img_part;
}
complex add(complex c1,complex c2){
	complex c3;
	c3.real_part=c1.real_part+c2.real_part;
	c3.img_part=c1.img_part+c2.img_part;
	return c3;
}
complex sub(complex c1,complex c2){
	complex c4;
	c4.real_part=c1.real_part-c2.real_part;
	c4.img_part=c1.img_part-c2.img_part;
	return c4;
}
void complex:: display(){
	cout<<"Complex no.: "<<real_part<<" + i"<<img_part<<endl;
}
int main(){
complex c1,c2,c3,c4;
c1.get_number();
c2.get_number();
cout<<endl;
c1.display();
c2.display();
cout<<endl;
cout<<"Addition of the above two complex no. is "<<endl;
c3=add(c1,c2);
c3.display();
cout<<endl;
cout<<"Subtraction of the above two complex no. is\n";
c4=sub(c1,c2);
c4.display();
return 0;
}

	
