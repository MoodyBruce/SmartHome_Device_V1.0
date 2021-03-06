#ifndef _OLEDPIC_H_
#define _OLEDPIC_H_

//����EDA logo
const unsigned char logo_jlc[]={	 
0xFF,0xC0,0xFF,0x80,0xFF,0x00,0x3F,0x80,0xFE,0x00,0x1F,0x80,0xFC,0x00,0x0F,0x80,0xF8,0x3F,0x07,0x80,0xF8,0x7F,0x87,0x80,0xF0,0xFF,0x83,0x80,0xF0,0xFF,0x01,0x80,0xF0,0xFE,0x00,0x80,0xF0,0xFE,0x00,0x00,0xF0,0xFC,0x38,0x00,0xC0,0x7C,0x3C,0x00,0xC1,0xFC,0x38,0x00,0x83,0xFC,0x00,0x00,0x87,0xFE,0x00,0x80,0x0F,0xFF,0x00,0x80,0x0F,0xFF,0x03,0x80,0x0F,0xFE,0x1F,0x80,
0x0F,0xFC,0x1F,0x80,0x0F,0xFC,0x3F,0x80,0x0F,0xF8,0x3F,0x80,0x0F,0xF8,0x7F,0x80,0x0F,0xF0,0xEF,0x80,0x87,0xF8,0xC3,0x80,0x83,0xFD,0xC3,0x80,0xC0,0xFF,0xC3,0x80,0xE0,0x3F,0xC3,0x80,0xF0,0x3F,0xC3,0x80,0xF8,0x3F,0xC3,0x80,0xFE,0x1F,0x87,0x80,0xFE,0x06,0x07,0x80,0xFF,0x00,0x0F,0x80,0xFF,0x80,0x1F,0x80,0xFF,0xC0,0x3F,0x80,0xFF,0xFB,0xFF,0x80,0xFF,0xFF,0xFF,0x80,
0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xE7,0x80,0xFF,0xFF,0xC7,0x80,0xF3,0xFF,0xC7,0x80,0xE3,0xFF,0xC7,0x80,0xE2,0x5F,0xC7,0x80,0xE2,0x00,0x47,0x80,0xE2,0x00,0x07,0x80,0xE3,0xE0,0x27,0x80,0xE3,0xFF,0xC7,0x80,0xE3,0xFF,0xC7,0x80,0xC3,0xFF,0xC7,0x80,0x83,0xFF,0xC7,0x80,0x83,0xFE,0x27,0x80,0xE3,0xF0,0x07,0x80,0xE3,0x80,0x27,0x80,0xE2,0x00,0xC7,0x80,
0xE2,0x0F,0xC7,0x80,0xE2,0x7F,0xC7,0x80,0xE3,0xFF,0xE7,0x80,0xF3,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0x0F,0x80,0xFC,0xE0,0x07,0x80,0xF8,0xC0,0x07,0x80,0xE0,0x80,0xC7,0x80,0xC1,0x9F,0xE7,0x80,0xC7,0x8E,0x47,0x80,0xC7,0x9C,0x47,0x80,0xC7,0x8C,0x47,0x80,0xCF,0x8C,0x67,0x80,0xC7,0x80,0x47,0x80,0xC0,0x80,0x67,0x80,0xC0,0x80,0xEF,0x80,0xF0,0xFF,0xEF,0x80,
0xFF,0xF0,0x67,0x80,0xF0,0x00,0x47,0x80,0xF0,0x00,0xC7,0x80,0xF0,0x1E,0x07,0x80,0xFF,0x00,0x0F,0x80,0xC0,0x00,0x0F,0x80,0xC0,0x03,0xFF,0x80,0xC2,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0x80,0xFF,0xF8,0x07,0x80,0xFC,0x00,0x07,0x80,0xC0,0x00,0x07,0x80,0xC0,0x00,0x07,0x80,0xC0,0x07,0x87,0x80,0xC3,0x87,0x87,0x80,0xC3,0x87,0x87,0x80,0xC3,0x87,0x87,0x80,
0xC3,0x87,0x87,0x80,0xC3,0x87,0x87,0x80,0xC3,0x87,0x87,0x80,0xC3,0x87,0xCF,0x80,0xC3,0xCF,0xFF,0x80,0xC7,0xFF,0xFF,0x80,0xFF,0xFF,0x07,0x80,0xFF,0x80,0x07,0x80,0xC0,0x00,0x07,0x80,0xC0,0x00,0x07,0x80,0xC0,0x00,0x87,0x80,0xC0,0x7F,0x87,0x80,0xC3,0xFF,0x87,0x80,0xC3,0xFF,0x8F,0x80,0xC3,0xFF,0x87,0x80,0xC3,0xFF,0x0F,0x80,0xC1,0xFF,0x0F,0x80,0xE0,0xFE,0x0F,0x80,
0xE0,0x00,0x1F,0x80,0xF0,0x00,0x3F,0x80,0xF8,0x00,0x7F,0x80,0xFE,0x01,0xC7,0x80,0xFF,0xCF,0x8F,0x80,0xFF,0xFE,0x07,0x80,0xFF,0xF8,0x0F,0x80,0xFF,0xE0,0x1F,0x80,0xFF,0x80,0x7F,0x80,0xFF,0x00,0x7F,0x80,0xFC,0x38,0x7F,0x80,0xF0,0x6C,0x7F,0x80,0xC0,0x44,0x7F,0x80,0xC0,0x4C,0x7F,0x80,0xC0,0x78,0x7F,0x80,0xC0,0x70,0x7F,0x80,0xFC,0xE0,0x0F,0x80,0xFF,0xE0,0x0F,0x80,
0xFF,0xF8,0x0F,0x80,0xFF,0xFF,0x87,0x80
};

