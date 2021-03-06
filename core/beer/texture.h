#pragma once

#include "defs.h"
#include "error.h"

enum BeerPixelFormat
{
	BEER_PIXEL_FORMAT_UNKNOWN,
	BEER_PIXEL_FORMAT_RGBA8888,
	BEER_PIXEL_FORMAT_MAX,
};

struct BeerTexture
{
	// texture size in pixels
	unsigned width, height;

	enum BeerPixelFormat format;

	// private
	void *data_;
};

BEER_API beer_err
beer_texture_from_buffer(enum BeerPixelFormat fmt, int width, int height, char *data, struct BeerTexture **r_tex);

BEER_API void
beer_texture_free(struct BeerTexture *tex);
