/*
Safest Driving Area

Write a program that determines which of 5 geographic regions within a major city
(north, south, east, west, and central) had the fewest reported traffic accidents
last year. It should have the following two functions, which are called by main.

	• int getNumAccidents() is passed the name of a region. It asks the user for
	  the number of traffic accidents reported in that region during the last
	  year, validates the input, then returns it. It should be called once for
	  each city region.
	• void findLowest() is passed the five accident totals. It determines which is
	  the smallest and prints the name of the region, along with its accident
	  figure.

	  Input Validation: Do not accept an accident number that is less than 0.
*/