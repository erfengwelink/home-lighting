#ifndef LEDS_H
#define LEDS_H

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/ledc.h"

void initLeds(xQueueHandle* queueHandler);
void addChannel(uint8_t gpio);

#endif