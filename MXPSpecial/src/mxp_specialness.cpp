#include "HAL/AnalogTrigger.h"
#include "HAL/ChipObject.h"
#include "HAL/Ports.h"
#include "HAL/Types.h"
#include "HAL/handles/DigitalHandleResource.h"
#include "HAL/handles/HandlesInternal.h"

namespace hal {
	extern std::unique_ptr<tDIO> digitalSystem;
}

using namespace hal;

extern "C" {
	int read_mxp_specialness() {
		int status = 0;
		return digitalSystem->readEnableMXPSpecialFunction(&status);
	}
	void write_mxp_specialness(int value) {
		int status = 0;
		digitalSystem->writeEnableMXPSpecialFunction(value, &status);
	}
}
