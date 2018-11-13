#include "pxt.h"
#include "simulate_float.h"

namespace SoftFloat {

    /**
    * Perform soft-float conversion
    */
    //% blockId=SoftFloat_IntToSFloat block="Integer to SoftFloat"
    int IntToSFloat(int number) {
        simulate_float res = int_to_sfloat(number);
		return res;
    }

}
