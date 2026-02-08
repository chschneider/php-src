<?php

/** @generate-class-entries */

/**
 * @var int
 * @cvalue PHP_IMG_AVIF
 */
const IMG_AVIF = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_GIF
 */
const IMG_GIF = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_JPG
 */
const IMG_JPG = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_JPEG
 */
const IMG_JPEG = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_PNG
 */
const IMG_PNG = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_WBMP
 */
const IMG_WBMP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_XPM
 */
const IMG_XPM = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_WEBP
 */
const IMG_WEBP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_BMP
 */
const IMG_BMP = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_IMG_TGA
 */
const IMG_TGA = UNKNOWN;

/* constant for webp encoding */

#ifdef gdWebpLossless
/**
 * @var int
 * @cvalue gdWebpLossless
 */
const IMG_WEBP_LOSSLESS = UNKNOWN;
#endif

/* special colours for gd */

/**
 * @var int
 * @cvalue gdTiled
 */
const IMG_COLOR_TILED = UNKNOWN;
/**
 * @var int
 * @cvalue gdStyled
 */
const IMG_COLOR_STYLED = UNKNOWN;
/**
 * @var int
 * @cvalue gdBrushed
 */
const IMG_COLOR_BRUSHED = UNKNOWN;
/**
 * @var int
 * @cvalue gdStyledBrushed
 */
const IMG_COLOR_STYLEDBRUSHED = UNKNOWN;
/**
 * @var int
 * @cvalue gdTransparent
 */
const IMG_COLOR_TRANSPARENT = UNKNOWN;

/* for imagefilledarc */

/**
 * @var int
 * @cvalue gdArc
 */
const IMG_ARC_ROUNDED = UNKNOWN;
/**
 * @var int
 * @cvalue gdPie
 */
const IMG_ARC_PIE = UNKNOWN;
/**
 * @var int
 * @cvalue gdChord
 */
const IMG_ARC_CHORD = UNKNOWN;
/**
 * @var int
 * @cvalue gdNoFill
 */
const IMG_ARC_NOFILL = UNKNOWN;
/**
 * @var int
 * @cvalue gdEdged
 */
const IMG_ARC_EDGED = UNKNOWN;

/* GD2 image format types */

/**
 * @var int
 * @cvalue GD2_FMT_RAW
 */
const IMG_GD2_RAW = UNKNOWN;
/**
 * @var int
 * @cvalue GD2_FMT_COMPRESSED
 */
const IMG_GD2_COMPRESSED = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_GD_FLIP_HORIZONTAL
 */
const IMG_FLIP_HORIZONTAL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_GD_FLIP_VERTICAL
 */
const IMG_FLIP_VERTICAL = UNKNOWN;
/**
 * @var int
 * @cvalue PHP_GD_FLIP_BOTH
 */
const IMG_FLIP_BOTH = UNKNOWN;
/**
 * @var int
 * @cvalue gdEffectReplace
 */
const IMG_EFFECT_REPLACE = UNKNOWN;
/**
 * @var int
 * @cvalue gdEffectAlphaBlend
 */
const IMG_EFFECT_ALPHABLEND = UNKNOWN;
/**
 * @var int
 * @cvalue gdEffectNormal
 */
const IMG_EFFECT_NORMAL = UNKNOWN;
/**
 * @var int
 * @cvalue gdEffectOverlay
 */
const IMG_EFFECT_OVERLAY = UNKNOWN;

#ifdef gdEffectMultiply
/**
 * @var int
 * @cvalue gdEffectMultiply
 */
const IMG_EFFECT_MULTIPLY = UNKNOWN;
#endif

/**
 * @var int
 * @cvalue GD_CROP_DEFAULT
 */
const IMG_CROP_DEFAULT = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CROP_TRANSPARENT
 */
const IMG_CROP_TRANSPARENT = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CROP_BLACK
 */
const IMG_CROP_BLACK = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CROP_WHITE
 */
const IMG_CROP_WHITE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CROP_SIDES
 */
const IMG_CROP_SIDES = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CROP_THRESHOLD
 */
const IMG_CROP_THRESHOLD = UNKNOWN;

/**
 * @var int
 * @cvalue GD_BELL
 */
const IMG_BELL = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BESSEL
 */
const IMG_BESSEL = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BILINEAR_FIXED
 */
const IMG_BILINEAR_FIXED = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BICUBIC
 */
const IMG_BICUBIC = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BICUBIC_FIXED
 */
const IMG_BICUBIC_FIXED = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BLACKMAN
 */
const IMG_BLACKMAN = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BOX
 */
const IMG_BOX = UNKNOWN;
/**
 * @var int
 * @cvalue GD_BSPLINE
 */
const IMG_BSPLINE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_CATMULLROM
 */
const IMG_CATMULLROM = UNKNOWN;
/**
 * @var int
 * @cvalue GD_GAUSSIAN
 */
const IMG_GAUSSIAN = UNKNOWN;
/**
 * @var int
 * @cvalue GD_GENERALIZED_CUBIC
 */
const IMG_GENERALIZED_CUBIC = UNKNOWN;
/**
 * @var int
 * @cvalue GD_HERMITE
 */
const IMG_HERMITE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_HAMMING
 */
const IMG_HAMMING = UNKNOWN;
/**
 * @var int
 * @cvalue GD_HANNING
 */
const IMG_HANNING = UNKNOWN;
/**
 * @var int
 * @cvalue GD_MITCHELL
 */
const IMG_MITCHELL = UNKNOWN;
/**
 * @var int
 * @cvalue GD_POWER
 */
const IMG_POWER = UNKNOWN;
/**
 * @var int
 * @cvalue GD_QUADRATIC
 */
