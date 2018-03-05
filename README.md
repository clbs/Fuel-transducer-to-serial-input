This is a quick datalogger created to log fuel pressure inputs from a 5V 0-100 psi transducer.

The transducers output is 0.5 at 0 psi and 4.5 at 100 psi.

The transducer is using the 5V supply from an arduino board and the voltage sense wire is being read
from the analog input 0 pin.

The program takes a sample every half a second then the unit sends that information to arduinos serial monitor.

if the output is over or under range the serial output displays the error conditions.