const unsigned char logo_tuya[]={

0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,
0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0x80,0x00,0x01,0xFF,0xFF,0xFE,
0xFF,0xFF,0x00,0x00,0x00,0xFF,0xFF,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x3F,0xFF,0xFE,0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0x80,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,
0xFC,0x0F,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFE,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,
0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,
0xFF,0x87,0xFF,0xFE,0xFF,0xFF,0xFE,0x1F,0xFF,0x8F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xC0,0x07,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x3F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,
0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFF,0x9F,0xF8,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xF8,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0x80,0x00,0x1F,0xFF,0xFE,
0xFF,0xFF,0xFE,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x7F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0x00,0x07,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFE,
0xFF,0xFF,0xFF,0x00,0x00,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x7F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0xFF,0xFF,0x01,
0xF8,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0x07,0xE7,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xC3,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x83,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x83,0xFE,
0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x83,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x83,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0x87,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x07,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFE,0x0E,0x07,0xFE,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x0F,0xFE,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFE,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x1F,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x7F,0xFE,
0xFF,0xFF,0xFE,0x00,0x00,0x00,0xFF,0xFE,0xFF,0xFF,0xFE,0x00,0x00,0x0F,0xFF,0xFE,0xFF,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xF8,0x03,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xE0,0x00,0xFF,0xFF,0xFE,
0xFF,0xFF,0xFF,0xC0,0x00,0x7F,0xFF,0xFE,0xFF,0xFF,0xFF,0x80,0x00,0x3F,0xFF,0xFE,0xFF,0xFF,0xFF,0x00,0xE0,0x1F,0xFF,0xFE,0xFF,0xFF,0xFF,0x03,0xF8,0x1F,0xFF,0xFE,0xFF,0xFF,0xFE,0x07,
0xFC,0x0F,0xFF,0xFE,0xFF,0xFF,0xFE,0x0F,0xFE,0x0F,0xFF,0xFE,0xFF,0xFF,0xFC,0x1F,0xFE,0x0F,0xFF,0xFE,0xFF,0xFF,0xFC,0x1F,0xFF,0x07,0xFF,0xFE,0xFF,0xFF,0xFC,0x1F,0xFF,0x07,0xFF,0xFE,
0xFF,0xFF,0xFC,0x1F,0xFF,0x0F,0xFF,0xFE,0xFF,0xFF,0xFC,0x1F,0xFF,0x9F,0xFF,0xFE,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFE,0x07,
0xFF,0xFF,0xFF,0xFE,0xFF,0x8F,0xFF,0x03,0xFF,0xFF,0xFF,0xFE,0xFF,0x8F,0xFF,0x00,0x00,0x1F,0xFF,0xFE,0xFF,0x1F,0x3F,0x80,0x00,0x0F,0xFF,0xFE,0xFF,0x1F,0x1F,0xC0,0x00,0x0F,0xFF,0xFE,
0xFF,0x1E,0x3F,0xE0,0x00,0x0F,0xFF,0xFE,0xFF,0x1E,0x3F,0xF8,0x00,0x1F,0xFF,0xFE,0xFF,0x1F,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0x1F,0x1F,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0x1F,0x81,0xFF,
0xFF,0xFF,0xFF,0xFE,0xFF,0x9F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0x8F,0xE3,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0x7F,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xF8,0x03,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFE,0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0x83,0xFF,
0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE/*"C:\Users\Sun Hao\Desktop\Ϳѻlogo��ɫͼ.bmp",0*/

};

#endif