const IMG_QUADRATIC = UNKNOWN;
/**
 * @var int
 * @cvalue GD_SINC
 */
const IMG_SINC = UNKNOWN;
/**
 * @var int
 * @cvalue GD_NEAREST_NEIGHBOUR
 */
const IMG_NEAREST_NEIGHBOUR = UNKNOWN;
/**
 * @var int
 * @cvalue GD_WEIGHTED4
 */
const IMG_WEIGHTED4 = UNKNOWN;
/**
 * @var int
 * @cvalue GD_TRIANGLE
 */
const IMG_TRIANGLE = UNKNOWN;

/**
 * @var int
 * @cvalue GD_AFFINE_TRANSLATE
 */
const IMG_AFFINE_TRANSLATE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_AFFINE_SCALE
 */
const IMG_AFFINE_SCALE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_AFFINE_ROTATE
 */
const IMG_AFFINE_ROTATE = UNKNOWN;
/**
 * @var int
 * @cvalue GD_AFFINE_SHEAR_HORIZONTAL
 */
const IMG_AFFINE_SHEAR_HORIZONTAL = UNKNOWN;
/**
 * @var int
 * @cvalue GD_AFFINE_SHEAR_VERTICAL
 */
const IMG_AFFINE_SHEAR_VERTICAL = UNKNOWN;

/**
 * @var int
 * @cvalue GD_BUNDLED
 */
const GD_BUNDLED = UNKNOWN;

/* Section Filters */

/**
 * @var int
 * @cvalue IMAGE_FILTER_NEGATE
 */
const IMG_FILTER_NEGATE = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_GRAYSCALE
 */
const IMG_FILTER_GRAYSCALE = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_BRIGHTNESS
 */
const IMG_FILTER_BRIGHTNESS = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_CONTRAST
 */
const IMG_FILTER_CONTRAST = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_COLORIZE
 */
const IMG_FILTER_COLORIZE = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_EDGEDETECT
 */
const IMG_FILTER_EDGEDETECT = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_GAUSSIAN_BLUR
 */
const IMG_FILTER_GAUSSIAN_BLUR = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_SELECTIVE_BLUR
 */
const IMG_FILTER_SELECTIVE_BLUR = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_EMBOSS
 */
const IMG_FILTER_EMBOSS = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_MEAN_REMOVAL
 */
const IMG_FILTER_MEAN_REMOVAL = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_SMOOTH
 */
const IMG_FILTER_SMOOTH = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_PIXELATE
 */
const IMG_FILTER_PIXELATE = UNKNOWN;
/**
 * @var int
 * @cvalue IMAGE_FILTER_SCATTER
 */
const IMG_FILTER_SCATTER = UNKNOWN;

#ifdef GD_VERSION_STRING
/**
 * @var string
 * @cvalue GD_VERSION_STRING
 */
const GD_VERSION = UNKNOWN;
#endif

#if (defined(GD_MAJOR_VERSION) && defined(GD_MINOR_VERSION) && defined(GD_RELEASE_VERSION) && defined(GD_EXTRA_VERSION))
/**
 * @var int
 * @cvalue GD_MAJOR_VERSION
 */
const GD_MAJOR_VERSION = UNKNOWN;
/**
 * @var int
 * @cvalue GD_MINOR_VERSION
 */
const GD_MINOR_VERSION = UNKNOWN;
/**
 * @var int
 * @cvalue GD_RELEASE_VERSION
 */
const GD_RELEASE_VERSION = UNKNOWN;
/**
 * @var string
 * @cvalue GD_EXTRA_VERSION
 */
const GD_EXTRA_VERSION = UNKNOWN;
#endif

#ifdef HAVE_GD_PNG
/*
 * cannot include #include "png.h"
 * /usr/include/pngconf.h:310:2: error: #error png.h already includes setjmp.h with some additional fixup.
 * as error, use the values for now...
 */
const PNG_NO_FILTER = 0x00;
const PNG_FILTER_NONE = 0x08;
const PNG_FILTER_SUB = 0x10;
const PNG_FILTER_UP = 0x20;
const PNG_FILTER_AVG = 0x40;
const PNG_FILTER_PAETH = 0x80;
/** @var int */
const PNG_ALL_FILTERS = 0x08 | 0x10 | 0x20 | 0x40 | 0x80;
#endif

/**
 * @strict-properties
 * @not-serializable
 */
final class GdImage {}

/**
 * @strict-properties
 * @not-serializable
 */
final class GdFont {}

/** @genstubs-expose-comment-block
 * Retrieve information about the currently installed GD library
 * @return array
 */
/**
 * @return array<string, string|bool>
 * @refcount 1
 */
function gd_info(): array {}

/** @genstubs-expose-comment-block
 * Load a new font
 * @param string $filename The font file format is currently binary and architecture dependent.  This means you should generate the font files on the same type of CPU as the machine you are running PHP on.
 * @return GdFont|false
 */
function imageloadfont(string $filename): GdFont|false {}

/** @genstubs-expose-comment-block
 * Set the style for line drawing
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param array $style An array of pixel colors. You can use the IMG_COLOR_TRANSPARENT constant to add a transparent pixel. Note that style must not be an empty array.
 * @return bool
 */
function imagesetstyle(GdImage $image, array $style): bool {}

/** @genstubs-expose-comment-block
 * Create a new true color image
 * @param int $width Image width.
 * @param int $height Image height.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatetruecolor(int $width, int $height): GdImage|false {}

/** @genstubs-expose-comment-block
 * Finds whether an image is a truecolor image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return bool
 */
function imageistruecolor(GdImage $image): bool {}

