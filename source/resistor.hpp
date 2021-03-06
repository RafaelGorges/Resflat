/*****************************************************************************
*                                                                            *
*   Resistor Calculator                                                      *
*   Calculate the values on resistors and shows ur tolerance                 *
*                                                                            *
*   @author Rafael Pereira da Costa Gorges                                   *
*   @contributors Vinicius de Morais                                         *
*   @date 03/15/2014                                                         *
*                                                                            *
*   CHANGELOG:                                                               *
*   - Created the resistor class. [Rafael G]                                 *
*   - Created the main function to calculate the values. [Rafael G]          *
*   - Added some comments to the code. [Rafael G]                            *
*                                                                            *
*****************************************************************************/

#ifndef RESISTOR_HPP
#define RESISTOR_HPP
#define MAX_RESISTORS 8	// Change this if you need use more than 8 resistors.
#define MAX_TOLERANCE 10	// Change this if you need use more than 10% of tolerance.

using namespace std;

/*****************************************************
* Class Resistor                                     *
* Get variables to use in resistor code calculation. *                   
*****************************************************/

class resistor {
	private:
		double resistance;
		double tolerance;
	public:
		resistor(double rL,double tL);
		~resistor();
		void StoreResistance(double rL);
		double getResistance();
		void StoreTolerance (double tL);
		double getTolerance();
		resistor(); 
};

enum color {
	silver = -2,
	gold   = -1,
	black  = 0,
	brown  = 1,
	red    = 2,
	orange = 3,
	yellow = 4,
	green  = 5,
	blue   = 6,
	violet = 7,
	gray   = 8,
	white  = 9,
};

#endif