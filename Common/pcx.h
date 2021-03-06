//
//  pcx.h
//  HPIView
//
//  Created by Logan Jones on 11/18/16.
//
#ifndef pcx_h
#define pcx_h
#include <stdint.h>
#pragma pack(1)

typedef struct PCX_HEADER
{
    uint8_t         identifier;
    uint8_t         version;
    uint8_t         encoding;
    uint8_t         bitsPerPixel;
    struct
    {	uint16_t    xMin;
        uint16_t    yMin;
        uint16_t    xMax;
        uint16_t    yMax;
    }               window;
    uint16_t        hDpi;
    uint16_t        vDpi;
    uint8_t         colormap[48];
    uint8_t         reserved;
    uint8_t         nPlanes;
    uint16_t        bytesPerLine;
    uint16_t        paletteInfo;
    uint16_t        hScreenSize;
    uint16_t        vScreenSize;
    uint8_t         filler[54];
    
} *LPPCX_HEADER;

// Every valid PCX should have its identifer set to 10h.
static const uint8_t PCX_IDENTIFIER             = 0x0A;

#pragma pack()
#endif /* pcx_h */