/** @genstubs-expose-comment-block
 * Convert a true color image to a palette image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param bool $dither Indicates if the image should be dithered - if it is true then dithering will be used which will result in a more speckled image but with better color approximation.
 * @param int $num_colors Sets the maximum number of colors that should be retained in the palette.
 * @return bool
 */
function imagetruecolortopalette(GdImage $image, bool $dither, int $num_colors): bool {}

/** @genstubs-expose-comment-block
 * Converts a palette based image to true color
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return bool
 */
function imagepalettetotruecolor(GdImage $image): bool {}

/** @genstubs-expose-comment-block
 * Makes the colors of the palette version of an image more closely match the true color version
 * @param GdImage $image1 A truecolor image object.
 * @param GdImage $image2 A palette image object pointing to an image that has the same size as image1.
 * @return bool
 */
function imagecolormatch(GdImage $image1, GdImage $image2): true {}

/** @genstubs-expose-comment-block
 * Set the thickness for line drawing
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $thickness Thickness, in pixels.
 * @return bool
 */
function imagesetthickness(GdImage $image, int $thickness): true {}

/** @genstubs-expose-comment-block
 * Draw a filled ellipse
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $center_x x-coordinate of the center.
 * @param int $center_y y-coordinate of the center.
 * @param int $width The ellipse width.
 * @param int $height The ellipse height.
 * @param int $color The fill color. gd.identifier.color
 * @return bool
 */
