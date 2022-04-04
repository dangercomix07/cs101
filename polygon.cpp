#include <simplecpp>

/*Author:AMEYA
Program to make Turtles go round and round*/

main_program{    
 turtleSim();
 cout << "Polygon Maker";
 cout << "How many sides?";
 
 int nsides;
 cin >> nsides;
 double ang = 360/nsides;//exterior angle of a polygon(n)=360/n

 repeat(nsides){
	repeat(3){
		forward(20); //penUp();
		//forward(20);penDown();
	}
	right(ang); 
	wait(0.1);
 }
 wait(5);   
}