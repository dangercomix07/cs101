#include <simplecpp>

main_program{
	turtleSim();
    cout << "squares_inside_squares";
    //for sides =4 Squares inside squares
	int sidelength;
	cin>>sidelength;
	cout<<"No of sides";
	int sides;
	cin>>sides;
	double ang=360/sides;
	repeat(5){
		repeat(sides){
	         forward(sidelength);
		     right(ang);
		     wait(0.1);
	    }
	    forward(sidelength/2);
        right(ang/2);
        sidelength = sidelength/sqrt(2);
	    repeat(sides){
		     forward(sidelength);
		     right(ang);
		     wait(0.1);
	    }}
	wait(5);
}