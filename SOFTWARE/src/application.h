#ifndef APPLICATION_H
#define APPLICATION_H

#include "defines.h"

#define BUTTON_INTCHG INTCHGC
#define BUTTON_PIN    PINC
#define BUTTON_MASK   0x04

#define HEALTH_PERIOD 4*60*60



extern int8_t pwr;
extern uint8_t __xdata Voltage;
extern uint8_t rotate_speed;
extern uint8_t speed_counter;
extern uint8_t speed;
extern uint8_t BUTT;
extern uint8_t GoodCal;



extern uint8_t __xdata stay_awake;

void HAL_RebootToBootloader();
void ColdSetup();
void WarmSetup();
void GPIO_Deinit();
void ReceivedPacket_cb(struct axradio_status __xdata *st);
void Loop();
void RX_Callback(uint8_t __generic* data, uint16_t length);
#endif
