#ifndef MODBUS_SLAVE_RTU_CONF_H_INCLUDED
#define MODBUS_SLAVE_RTU_CONF_H_INCLUDED

#define MODBUS_SLAVE_USART              USART1
#define MODBUS_SLAVE_USART_BAUDRATE     115200
//#define MODBUS_SLAVE_USART_BAUDRATE     19200

/*IDLE Characters to timeout*/
#define MODBUS_SLAVE_TIMEOUT            30
#define MODBUS_SLAVE_ADDRESS            1
#define MODBUS_SLAVE_REGISTERS_NUM      256


#endif /* MODBUS_SLAVE_RTU_CONF_H_INCLUDED */
