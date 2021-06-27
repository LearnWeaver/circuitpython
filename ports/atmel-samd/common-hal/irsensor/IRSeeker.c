#include <math.h>
#include "common-hal/irsensor/IRSeeker.h"

#include "atmel_start_pins.h"

#include "py/runtime.h"
#include "supervisor/shared/translate.h"

#include "hal/include/hal_gpio.h"


#define ARRAYSHIFTDOWN(a, lower, upper){          \
	if (upper == (sizeof(a)/sizeof(a[0])) - 1){   \
		for (int q = upper - 1; q >= lower; q--){ \
			*(a + q + 1) = *(a + q); }            \
	} else{                                       \
		for (int q = upper; q >= lower; q--){     \
			*(a + q + 1) = *(a + q); }}}



void common_hal_irsensor_irseeker_construct(irsensor_irseeker_obj_t *self,
    const mcu_pin_obj_t *pin_1,
    const mcu_pin_obj_t *pin_2,
    const mcu_pin_obj_t *pin_3,
    const mcu_pin_obj_t *pin_4,
    const mcu_pin_obj_t *pin_5,
    const mcu_pin_obj_t *pin_6,
    const mcu_pin_obj_t *pin_7,
    const mcu_pin_obj_t *pin_8,
    const mcu_pin_obj_t *pin_9,
    const mcu_pin_obj_t *pin_10,
    const mcu_pin_obj_t *pin_11,
    const mcu_pin_obj_t *pin_12,
    const mcu_pin_obj_t *pin_13,
    const mcu_pin_obj_t *pin_14,
    const mcu_pin_obj_t *pin_15
    
    ) {
    

    self->pin_1 = pin_1->number;
    self->pin_2 = pin_2->number;
    self->pin_3 = pin_3->number;
    self->pin_4 = pin_4->number;
    self->pin_5 = pin_5->number;
    self->pin_6 = pin_6->number;
    self->pin_7 = pin_7->number;
    self->pin_8 = pin_8->number;
    self->pin_9 = pin_9->number;
    self->pin_10 = pin_10->number;
    self->pin_11 = pin_11->number;
    self->pin_12 = pin_12->number;
    self->pin_13 = pin_13->number;
    self->pin_14 = pin_14->number;
    self->pin_15 = pin_15->number;

    /*gpio_set_pin_function(self->pin_1, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_2, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_3, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_4, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_5, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_6, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_7, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_8, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_9, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_10, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_11, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_12, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_13, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_14, GPIO_PIN_FUNCTION_A);
    gpio_set_pin_function(self->pin_15, GPIO_PIN_FUNCTION_A);*/
    
    self->best_sensor = 3;
    self->sig_strength = 45;
    

    claim_pin(pin_1);
    claim_pin(pin_2);
    claim_pin(pin_3);
    claim_pin(pin_4);
    claim_pin(pin_5);
    claim_pin(pin_6);
    claim_pin(pin_7);
    claim_pin(pin_8);
    claim_pin(pin_9);
    claim_pin(pin_10);
    claim_pin(pin_11);
    claim_pin(pin_12);
    claim_pin(pin_13);
    claim_pin(pin_14);
    claim_pin(pin_15);

    gpio_set_pin_direction(self->pin_1, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_1, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_2, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_2, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_3, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_3, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_4, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_4, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_5, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_5, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_6, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_6, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_7, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_7, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_8, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_8, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_9, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_9, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_10, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_10, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_11, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_11, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_12, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_12, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_13, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_13, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_14, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_14, GPIO_PULL_OFF);
    gpio_set_pin_direction(self->pin_15, GPIO_DIRECTION_IN);
    gpio_set_pin_pull_mode(self->pin_15, GPIO_PULL_OFF);

    
    //gpio_set_pin_pull_mode(self->pin_1, GPIO_PULL_OFF);

    
}

bool common_hal_irsensor_irseeker_deinited(irsensor_irseeker_obj_t *self) {

    return self->pin_1 == NO_PIN;
}

