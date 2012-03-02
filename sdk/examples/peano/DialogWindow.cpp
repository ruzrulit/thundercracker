#include "DialogWindow.h"
#include "assets.gen.h"
namespace TotalsGame
{

static const uint8_t font_data[] = {
    0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x02,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x01,0x00,0x00,
    0x04,0x00,0x00,0x05,0x05,0x05,0x00,0x00,0x00,0x00,0x00,0x00,
    0x06,0x00,0x00,0x0a,0x1f,0x0a,0x1f,0x0a,0x00,0x00,0x00,0x00,
    0x06,0x00,0x04,0x0e,0x15,0x05,0x0e,0x14,0x15,0x0e,0x04,0x00,
    0x06,0x00,0x00,0x12,0x15,0x0a,0x04,0x0a,0x15,0x09,0x00,0x00,
    0x06,0x00,0x00,0x06,0x09,0x05,0x02,0x15,0x09,0x16,0x00,0x00,
    0x02,0x00,0x01,0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x04,0x00,0x04,0x02,0x02,0x01,0x01,0x01,0x02,0x02,0x04,0x00,
    0x04,0x00,0x01,0x02,0x02,0x04,0x04,0x04,0x02,0x02,0x01,0x00,
    0x06,0x00,0x00,0x04,0x15,0x0e,0x15,0x04,0x00,0x00,0x00,0x00,
    0x06,0x00,0x00,0x00,0x04,0x04,0x1f,0x04,0x04,0x00,0x00,0x00,
    0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x02,0x01,
    0x05,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x00,0x00,
    0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x00,0x00,
    0x06,0x10,0x10,0x08,0x08,0x04,0x04,0x02,0x02,0x01,0x01,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x19,0x15,0x13,0x11,0x0e,0x00,0x00,
    0x03,0x00,0x00,0x02,0x03,0x02,0x02,0x02,0x02,0x02,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x10,0x08,0x04,0x02,0x1f,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x10,0x0c,0x10,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x08,0x0c,0x0a,0x09,0x1f,0x08,0x08,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x01,0x0f,0x10,0x10,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x01,0x0f,0x11,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x10,0x10,0x08,0x04,0x04,0x04,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x11,0x0e,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x11,0x11,0x1e,0x10,0x0e,0x00,0x00,
    0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x00,0x00,
    0x03,0x00,0x00,0x00,0x03,0x03,0x00,0x00,0x03,0x03,0x02,0x01,
    0x05,0x00,0x00,0x08,0x04,0x02,0x01,0x02,0x04,0x08,0x00,0x00,
    0x05,0x00,0x00,0x00,0x00,0x0f,0x00,0x0f,0x00,0x00,0x00,0x00,
    0x05,0x00,0x00,0x01,0x02,0x04,0x08,0x04,0x02,0x01,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x10,0x08,0x04,0x00,0x04,0x00,0x00,
    0x06,0x00,0x0e,0x11,0x11,0x15,0x17,0x0d,0x01,0x11,0x0e,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x11,0x1f,0x11,0x11,0x11,0x00,0x00,
    0x06,0x00,0x00,0x0f,0x11,0x11,0x0f,0x11,0x11,0x0f,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x01,0x01,0x01,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x0f,0x11,0x11,0x11,0x11,0x11,0x0f,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x01,0x01,0x0f,0x01,0x01,0x1f,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x01,0x01,0x0f,0x01,0x01,0x01,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x01,0x19,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x11,0x11,0x11,0x1f,0x11,0x11,0x11,0x00,0x00,
    0x02,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
    0x06,0x00,0x00,0x10,0x10,0x10,0x10,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x11,0x09,0x05,0x03,0x05,0x09,0x11,0x00,0x00,
    0x06,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x1f,0x00,0x00,
    0x06,0x00,0x00,0x11,0x1b,0x15,0x11,0x11,0x11,0x11,0x00,0x00,
    0x06,0x00,0x00,0x11,0x13,0x15,0x19,0x11,0x11,0x11,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x0f,0x11,0x11,0x0f,0x01,0x01,0x01,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x11,0x11,0x11,0x11,0x0e,0x10,0x00,
    0x06,0x00,0x00,0x0f,0x11,0x11,0x0f,0x11,0x11,0x11,0x00,0x00,
    0x06,0x00,0x00,0x0e,0x11,0x01,0x0e,0x10,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
    0x06,0x00,0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x11,0x11,0x11,0x0a,0x0a,0x04,0x04,0x00,0x00,
    0x06,0x00,0x00,0x11,0x11,0x11,0x11,0x15,0x1b,0x11,0x00,0x00,
    0x06,0x00,0x00,0x11,0x0a,0x04,0x04,0x04,0x0a,0x11,0x00,0x00,
    0x06,0x00,0x00,0x11,0x11,0x11,0x0a,0x04,0x04,0x04,0x00,0x00,
    0x06,0x00,0x00,0x1f,0x10,0x08,0x04,0x02,0x01,0x1f,0x00,0x00,
    0x03,0x00,0x03,0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x00,
    0x06,0x01,0x01,0x02,0x02,0x04,0x04,0x08,0x08,0x10,0x10,0x00,
    0x03,0x00,0x03,0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x03,0x00,
    0x06,0x00,0x04,0x0a,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,
    0x04,0x00,0x01,0x02,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x1e,0x11,0x11,0x19,0x16,0x00,0x00,
    0x06,0x00,0x00,0x01,0x01,0x0f,0x11,0x11,0x11,0x0f,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0e,0x11,0x01,0x01,0x1e,0x00,0x00,
    0x06,0x00,0x00,0x10,0x10,0x1e,0x11,0x11,0x11,0x1e,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0e,0x11,0x1f,0x01,0x1e,0x00,0x00,
    0x05,0x00,0x00,0x0c,0x02,0x07,0x02,0x02,0x02,0x02,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x1e,0x10,0x0e,
    0x06,0x00,0x00,0x01,0x01,0x0f,0x11,0x11,0x11,0x11,0x00,0x00,
    0x02,0x00,0x00,0x01,0x00,0x01,0x01,0x01,0x01,0x01,0x00,0x00,
    0x04,0x00,0x00,0x04,0x00,0x04,0x04,0x04,0x04,0x04,0x04,0x03,
    0x06,0x00,0x00,0x01,0x01,0x09,0x05,0x07,0x09,0x11,0x00,0x00,
    0x03,0x00,0x00,0x01,0x01,0x01,0x01,0x01,0x01,0x03,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0f,0x15,0x15,0x15,0x15,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0d,0x13,0x11,0x11,0x11,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0e,0x11,0x11,0x11,0x0e,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x0f,0x11,0x11,0x11,0x0f,0x01,0x01,
    0x06,0x00,0x00,0x00,0x00,0x1e,0x11,0x11,0x11,0x1e,0x10,0x10,
    0x06,0x00,0x00,0x00,0x00,0x0d,0x13,0x01,0x01,0x01,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x1e,0x01,0x0e,0x10,0x0f,0x00,0x00,
    0x05,0x00,0x00,0x02,0x02,0x0f,0x02,0x02,0x02,0x0c,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x19,0x16,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x11,0x11,0x0a,0x0a,0x04,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x15,0x15,0x15,0x15,0x0a,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x11,0x0a,0x04,0x0a,0x11,0x00,0x00,
    0x06,0x00,0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x1e,0x10,0x0e,
    0x06,0x00,0x00,0x00,0x00,0x1f,0x08,0x04,0x02,0x1f,0x00,0x00,
};

#define kFontHeight 11


static uint16_t rgb565(uint8_t r, uint8_t g, uint8_t b) {
    // Round to the nearest 5/6 bit color. Note that simple
    // bit truncation does NOT produce the best result!
    uint16_t r5 = ((uint16_t)r * 31 + 128) / 255;
    uint16_t g6 = ((uint16_t)g * 63 + 128) / 255;
    uint16_t b5 = ((uint16_t)b * 31 + 128) / 255;
    return (r5 << 11) | (g6 << 5) | b5;
}

static uint16_t color_lerp(uint8_t alpha) {
    // Linear interpolation between foreground and background

    const unsigned bg_r = 0xe8;
    const unsigned bg_g = 0xdc;
    const unsigned bg_b = 0xcc;

    const unsigned fg_r = 0x0;//0xf4;
    const unsigned fg_g = 0x0;//0xd8;
    const unsigned fg_b = 0x0;//0xb7;
    
    const uint8_t invalpha = 0xff - alpha;

    return rgb565( (bg_r * invalpha + fg_r * alpha) / 0xff,
                   (bg_g * invalpha + fg_g * alpha) / 0xff,
                   (bg_b * invalpha + fg_b * alpha) / 0xff );
}




DialogWindow::DialogWindow(TotalsCube* pCube) : mCube(pCube) {
    fg = rgb565(0,0,0);
    bg = rgb565(255,255,255);
}

void DialogWindow::SetBackgroundColor(unsigned r, unsigned g, unsigned b)
{
    fg = rgb565(r, g, b);
}

void DialogWindow::SetForegroundColor(unsigned r, unsigned g, unsigned b)
{
    bg = rgb565(r, g, b);
}

const char* DialogWindow::Show(const char* str) {
    unsigned count, length;
    MeasureText(str, &count, &length);
    mPosition.x = (128 - length) >> 1;
    DrawText(str);
    mPosition.y += kFontHeight + 1;
    return str + count;
}

void DialogWindow::DrawGlyph(char ch) {
    uint8_t index = ch - ' ';
    const uint8_t *data = font_data + (index * kFontHeight) + index;
    uint8_t escapement = *(data++);
    uint16_t dest = (mPosition.y << 4) | (mPosition.x >> 3);
    unsigned shift = mPosition.x & 7;

    for (unsigned i = 0; i < kFontHeight; i++) {
        mCube->vbuf.pokeb(dest, mCube->vbuf.peekb(dest) | (data[i] << shift));
        dest += 16;
    }

    if (shift) {
        dest += -16*kFontHeight + 1;
        shift = 8 - shift;

        for (unsigned i = 0; i < kFontHeight; i++) {
            mCube->vbuf.pokeb(dest, mCube->vbuf.peekb(dest) | (data[i] >> shift));
            dest += 16;
        }
    }

    mPosition.x += escapement;
}

unsigned DialogWindow::MeasureGlyph(char ch) {
    uint8_t index = ch - ' ';
    const uint8_t *data = font_data + (index * kFontHeight) + index;
    return data[0];
}

void DialogWindow::DrawText(const char *str) {
    char c;
    while ((c = *str) && c != '\n') {
        str++;
        DrawGlyph(c);
    }
}

void DialogWindow::MeasureText(const char *str, unsigned *outCount, unsigned *outPx) {
    *outPx = 0;
    *outCount = 0;
    char c;
    while ((c = *str) && c != '\n') {
        str++;
        (*outCount)++;
        *outPx += MeasureGlyph(c);
    }
    if (c) { (*outCount)++; }
}

void DialogWindow::Erase() {
    mPosition.y = 3;
    for (unsigned i = 0; i < sizeof mCube->vbuf.sys.vram.fb / 2; i++) {
        mCube->vbuf.poke(i, 0);
    }
}

void DialogWindow::Fade() {
    const unsigned speed = 4;
    const unsigned hold = 100;
    for (unsigned i = 0; i < 128; i += speed) {
        mCube->vbuf.poke(
                    offsetof(_SYSVideoRAM, colormap) / 2 + 1,
                    color_lerp(2*i)
                    );
        System::paint();
    }
    for (unsigned i = 0; i < hold; i++) {
        System::paint();
    }
    for (unsigned i = 0; i < 128; i += speed) {
        mCube->vbuf.poke(
                    offsetof(_SYSVideoRAM, colormap) / 2 + 1,
                    color_lerp(0xFF - 2*i)
                    );
        System::paint();
    }
}

void DialogWindow::DoDialog(const char *text, int yTop, int ySize)
{
    System::paintSync();
    mCube->vbuf.touch();
    System::paintSync();


/*
    System::paintSync();
    mCube->vbuf.touch();
    System::paintSync();
*/

    mCube->backgroundLayer.set();
    mCube->backgroundLayer.setWindow(0, 128);
    mCube->backgroundLayer.clear(1);
    mCube->foregroundLayer.Clear();
    mCube->GetView()->Paint();
    mCube->foregroundLayer.Flush();

    System::paintSync();
    mCube->vbuf.touch();
    System::paintSync();

    //Now set up a letterboxed 128x48 mode
    mCube->backgroundLayer.setWindow(yTop, ySize);
    mCube->vbuf.poke(offsetof(_SYSVideoRAM, colormap) / 2 + 0, fg);
    mCube->vbuf.poke(offsetof(_SYSVideoRAM, colormap) / 2 + 1, bg);
    mCube->vbuf.pokeb(offsetof(_SYSVideoRAM, mode), _SYS_VM_FB128);
    System::paintSync();

    Erase();

    const char* pNextChar = text;
    while(*pNextChar) {
        pNextChar = Show(pNextChar);
    }

    System::paintSync();
}


}
