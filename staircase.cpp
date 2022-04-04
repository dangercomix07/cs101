#include <simplecpp>
main_program{
	turtleSim();
	int t;
	float h;
	cin>>h;
	cin>>t;
	right(-90);
	float(i)=h;
	repeat(t){
		forward(i); right(90); forward(i);
		right(-90);
		i=3*i/4;
	}
	wait(10);
    
}