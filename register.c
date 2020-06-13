#define BMP280_CHIP_ID_ADDR                 0xD0U   // register contains the chip identification number chip_id[7:0], which is 0x58.
#define BMP280_RESET_ADDR                   0xE0U   // contains the soft reset word reset[7:0],which is  0xB6.The readout value is always 0x00.
#define BMP280_STATUS_ADDR                  0xF3U   //contains 2 bits,Bit0 for im_update[0] and Bit3 for measuring[0].
#define BMP280_CRTL_MEAS_ADDR               0xF4U  //Bit[1:0] for mode[1:0] controls power mode;Bit[4:2] for osrs_p[2:0]controls oversampling of pressure data;Bit[7:5] for osrs_t[2:0]controls oversampling of temp data.
#define BMP280_CONFIG_ADDR                  0xF5U  //Bit[7:5] for t_sb[2:0] Controls inactive duration tstandby in normal mode;Bit[4:2] for filter[2:0] Controls the time constant of the IIR filter;Bit 0 for spi3w_en[0] enables 3-wire SPI interface when set to ‘1’
#define BMP280_PRESS_MSB_ADDR               0xF7U   //Contains the MSB part up[19:12] of the raw pressure measurement output data,bit[7:0] used.
#define BMP280_PRESS_LSB_ADDR               0xF8U   //Contains the LSB part up[11:4] of the raw pressure measurement output data, bit[7:0] used.
#define BMP280_PRESS_XLSB_ADDR              0xF9U   //Contains the XLSB part up[3:0] of the raw pressure measurement output data, bit[7:4]used.
#define BMP280_TEMP_MSB_ADDR                0xFAU  //Contains the MSB part ut[19:12] of the raw temperature measurement output data,bit[7:0]used.
#define BMP280_TEMP_LSB_ADDR                0xFBU   //Contains the LSB part ut[11:4] of the raw temperature measurement output data,bit[7:0] used.
#define BMP280_TEMP_XLSB_ADDR               0xFCU   //Contains the XLSB part ut[3:0] of the raw temperature measurement output data ,contents depend on pressure resolution,bit[7:4] used.

// COMPENSATION DATA : each compensation word is a 16-bit signed or unsigned integer value stored in two’s complement.

#define BMP280_CALIB00_LSB_ADDR              0x88U   // name: dig_T1   ; value:27504       ; datatype:unsigned short
#define BMP280_CALIB01_MSB_ADDR              0x89U   // name: dig_T1   ; value:27504       ; datatype:unsigned short
#define BMP280_CALIB02_LSB_ADDR              0x8AU   // name: dig_T2   ; value:26435       ; datatype:signed short
#define BMP280_CALIB03_MSB_ADDR              0x8BU   // name: dig_T2   ; value:26435       ; datatype:signed short
#define BMP280_CALIB04_LSB_ADDDR             0x8CU   // name: dig_T3   ; value:-1000       ; datatype:signed short
#define BMP280_CALIB05_MSB_ADDR              0x8DU   // name: dig_T3   ; value:-1000       ; datatype:signed short
#define BMP280_CALIB06_LSB_ADDR              0x8EU   // name: dig_P1   ; value:36477       ; datatype:unsigned short
#define BMP280_CALIB07_MSB_ADDR              0x8FU   // name: dig_P1   ; value:36477       ; datatype:unsigned short
#define BMP280_CALIB08_LSB_ADDR              0x90U   // name: dig_P2   ; value:-10685      ; datatype:signed short
#define BMP280_CALIB09_MSB_ADDR              0x91U   // name: dig_P2   ; value:-10685      ; datatype:signed short
#define BMP280_CALIB10_LSB_ADDR              0x92U   // name: dig_P3   ; value:3024        ; datatype:signed short
#define BMP280_CALIB11_MSB_ADDR              0x93U  // name: dig_P3   ; value:3024        ; datatype:signed short
#define BMP280_CALIB12_LSB_ADDR              0x94U   // name: dig_P4   ; value:2855        ; datatype:signed short
#define BMP280_CALIB13_MSB_ADDR              0x95U   // name: dig_P4   ; value:2855        ; datatype:signed short
#define BMP280_CALIB14_LSB_ADDR              0x96U   // name: dig_P5   ; value:140         ; datatype:signed short
#define BMP280_CALIB15_MSB_ADDR              0x97U   // name: dig_P5   ; value:140         ; datatype:signed short
#define BMP280_CALIB16_LSB_ADDR              0x98U   // name: dig_P6   ; value:-7          ; datatype:signed short
#define BMP280_CALIB17_MSB_ADDR              0x99U   // name: dig_P6   ; value:-7          ; datatype:signed short
#define BMP280_CALIB18_LSB_ADDR              0x9AU   // name: dig_P7   ; value:15500       ; datatype:signed short
#define BMP280_CALIB19_MSB_ADDR              0x9BU   // name: dig_P7   ; value:15500       ; datatype:signed short
#define BMP280_CALIB20_LSB_ADDR              0x9CU   // name: dig_P8   ; value:-14600      ; datatype:signed short
#define BMP280_CALIB21_MSB_ADDR              0x9DU   // name: dig_P8   ; value:-14600      ; datatype:signed short
#define BMP280_CALIB22_LSB_ADDR              0x9EU   // name: dig_P9   ; value:6000        ; datatype:signed short
#define BMP280_CALIB23_MSB_ADDR              0x9FU   // name: dig_P9   ; value:6000        ; datatype:signed short
#define BMP280_CALIB24_LSB_ADDR              0xA0U   // name: reserved ; value:not defined ; datatype:reserved
#define BMP280_CALIB25_MSB_ADDR              0xA1U   // name: reserved ; value:not defined ; datatype:reserved



// SAMPLE MEASUREMENT VALUES :  both temp and pressure are received in 20 bit format

#define BMP280_UT_MSB_ADDR                  0xF7U    // value:519888  ; type:signed long ; bit[7:0]used
#define BMP280_UT_LSB_ADDR                  0xF8U    // value:519888  ; type:signed long ; bit[7:0]used
#define BMP280_UT_XLSB_ADDR                 0xF9U    // value:519888  ; type:signed long ; bit[7:4]used
#define BMP280_UP_MSB_ADDR                  0xFAU    // value:415148  ; type:signed long ; bit[7:0]used
#define BMP280_UP_LSB_ADDR                  0xFBU    // value:415148  ; type:signed long ; bit[7:0]used
#define BMP280_UP_XLSB_ADDR                 0xFCU    // value:415148  ; type:signed long ; bit[7:4]used
