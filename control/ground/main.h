#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

//#include <SDL2/SDL.h>

int openSocket(char ifName[16], unsigned char dest_mac[6], char trans_mode, int bitrate_option, int frame_type,
               int new_msp_version);
void closeSocket();
int sendPacket(unsigned short contData[]);
int conf_ethernet(unsigned char dest_mac[6]);
int conf_monitor(unsigned char dest_mac[6], int bitrate_option, int frame_type);

int i6S(int Joy_IF, char calibrate_comm[]);
int16_t normalize_i6S(int16_t value, int16_t adjustingValue);

unsigned short normalize_xbox(int value, int adjustingValue, int axis);

#endif // MAIN_H_INCLUDED
