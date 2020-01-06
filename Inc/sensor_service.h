#ifndef _SENSOR_SERVICE_H_
#define _SENSOR_SERVICE_H_

#ifdef __cplusplus
 extern "C" {
#endif 


#include "bluenrg_gap.h"
#include "string.h"
#include "hci_const.h"
#include "bluenrg_hal_aci.h"
#include "bluenrg_aci_const.h"   
#include "hci.h"
#include "hci_le.h"
#include "sm.h"
#include <stdlib.h>


#define IDB04A1 0
#define IDB05A1 1


typedef int i32_t;

extern uint16_t read_period;


tBleStatus Add_Environmental_Sensor_Service(void);
tBleStatus Temp_Update(int16_t temp);
tBleStatus Press_Update(int32_t press);
tBleStatus Humidity_Update(uint16_t humidity);
void Read_Request_CB(uint16_t handle);
void setConnectable(void);
void GAP_ConnectionComplete_CB(uint8_t addr[6], uint16_t handle);
void GAP_DisconnectionComplete_CB(void);
void user_notify(void * pData);
void update_values(void);

#ifdef __cplusplus
}
#endif

#endif /* _SENSOR_SERVICE_H_ */

