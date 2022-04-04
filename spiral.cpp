#include <simplecpp>
main_program{
	turtleSim();
	repeat(3){
	     forward(128);right(90);
	 }
	 int i=168/2;
	 repeat(3){
	     repeat(2){
	          forward(i);right(90);
	     }
	     i=i/2;
     }
     forward(128/16);
     wait(10);
}