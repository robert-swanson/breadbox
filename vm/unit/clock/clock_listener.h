//
// Created by Robert Swanson on 6/19/23.
//

#ifndef BREADBOX_CLOCK_LISTENER_H
#define BREADBOX_CLOCK_LISTENER_H

#include <cstdio>

class ClockListener
{
    virtual void on_clock() = 0;
    void mark_dirty()
    {
        mIsDirty = true;
    }

private:
    bool mIsDirty;
};

class TestClockListener: ClockListener
{
    void on_clock()
    {
        printf("Clock pulse");
    }
};
#endif //BREADBOX_CLOCK_LISTENER_H
