#ifndef BREADBOX_CLOCK_H
#define BREADBOX_CLOCK_H

#include <vector>
#include "clock_listener.h"

namespace VM::UNIT {
class Clock {
    Clock():
            mClockListeners()
    {
    }

    void add_clock_listener(ClockListener &listener)
    {
        mClockListeners.push_back(listener);
    }

private:
    std::vector<referClockListener> mClockListeners;
};
}

#endif //BREADBOX_CLOCK_H
