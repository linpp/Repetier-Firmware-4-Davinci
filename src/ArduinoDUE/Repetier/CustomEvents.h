#ifndef _CustomEvents_H
#define _CustomEvents_H

extern bool setLaserIntensity(uint8_t newIntensity);

#undef EVENT_SET_LASER
#define EVENT_SET_LASER(intensity) setLaserIntensity(intensity)

#endif