void common_hal_irsensor_irseeker_deinit(irsensor_irseeker_obj_t *self) {
    if (common_hal_irsensor_irseeker_deinited(self)) {
        return;
    }

   
    reset_pin_number(self->pin_1);
    reset_pin_number(self->pin_2);
    reset_pin_number(self->pin_3);
    reset_pin_number(self->pin_4);
    reset_pin_number(self->pin_5);
    reset_pin_number(self->pin_6);
    reset_pin_number(self->pin_7);
    reset_pin_number(self->pin_8);
    reset_pin_number(self->pin_9);
    reset_pin_number(self->pin_10);
    reset_pin_number(self->pin_11);
    reset_pin_number(self->pin_12);
    reset_pin_number(self->pin_13);
    reset_pin_number(self->pin_14);
    reset_pin_number(self->pin_15);

    

}

mp_int_t common_hal_irsensor_irseeker_get_bestsensor(irsensor_irseeker_obj_t *self) 
{

   // int bestSensor = 0; 
    int value_index = 0;
   // int index = -1; 
    int threshold = 230; 
    int MAX_IR_SENSORS = 15; 
    int max_reads = 512;
   

    uint8_t sensors[15] = {
        self->pin_1, 
        self->pin_2,
        self->pin_3, 
        self->pin_4,
        self->pin_5, 
        self->pin_6,
        self->pin_7, 
        self->pin_8,
        self->pin_9, 
        self->pin_10,
        self->pin_11, 
        self->pin_12,
        self->pin_13, 
        self->pin_14,
        self->pin_15
        
        };

    int values[15];  

    for(int i =0; i < 15; i++){
        values[i] = 0;
    }
    int filteredValues[15]; 
    
    int indexes[15] = {0};

    int totalCount = 0;

    for(int j = 0; j < max_reads; j++)
    { 
        for(int i = 0; i < MAX_IR_SENSORS; i++)
        { 
            if(!gpio_get_pin_level(sensors[i]))
            {
                values[i]++;// += 1;
                totalCount++;
            }
            //clear the filtered values
            filteredValues[i] = 0;
        } 
        
    } 

    for(int i = 0; i < MAX_IR_SENSORS; i++)
    { 
        for(int j = 0; j < MAX_IR_SENSORS; j++)
        {
            if(values[i] > filteredValues[j]) 
            {
                if(j <= i) 
                {
                    ARRAYSHIFTDOWN(filteredValues, j, i);
                    ARRAYSHIFTDOWN(indexes, j, i);
                }
                filteredValues[j] = values[i];
                indexes[j] = i;
                break;
            }
        }
    }
     
    for(int i = 0; i < 15; i++)
    { 
        if(values[i] == max_reads)
        {
            values[i] = 0;
          //  unfilteredValues[i] = 0;
        }
        // Filtering 
        if(values[i] < threshold)
        { //setup a threshold variable - only use values higher than a certain level 
           
            values[i] = 0; 
        } 

        if(values[i] > value_index)
        { 
           // index = i; 
            value_index = values[i]; 
        } 
        //values[i] = 0; 
    } 

    int sig = (int)((3 * filteredValues[0]) + (2 * filteredValues[1]) + filteredValues[2] + filteredValues[3]) / 7;

    double strength = ((double)sig / 400) * 100;
 
    self->sig_strength = (int) strength;  //percentage of 512  //self->sig_strength = values[index];
   
    float rads = 0;
    double runningX = 0;
    double runningY = 0;
    int avgCounter = 0;
    
    for(int i =0; i <=5; i++){

        if(filteredValues[i] < max_reads)
        {
            
            rads = 0.01745329252 * indexes[i] * 24;
            runningX += filteredValues[i] * cos(rads);
            runningY += filteredValues[i] * sin(rads);
            avgCounter++;
        }

    }

    double avgX = 0;
    double avgY = 0;
    
    if(avgCounter > 0)
    {
        avgX =  runningX / avgCounter;
        avgY =  runningY / avgCounter;
    }

    float bestGuessAngle = (float)atan2(avgY, avgX) * 57.295779513f;

    if(bestGuessAngle < 360)
    {
        bestGuessAngle = 360 + bestGuessAngle;
    }

    if(bestGuessAngle > 360){
        bestGuessAngle = bestGuessAngle - 360;
    }

    
    return (int) (bestGuessAngle / 24) + 1;

   // return index + 1;
}


        
mp_int_t common_hal_irsensor_irseeker_get_signalstrength(irsensor_irseeker_obj_t *self) {


    return self->sig_strength;
}