function imagefilledellipse(GdImage $image, int $center_x, int $center_y, int $width, int $height, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a partial arc and fill it
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $center_x x-coordinate of the center.
 * @param int $center_y y-coordinate of the center.
 * @param int $width The arc width.
 * @param int $height The arc height.
 * @param int $start_angle The arc start angle, in degrees.
 * @param int $end_angle The arc end angle, in degrees. 0° is located at the three-o'clock position, and the arc is drawn clockwise.
 * @param int $color gd.identifier.color
 * @param int $style A bitwise OR of the following possibilities: IMG_ARC_PIE IMG_ARC_CHORD IMG_ARC_NOFILL IMG_ARC_EDGED IMG_ARC_PIE and IMG_ARC_CHORD are mutually exclusive; IMG_ARC_CHORD just connects the starting and ending angles with a straight line, while IMG_ARC_PIE produces a rounded edge. IMG_ARC_NOFILL indicates that the arc or chord should be outlined, not filled.  IMG_ARC_EDGED, used together with IMG_ARC_NOFILL, indicates that the beginning and ending angles should be connected to the center - this is a good way to outline (rather than fill) a 'pie slice'.
 * @return bool
 */
function imagefilledarc(GdImage $image, int $center_x, int $center_y, int $width, int $height, int $start_angle, int $end_angle, int $color, int $style): true {}

/** @genstubs-expose-comment-block
 * Set the blending mode for an image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param bool $enable Whether to enable the blending mode or not. On true color images the default value is true otherwise the default value is false
 * @return bool
 */
function imagealphablending(GdImage $image, bool $enable): true {}

/** @genstubs-expose-comment-block
 * Whether to retain full alpha channel information when saving images
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param bool $enable Whether to save the alpha channel or not. Defaults to false.
 * @return bool
 */
function imagesavealpha(GdImage $image, bool $enable): true {}

/** @genstubs-expose-comment-block
 * Set the alpha blending flag to use layering effects
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $effect One of the following constants: IMG_EFFECT_REPLACE Use pixel replacement (equivalent of passing true to imagealphablending) IMG_EFFECT_ALPHABLEND Use normal pixel blending (equivalent of passing false to imagealphablending) IMG_EFFECT_NORMAL Same as IMG_EFFECT_ALPHABLEND. IMG_EFFECT_OVERLAY Overlay has the effect that black background pixels will remain black, white background pixels will remain white, but grey background pixels will take the colour of the foreground pixel. IMG_EFFECT_MULTIPLY Overlays with a multiply effect.
 * @return bool
 */
function imagelayereffect(GdImage $image, int $effect): true {}

/** @genstubs-expose-comment-block
 * Allocate a color for an image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.
 * @return int|false
 */
function imagecolorallocatealpha(GdImage $image, int $red, int $green, int $blue, int $alpha): int|false {}

/** @genstubs-expose-comment-block
 * Get the index of the specified color + alpha or its closest possible alternative
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.
 * @return int
 */
function imagecolorresolvealpha(GdImage $image, int $red, int $green, int $blue, int $alpha): int {}

/** @genstubs-expose-comment-block
 * Get the index of the closest color to the specified color + alpha
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.
 * @return int
 */
function imagecolorclosestalpha(GdImage $image, int $red, int $green, int $blue, int $alpha): int {}

/** @genstubs-expose-comment-block
 * Get the index of the specified color + alpha
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.
 * @return int
 */
function imagecolorexactalpha(GdImage $image, int $red, int $green, int $blue, int $alpha): int {}

/** @genstubs-expose-comment-block
 * Copy and resize part of an image with resampling
 * @param GdImage $dst_image Destination image resource.
 * @param GdImage $src_image Source image resource.
 * @param int $dst_x x-coordinate of destination point.
 * @param int $dst_y y-coordinate of destination point.
 * @param int $src_x x-coordinate of source point.
 * @param int $src_y y-coordinate of source point.
 * @param int $dst_width Destination width.
 * @param int $dst_height Destination height.
 * @param int $src_width Source width.
 * @param int $src_height Source height.
 * @return bool
 */
function imagecopyresampled(GdImage $dst_image, GdImage $src_image, int $dst_x, int $dst_y, int $src_x, int $src_y, int $dst_width, int $dst_height, int $src_width, int $src_height): true {}

#ifdef PHP_WIN32

/** @genstubs-expose-comment-block
 * Captures a window
 * @param int $handle The HWND window ID.
 * @param bool $client_area Include the client area of the application window.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagegrabwindow(int $handle, bool $client_area = false): GdImage|false {}

/** @genstubs-expose-comment-block
 * Captures the whole screen
 * @return GdImage|false
 */
/** @refcount 1 */
function imagegrabscreen(): GdImage|false {}

#endif

/** @genstubs-expose-comment-block
 * Rotate an image with a given angle
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param float $angle Rotation angle, in degrees. The rotation angle is interpreted as the number of degrees to rotate the image anticlockwise.
 * @param int $background_color Specifies the color of the uncovered zone after the rotation
 * @return GdImage|false
 */
/** @refcount 1 */
function imagerotate(GdImage $image, float $angle, int $background_color): GdImage|false {}

/** @genstubs-expose-comment-block
 * Set the tile image for filling
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdImage $tile The image object to be used as a tile.
 * @return bool
 */
function imagesettile(GdImage $image, GdImage $tile): true {}

/** @genstubs-expose-comment-block
 * Set the brush image for line drawing
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdImage $brush An image object.
 * @return bool
 */
function imagesetbrush(GdImage $image, GdImage $brush): true {}

/** @genstubs-expose-comment-block
 * Create a new palette based image
 * @param int $width The image width.
 * @param int $height The image height.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreate(int $width, int $height): GdImage|false {}

/** @genstubs-expose-comment-block
 * Return the image types supported by this PHP build
 * @return int
 */
/** @compile-time-eval */
function imagetypes(): int {}

/** @genstubs-expose-comment-block
 * Create a new image from the image stream in the string
 * @param string $data A string containing the image data.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromstring(string $data): GdImage|false {}

#ifdef HAVE_GD_AVIF
/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the AVIF raster image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromavif(string $filename): GdImage|false {}
#endif

/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the GIF image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromgif(string $filename): GdImage|false {}

#ifdef HAVE_GD_JPG
/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the JPEG image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromjpeg(string $filename): GdImage|false {}
#endif

#ifdef HAVE_GD_PNG
/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the PNG image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefrompng(string $filename): GdImage|false {}
#endif

#ifdef HAVE_GD_WEBP
/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the WebP image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromwebp(string $filename): GdImage|false {}
#endif

/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the XBM image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromxbm(string $filename): GdImage|false {}

#ifdef HAVE_GD_XPM
/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the XPM image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromxpm(string $filename): GdImage|false {}
#endif

/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the WBMP image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromwbmp(string $filename): GdImage|false {}

/** @genstubs-expose-comment-block
 * Create a new image from GD file or URL
 * @param string $filename Path to the GD file.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromgd(string $filename): GdImage|false {}

/** @genstubs-expose-comment-block
 * Create a new image from GD2 file or URL
 * @param string $filename Path to the GD2 image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromgd2(string $filename): GdImage|false {}

/** @genstubs-expose-comment-block
 * Create a new image from a given part of GD2 file or URL
 * @param string $filename Path to the GD2 image.
 * @param int $x x-coordinate of source point.
 * @param int $y y-coordinate of source point.
 * @param int $width Source width.
 * @param int $height Source height.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefromgd2part(string $filename, int $x, int $y, int $width, int $height): GdImage|false {}

/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the BMP image.
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecreatefrombmp(string $filename): GdImage|false {}

/** @genstubs-expose-comment-block
 * Create a new image from file or URL
 * @param string $filename Path to the Truevision TGA image.
 * @return GdImage|false
 */
function imagecreatefromtga(string $filename): GdImage|false {}

/** @genstubs-expose-comment-block
 * Output an XBM image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param string|null $filename The path to save the file to, given as string. If null, the raw image stream will be output directly.
 * @param int|null $foreground_color You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black. All other colors are treated as background.
 * @return bool
 */
function imagexbm(GdImage $image, ?string $filename, ?int $foreground_color = null): bool {}

#ifdef HAVE_GD_AVIF
/** @genstubs-expose-comment-block
 * Output image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int $quality quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, larger file). If -1 is provided, the default value 52 is used.
 * @param int $speed speed is optional, and ranges from 0 (slow, smaller file) to 10 (fast, larger file). If -1 is provided, the default value 6 is used.
 * @return bool
 */
/** @param resource|string|null $file */
function imageavif(GdImage $image, $file = null, int $quality = -1, int $speed = -1): bool {}
#endif

/** @genstubs-expose-comment-block
 * Output image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @return bool
 */
/** @param resource|string|null $file */
function imagegif(GdImage $image, $file = null): bool {}

#ifdef HAVE_GD_PNG
/** @genstubs-expose-comment-block
 * Output a PNG image to either the browser or a file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int $quality Compression level: from 0 (no compression) to 9. The default (-1) uses the zlib compression default. For more information see the zlib manual.
 * @param int $filters Allows reducing the PNG file size. It is a bitmask field which may be set to any combination of the PNG_FILTER_* constants. PNG_NO_FILTER or PNG_ALL_FILTERS may also be used to respectively disable or activate all filters. The default value (-1) disables filtering.
 * @return bool
 */
/** @param resource|string|null $file */
function imagepng(GdImage $image, $file = null, int $quality = -1, int $filters = -1): bool {}
#endif

#ifdef HAVE_GD_WEBP
/** @genstubs-expose-comment-block
 * Output a WebP image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int $quality quality ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). If -1 is provided, the default value 80 is used.
 * @return bool
 */
/** @param resource|string|null $file */
function imagewebp(GdImage $image, $file = null, int $quality = -1): bool {}
#endif

#ifdef HAVE_GD_JPG
/** @genstubs-expose-comment-block
 * Output image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int $quality quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). The default (-1) uses the default IJG quality value (about 75).
 * @return bool
 */
/** @param resource|string|null $file */
function imagejpeg(GdImage $image, $file = null, int $quality = -1): bool {}
#endif

/** @genstubs-expose-comment-block
 * Output image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int|null $foreground_color You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black.
 * @return bool
 */
/** @param resource|string|null $file */
function imagewbmp(GdImage $image, $file = null, ?int $foreground_color = null): bool {}

/** @genstubs-expose-comment-block
 * Output GD image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @return bool
 */
function imagegd(GdImage $image, ?string $file = null): bool {}

/** @genstubs-expose-comment-block
 * Output GD2 image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param int $chunk_size Chunk size.
 * @param int $mode Either IMG_GD2_RAW or IMG_GD2_COMPRESSED. Default is IMG_GD2_RAW.
 * @return bool
 */
function imagegd2(GdImage $image, ?string $file = null, int $chunk_size = 128, int $mode = IMG_GD2_RAW): bool {}

/** @genstubs-expose-comment-block
 * Output a BMP image to browser or file
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.
 * @param bool $compressed Whether the BMP should be compressed with run-length encoding (RLE), or not.
 * @return bool
 */
/** @param resource|string|null $file */
function imagebmp(GdImage $image, $file = null, bool $compressed = true): bool {}

#[\Deprecated(since: '8.5', message: "as it has no effect since PHP 8.0")]
/** @genstubs-expose-comment-block
 * Destroy an image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return bool
 */
function imagedestroy(GdImage $image): true {}

/** @genstubs-expose-comment-block
 * Allocate a color for an image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @return int|false
 */
function imagecolorallocate(GdImage $image, int $red, int $green, int $blue): int|false {}

/** @genstubs-expose-comment-block
 * Copy the palette from one image to another
 * @param GdImage $dst The destination image object.
 * @param GdImage $src The source image object.
 * @return void
 */
function imagepalettecopy(GdImage $dst, GdImage $src): void {}

/** @genstubs-expose-comment-block
 * Get the index of the color of a pixel
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x x-coordinate of the point.
 * @param int $y y-coordinate of the point.
 * @return int|false
 */
function imagecolorat(GdImage $image, int $x, int $y): int|false {}

/** @genstubs-expose-comment-block
 * Get the index of the closest color to the specified color
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @return int
 */
function imagecolorclosest(GdImage $image, int $red, int $green, int $blue): int {}

/** @genstubs-expose-comment-block
 * Get the index of the color which has the hue, white and blackness
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @return int
 */
function imagecolorclosesthwb(GdImage $image, int $red, int $green, int $blue): int {}

/** @genstubs-expose-comment-block
 * De-allocate a color for an image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $color The color identifier.
 * @return bool
 */
function imagecolordeallocate(GdImage $image, int $color): true {}

/** @genstubs-expose-comment-block
 * Get the index of the specified color or its closest possible alternative
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @return int
 */
function imagecolorresolve(GdImage $image, int $red, int $green, int $blue): int {}

/** @genstubs-expose-comment-block
 * Get the index of the specified color
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @return int
 */
function imagecolorexact(GdImage $image, int $red, int $green, int $blue): int {}

/** @genstubs-expose-comment-block
 * Set the color for the specified palette index
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $color An index in the palette.
 * @param int $red Value of red component.
 * @param int $green Value of green component.
 * @param int $blue Value of blue component.
 * @param int $alpha Value of alpha component.
 * @return false|null
 */
function imagecolorset(GdImage $image, int $color, int $red, int $green, int $blue, int $alpha = 0): false|null {}

/** @genstubs-expose-comment-block
 * Get the colors for an index
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $color The color index.
 * @return array
 */
/**
 * @return array<string, int>
 * @refcount 1
 */
function imagecolorsforindex(GdImage $image, int $color): array {}

/** @genstubs-expose-comment-block
 * Apply a gamma correction to a GD image
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param float $input_gamma The input gamma.
 * @param float $output_gamma The output gamma.
 * @return bool
 */
function imagegammacorrect(GdImage $image, float $input_gamma, float $output_gamma): true {}

/** @genstubs-expose-comment-block
 * Set a single pixel
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x x-coordinate.
 * @param int $y y-coordinate.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagesetpixel(GdImage $image, int $x, int $y, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a line
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x1 x-coordinate for first point.
 * @param int $y1 y-coordinate for first point.
 * @param int $x2 x-coordinate for second point.
 * @param int $y2 y-coordinate for second point.
 * @param int $color The line color. gd.identifier.color
 * @return bool
 */
function imageline(GdImage $image, int $x1, int $y1, int $x2, int $y2, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a dashed line
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x1 Upper left x coordinate.
 * @param int $y1 Upper left y coordinate 0, 0 is the top left corner of the image.
 * @param int $x2 Bottom right x coordinate.
 * @param int $y2 Bottom right y coordinate.
 * @param int $color The fill color. gd.identifier.color
 * @return bool
 */
function imagedashedline(GdImage $image, int $x1, int $y1, int $x2, int $y2, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a rectangle
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x1 Upper left x coordinate.
 * @param int $y1 Upper left y coordinate 0, 0 is the top left corner of the image.
 * @param int $x2 Bottom right x coordinate.
 * @param int $y2 Bottom right y coordinate.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagerectangle(GdImage $image, int $x1, int $y1, int $x2, int $y2, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a filled rectangle
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x1 x-coordinate for point 1.
 * @param int $y1 y-coordinate for point 1.
 * @param int $x2 x-coordinate for point 2.
 * @param int $y2 y-coordinate for point 2.
 * @param int $color The fill color. gd.identifier.color
 * @return bool
 */
function imagefilledrectangle(GdImage $image, int $x1, int $y1, int $x2, int $y2, int $color): true {}

/** @genstubs-expose-comment-block
 * Draws an arc
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $center_x x-coordinate of the center.
 * @param int $center_y y-coordinate of the center.
 * @param int $width The arc width.
 * @param int $height The arc height.
 * @param int $start_angle The arc start angle, in degrees.
 * @param int $end_angle The arc end angle, in degrees. 0° is located at the three-o'clock position, and the arc is drawn clockwise.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagearc(GdImage $image, int $center_x, int $center_y, int $width, int $height, int $start_angle, int $end_angle, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw an ellipse
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $center_x x-coordinate of the center.
 * @param int $center_y y-coordinate of the center.
 * @param int $width The ellipse width.
 * @param int $height The ellipse height.
 * @param int $color The color of the ellipse. gd.identifier.color
 * @return bool
 */
function imageellipse(GdImage $image, int $center_x, int $center_y, int $width, int $height, int $color): true {}

/** @genstubs-expose-comment-block
 * Flood fill to specific color
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x x-coordinate of start.
 * @param int $y y-coordinate of start.
 * @param int $border_color The border color. gd.identifier.color
 * @param int $color The fill color. gd.identifier.color
 * @return bool
 */
function imagefilltoborder(GdImage $image, int $x, int $y, int $border_color, int $color): true {}

/** @genstubs-expose-comment-block
 * Flood fill
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $x x-coordinate of start point.
 * @param int $y y-coordinate of start point.
 * @param int $color The fill color. gd.identifier.color
 * @return bool
 */
function imagefill(GdImage $image, int $x, int $y, int $color): true {}

/** @genstubs-expose-comment-block
 * Find out the number of colors in an image's palette
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return int
 */
function imagecolorstotal(GdImage $image): int {}

/** @genstubs-expose-comment-block
 * Define a color as transparent
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int|null $color gd.identifier.color
 * @return int
 */
function imagecolortransparent(GdImage $image, ?int $color = null): int {}

/** @genstubs-expose-comment-block
 * Enable or disable interlace
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param bool|null $enable If true, the image will be interlaced, if false the interlace bit is turned off. Passing null will result in the interlacing behavior not being changed.
 * @return bool
 */
function imageinterlace(GdImage $image, ?bool $enable = null): bool {}

/** @genstubs-expose-comment-block
 * Draws a polygon
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param array $points An array containing the polygon's vertices, e.g.: points[0] = x0 points[1] = y0 points[2] = x1 points[3] = y1
 * @param int $num_points Total number of points (vertices), which must be at least 3.
 * @param int $color gd.identifier.color
 * @return bool|bool
 */
function imagepolygon(GdImage $image, array $points, int $num_points_or_color, ?int $color = null): bool {}

/** @genstubs-expose-comment-block
 * Draws an open polygon
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param array $points An array containing the polygon's vertices, e.g.: points[0] = x0 points[1] = y0 points[2] = x1 points[3] = y1
 * @param int $num_points Total number of points (vertices), which must be at least 3.
 * @param int $color gd.identifier.color
 * @return bool|bool
 */
function imageopenpolygon(GdImage $image, array $points, int $num_points_or_color, ?int $color = null): bool {}

/** @genstubs-expose-comment-block
 * Draw a filled polygon
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param array $points An array containing the x and y coordinates of the polygons vertices consecutively.
 * @param int $num_points Total number of points (vertices), which must be at least 3.
 * @param int $color gd.identifier.color
 * @return bool|bool
 */
function imagefilledpolygon(GdImage $image, array $points, int $num_points_or_color, ?int $color = null): bool {}

/** @genstubs-expose-comment-block
 * Get font width
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @return int
 */
function imagefontwidth(GdFont|int $font): int {}

/** @genstubs-expose-comment-block
 * Get font height
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @return int
 */
function imagefontheight(GdFont|int $font): int {}

/** @genstubs-expose-comment-block
 * Draw a character horizontally
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @param int $x x-coordinate of the start.
 * @param int $y y-coordinate of the start.
 * @param string $char The character to draw.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagechar(GdImage $image, GdFont|int $font, int $x, int $y, string $char, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a character vertically
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @param int $x x-coordinate of the start.
 * @param int $y y-coordinate of the start.
 * @param string $char The character to draw.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagecharup(GdImage $image, GdFont|int $font, int $x, int $y, string $char, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a string horizontally
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @param int $x x-coordinate of the upper left corner.
 * @param int $y y-coordinate of the upper left corner.
 * @param string $string The string to be written.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagestring(GdImage $image, GdFont|int $font, int $x, int $y, string $string, int $color): true {}

/** @genstubs-expose-comment-block
 * Draw a string vertically
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.
 * @param int $x x-coordinate of the bottom left corner.
 * @param int $y y-coordinate of the bottom left corner.
 * @param string $string The string to be written.
 * @param int $color gd.identifier.color
 * @return bool
 */
function imagestringup(GdImage $image, GdFont|int $font, int $x, int $y, string $string, int $color): true {}

/** @genstubs-expose-comment-block
 * Copy part of an image
 * @param GdImage $dst_image Destination image resource.
 * @param GdImage $src_image Source image resource.
 * @param int $dst_x x-coordinate of destination point.
 * @param int $dst_y y-coordinate of destination point.
 * @param int $src_x x-coordinate of source point.
 * @param int $src_y y-coordinate of source point.
 * @param int $src_width Source width.
 * @param int $src_height Source height.
 * @return bool
 */
function imagecopy(GdImage $dst_image, GdImage $src_image, int $dst_x, int $dst_y, int $src_x, int $src_y, int $src_width, int $src_height): true {}

/** @genstubs-expose-comment-block
 * Copy and merge part of an image
 * @param GdImage $dst_image Destination image resource.
 * @param GdImage $src_image Source image resource.
 * @param int $dst_x x-coordinate of destination point.
 * @param int $dst_y y-coordinate of destination point.
 * @param int $src_x x-coordinate of source point.
 * @param int $src_y y-coordinate of source point.
 * @param int $src_width Source width.
 * @param int $src_height Source height.
 * @param int $pct The two images will be merged according to pct which can range from 0 to 100.  When pct = 0, no action is taken, when 100 this function behaves identically to imagecopy for pallete images, except for ignoring alpha components, while it implements alpha transparency for true colour images.
 * @return bool
 */
function imagecopymerge(GdImage $dst_image, GdImage $src_image, int $dst_x, int $dst_y, int $src_x, int $src_y, int $src_width, int $src_height, int $pct): true {}

/** @genstubs-expose-comment-block
 * Copy and merge part of an image with gray scale
 * @param GdImage $dst_image Destination image resource.
 * @param GdImage $src_image Source image resource.
 * @param int $dst_x x-coordinate of destination point.
 * @param int $dst_y y-coordinate of destination point.
 * @param int $src_x x-coordinate of source point.
 * @param int $src_y y-coordinate of source point.
 * @param int $src_width Source width.
 * @param int $src_height Source height.
 * @param int $pct The src_image will be changed to grayscale according to pct where 0 is fully grayscale and 100 is unchanged. When pct = 100 this function behaves identically to imagecopy for pallete images, except for ignoring alpha components, while it implements alpha transparency for true colour images.
 * @return bool
 */
function imagecopymergegray(GdImage $dst_image, GdImage $src_image, int $dst_x, int $dst_y, int $src_x, int $src_y, int $src_width, int $src_height, int $pct): true {}

/** @genstubs-expose-comment-block
 * Copy and resize part of an image
 * @param GdImage $dst_image Destination image resource.
 * @param GdImage $src_image Source image resource.
 * @param int $dst_x x-coordinate of destination point.
 * @param int $dst_y y-coordinate of destination point.
 * @param int $src_x x-coordinate of source point.
 * @param int $src_y y-coordinate of source point.
 * @param int $dst_width Destination width.
 * @param int $dst_height Destination height.
 * @param int $src_width Source width.
 * @param int $src_height Source height.
 * @return bool
 */
function imagecopyresized(GdImage $dst_image, GdImage $src_image, int $dst_x, int $dst_y, int $src_x, int $src_y, int $dst_width, int $dst_height, int $src_width, int $src_height): true {}

/** @genstubs-expose-comment-block
 * Get image width
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return int
 */
function imagesx(GdImage $image): int {}

/** @genstubs-expose-comment-block
 * Get image height
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @return int
 */
function imagesy(GdImage $image): int {}

/** @genstubs-expose-comment-block
 * Set the clipping rectangle
 * @return bool
 */
function imagesetclip(GdImage $image, int $x1, int $y1, int $x2, int $y2): true {}

/** @genstubs-expose-comment-block
 * Get the clipping rectangle
 * @return array
 */
/**
 * @return array<int, int>
 * @refcount 1
 */
function imagegetclip(GdImage $image): array {}

#ifdef HAVE_GD_FREETYPE
/** @genstubs-expose-comment-block
 * Give the bounding box of a text using fonts via freetype2
 * @param float $size The font size in points.
 * @param float $angle Angle in degrees in which string will be measured.
 * @param string $font_filename The name of the TrueType font file (can be a URL). Depending on which version of the GD library that PHP is using, it may attempt to search for files that do not begin with a leading '' by appending '.ttf' to the filename and searching along a library-defined font path.
 * @param string $string The string to be measured.
 * @param array $options Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing
 * @return array|false
 */
/**
 * @return array<int, int>|false
 * @refcount 1
 */
function imageftbbox(float $size, float $angle, string $font_filename, string $string, array $options = []): array|false {}

/** @genstubs-expose-comment-block
 * Write text to the image using fonts using FreeType 2
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param float $size The font size to use in points.
 * @param float $angle The angle in degrees, with 0 degrees being left-to-right reading text. Higher values represent a counter-clockwise rotation. For example, a value of 90 would result in bottom-to-top reading text.
 * @param int $x The coordinates given by x and y will define the basepoint of the first character (roughly the lower-left corner of the character). This is different from the imagestring, where x and y define the upper-left corner of the first character. For example, "top left" is 0, 0.
 * @param int $y The y-ordinate. This sets the position of the fonts baseline, not the very bottom of the character.
 * @param int $color The index of the desired color for the text, see imagecolorexact.
 * @param string $font_filename The path to the TrueType font you wish to use.
 * @param string $text Text to be inserted into image.
 * @param array $options Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing
 * @return array|false
 */
/**
 * @return array<int, int>|false
 * @refcount 1
 */
function imagefttext(GdImage $image, float $size, float $angle, int $x, int $y, int $color, string $font_filename, string $text, array $options = []): array|false {}

/** @genstubs-expose-comment-block
 * Give the bounding box of a text using TrueType fonts
 * @param float $size The font size in points.
 * @param float $angle Angle in degrees in which string will be measured.
 * @param string $string The string to be measured.
 * @param array $options Same as in imagettftext.
 * @return array|false
 */
/**
 * @return array<int, int>|false
 * @alias imageftbbox
 */
function imagettfbbox(float $size, float $angle, string $font_filename, string $string, array $options = []): array|false {}

/** @genstubs-expose-comment-block
 * Write text to the image using TrueType fonts
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param float $size The font size in points.
 * @param float $angle The angle in degrees, with 0 degrees being left-to-right reading text. Higher values represent a counter-clockwise rotation. For example, a value of 90 would result in bottom-to-top reading text.
 * @param int $x The coordinates given by x and y will define the basepoint of the first character (roughly the lower-left corner of the character). This is different from the imagestring, where x and y define the upper-left corner of the first character. For example, "top left" is 0, 0.
 * @param int $y The y-ordinate. This sets the position of the fonts baseline, not the very bottom of the character.
 * @param int $color The color index. Using the negative of a color index has the effect of turning off antialiasing. See imagecolorallocate.
 * @param string $text The text string in UTF-8 encoding.
 * @param array $options An array with linespacing key holding a float value.
 * @return array|false
 */
/**
 * @return array<int, int>|false
 * @alias imagefttext
 */
function imagettftext(GdImage $image, float $size, float $angle, int $x, int $y, int $color, string $font_filename, string $text, array $options = []): array|false {}
#endif

/** @param array|int|float|bool $args */
function imagefilter(GdImage $image, int $filter, ...$args): bool {}

/** @genstubs-expose-comment-block
 * Apply a 3x3 convolution matrix, using coefficient and offset
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param array $matrix A 3x3 matrix: an array of three arrays of three floats.
 * @param float $divisor The divisor of the result of the convolution, used for normalization.
 * @param float $offset Color offset.
 * @return bool
 */
function imageconvolution(GdImage $image, array $matrix, float $divisor, float $offset): bool {}

/** @genstubs-expose-comment-block
 * Flips an image using a given mode
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $mode Flip mode, this can be one of the IMG_FLIP_* constants:
 * @return bool
 */
function imageflip(GdImage $image, int $mode): true {}

/** @genstubs-expose-comment-block
 * Should antialias functions be used or not
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param bool $enable Whether to enable antialiasing or not.
 * @return bool
 */
function imageantialias(GdImage $image, bool $enable): true {}

/** @genstubs-expose-comment-block
 * Crop an image to the given rectangle
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecrop(GdImage $image, array $rectangle): GdImage|false {}

/** @genstubs-expose-comment-block
 * Crop an image automatically using one of the available modes
 * @return GdImage|false
 */
/** @refcount 1 */
function imagecropauto(GdImage $image, int $mode = IMG_CROP_DEFAULT, float $threshold = 0.5, int $color = -1): GdImage|false {}

/** @genstubs-expose-comment-block
 * Scale an image using the given new width and height
 * @return GdImage|false
 */
/** @refcount 1 */
function imagescale(GdImage $image, int $width, int $height = -1, int $mode = IMG_BILINEAR_FIXED): GdImage|false {}

/** @genstubs-expose-comment-block
 * Return an image containing the affine transformed src image, using an optional clipping area
 * @return GdImage|false
 */
/** @refcount 1 */
function imageaffine(GdImage $image, array $affine, ?array $clip = null): GdImage|false {}

/** @genstubs-expose-comment-block
 * Get an affine transformation matrix
 * @return array|false
 */
/**
 * @param array|float $options
 * @refcount 1
 * @return array<int, float>|false
 */
function imageaffinematrixget(int $type, $options): array|false {}

/** @genstubs-expose-comment-block
 * Concatenate two affine transformation matrices
 * @return array|false
 */
/**
 * @return array<int, float>|false
 * @refcount 1
 */
function imageaffinematrixconcat(array $matrix1, array $matrix2): array|false {}

/** @genstubs-expose-comment-block
 * Get the interpolation method
 * @return int
 */
function imagegetinterpolation(GdImage $image): int {}

/** @genstubs-expose-comment-block
 * Set the interpolation method
 * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.
 * @param int $method The interpolation method, which can be one of the following: IMG_BELL: Bell filter. IMG_BESSEL: Bessel filter. IMG_BICUBIC: Bicubic interpolation. IMG_BICUBIC_FIXED: Fixed point implementation of the bicubic interpolation. IMG_BILINEAR_FIXED: Fixed point implementation of the  bilinear interpolation (default (also on image creation)). IMG_BLACKMAN: Blackman window function. IMG_BOX: Box blur filter. IMG_BSPLINE: Spline interpolation. IMG_CATMULLROM: Cubic Hermite spline interpolation. IMG_GAUSSIAN: Gaussian function. IMG_GENERALIZED_CUBIC: Generalized cubic spline fractal interpolation. IMG_HERMITE: Hermite interpolation. IMG_HAMMING: Hamming filter. IMG_HANNING: Hanning filter. IMG_MITCHELL: Mitchell filter. IMG_POWER: Power interpolation. IMG_QUADRATIC: Inverse quadratic interpolation. IMG_SINC: Sinc function. IMG_NEAREST_NEIGHBOUR: Nearest neighbour interpolation. IMG_WEIGHTED4: Weighting filter. IMG_TRIANGLE: Triangle interpolation.
 * @return bool
 */
function imagesetinterpolation(GdImage $image, int $method = IMG_BILINEAR_FIXED): bool {}

/** @genstubs-expose-comment-block
 * Get or set the resolution of the image
 * @return array|bool
 */
/**
 * @return array<int, int>|true
 * @refcount 1
 */
function imageresolution(GdImage $image, ?int $resolution_x = null, ?int $resolution_y = null): array|true {}
