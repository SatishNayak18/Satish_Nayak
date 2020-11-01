/*Car is traveling at a speed of 80 km/hr and a truck is stationed at a distance of 30 mts. 
Truck will start moving exactly after 3 second.
 If the car driver applies brake now find out whether car will hit the truck or not. 
 (distance =  ((initial velocity + final velocity )/2 ) * time  ).*/
 
 #include<stdio.h>
 #define initvelocity 80
 #define time 3
 #define stadistance 30.0
 
 int main()
 {
 	float initvel,distance,finvelocity= 0.0;
 	initvel = initvelocity * 0.2777778;
 	distance = (initvel + finvelocity)/2 *time;

 	 if(stadistance > distance)
 	 {
 	 	printf("The Car will not hit the truck.\n");
 	 }
 	 else
 	 {
 	 	printf("The Car will hit the truck.\n");
 	 }

 }
