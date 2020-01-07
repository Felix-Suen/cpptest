#ifndef HSLAPIXEL_H
#define HSLAPIXEL_H

class HSLAPixel {
public:
	double h, s, l, a;

	HSLAPixel() {
		h = 0;
		s = 0;
		l = 1.0;
		a = 1.0;
	}

	HSLAPixel(double hue, double saturation, double luminance) {
		h = hue;
		s = saturation;
		l = luminance;
	}

	HSLAPixel(double hue, double saturation, double luminance, double alpha) {
		h = hue;
		s = saturation;
		l = luminance;
		a = alpha;
	}
};

#endif