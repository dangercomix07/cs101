#include <simplecpp>
main_program{
	turtleSim();
	repeat(4){
		forward(100);
		right(90);
	}
	right(45);
	forward(100*sqrt(2));
	wait(10);
}