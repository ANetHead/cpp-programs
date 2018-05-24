#include<iostream>
#include<cmath>
using namespace std;

struct point{
	float x,y;
};

struct triangle{
	point p[3];
};

float area(triangle t) {
  return 0.5*abs((t.p[1].x-t.p[0].x)*(t.p[2].y-t.p[0].y)-(t.p[2].x-t.p[0].x)*(t.p[1].y-t.p[0].y));
}

int main() {
triangle t,subt[3];
point Q;
cout<<"Enter Point of Triangle : \n ";
for(int i=0; i<3; i++){
	cout<<"Point "<<i+1<<"(x): ";
	cin>>t.p[i].x;
	cout<<"Point "<<i+1<<"(y): ";
	cin>>t.p[i].y;
}
int exit=0;
float ar;
int y;
do{
	ar=0;
	cout<<"Enter co-ordinates of point to check : (x,y) : ";
	cin>>Q.x>>Q.y;
	for(y=0; y<3; y++){
		subt[y]	= t;
		subt[y].p[y]=Q;		
		ar += area(subt[y]);		
	}
	cout<<ar<<endl;
	cout<<area(t);
	cout<<"Press 1 to exit and 0 to continue .. : ";
	cin>>exit;	
}while(exit==0);
return 0;
}
