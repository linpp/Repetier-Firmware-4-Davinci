#ifndef _CustomEventsImpl_H
#define _CustomEventsImpl_H

bool setLaserIntensity(uint8_t newIntensity) {
// LASER_PIN must be hardware PWM capable (not on timers 0-2)
#if LASER_PIN > -1
    analogWrite(LASER_PIN, newIntensity);
    return false;
#else
    return true;
#endif
}

#endif
