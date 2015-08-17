/**
 *  \brief    Baudrate definitions.
 *  \author   Aurelien Morelle <aurelien.morelle@parrot.com>
 *  \version  1.0
 *  \date     25/07/2007
 */

#ifndef _VP_OS_SERIAL_H_
#define _VP_OS_SERIAL_H_

#include <termios.h>

typedef enum _vp_com_baudrates_
{
  VP_COM_BAUDRATE_0 = B0,	// hang up
  VP_COM_BAUDRATE_50 = B50,
  VP_COM_BAUDRATE_75 = B75,
  VP_COM_BAUDRATE_110 = B110,
  VP_COM_BAUDRATE_134 = B134,
  VP_COM_BAUDRATE_150 = B150,
  VP_COM_BAUDRATE_200 = B200,
  VP_COM_BAUDRATE_300 = B300,
  VP_COM_BAUDRATE_600 = B600,
  VP_COM_BAUDRATE_1200 = B1200,
  VP_COM_BAUDRATE_1800 = B1800,
  VP_COM_BAUDRATE_2400 = B2400,
  VP_COM_BAUDRATE_3600 = B0,	// not supported, so hang up
  VP_COM_BAUDRATE_4800 = B4800,
  VP_COM_BAUDRATE_7200 = B0,	// not supported, so hang up
  VP_COM_BAUDRATE_9600 = B9600,
  VP_COM_BAUDRATE_14400 = B0,	// not supported, so hang up
  VP_COM_BAUDRATE_19200 = B19200,
  VP_COM_BAUDRATE_38400 = B38400,
  VP_COM_BAUDRATE_57600 = B57600,
  VP_COM_BAUDRATE_115200 = B115200,
  VP_COM_BAUDRATE_230400 = B230400,
  VP_COM_BAUDRATE_460800 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_500000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_576000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_921600 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_1000000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_1152000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_1500000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_2000000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_2500000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_3000000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_3500000 = B0,   // not supported, so hang up
  VP_COM_BAUDRATE_4000000 = B0,   // not supported, so hang up
}
vp_com_baudrate_t;

#endif // _VP_OS_SERIAL_H_
