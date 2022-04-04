#include <simplecpp>
main_program{
	turtleSim();
	double ang=(180-2*(360/5));
	repeat(5){
		forward(200);
		right(180-ang);
	}
	wait(10);
}