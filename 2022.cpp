#include <simplecpp>
main_program{
	turtleSim();
    penUp();
    forward(-200);
    penDown();
	repeat(2){
	     forward(50);right(90);
	 }
	repeat(2){
	     forward(50);right(-90);
	 }
	 forward(50);  
	 penUp();
	 forward(25);
	 penDown();
	 repeat(3){
	 	forward(50); right(-90);
	 	forward(100); right(-90);
	 }
	 right(180);
	 penUp();
	 forward(25);
	 penDown();
     
	repeat(2){
	     forward(50);right(90);
	 }
	repeat(2){
	     forward(50);right(-90);
	}
     forward(50);  
	 penUp();
	 forward(25);
	 right(-90);
	 forward(100);
	 right(90);
	 penDown();
	 repeat(2){
	     forward(50);right(90);
	 }
	repeat(2){
	     forward(50);right(-90);
	 }
	 forward(50);  
	 wait(10);
}