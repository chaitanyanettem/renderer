#include "tgaimage.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red   = TGAColor(255, 0,   0,   255);

void line(int x0, int y0, int x1, int y1, TGAImage &image, TGAColor color) {
    for (float t=0; t<1.; t+=0.1) {
        image.set(x0 + (x1 - x0) * t, y0 + (y1 - y0) * t, color);
    }
}

int main(int argc, char** argv) {
        TGAImage image(100, 100, TGAImage::RGB);
        // image.set(52, 41, red);
        line(20, 20, 100, 100, image, red);
        image.write_tga_file("output2.tga");
        return 0;
}
