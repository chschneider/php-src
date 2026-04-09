/* This is a generated file, edit gd.stub.php instead.
 * Stub hash: 2bb63b6e9294629b3b3c0b1951fc4d347be84889 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_gd_info, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imageloadfont, 0, 1, GdFont, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "The font file format is currently binary and architecture dependent.  This means you should generate the font files on the same type of CPU as the machine you are running PHP on.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetstyle, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, style, IS_ARRAY, 0, "An array of pixel colors. You can use the IMG_COLOR_TRANSPARENT constant to add a transparent pixel. Note that style must not be an empty array.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatetruecolor, 0, 2, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "Image width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, height, IS_LONG, 0, "Image height.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageistruecolor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagetruecolortopalette, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dither, _IS_BOOL, 0, "Indicates if the image should be dithered - if it is true then dithering will be used which will result in a more speckled image but with better color approximation.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, num_colors, IS_LONG, 0, "Sets the maximum number of colors that should be retained in the palette.")
ZEND_END_ARG_INFO()

#define arginfo_imagepalettetotruecolor arginfo_imageistruecolor

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolormatch, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image1, GdImage, 0, "A truecolor image object.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image2, GdImage, 0, "A palette image object pointing to an image that has the same size as image1.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetthickness, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, thickness, IS_LONG, 0, "Thickness, in pixels.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagefilledellipse, 0, 6, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_x, IS_LONG, 0, "x-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_y, IS_LONG, 0, "y-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "The ellipse width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, height, IS_LONG, 0, "The ellipse height.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The fill color. gd.identifier.color")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagefilledarc, 0, 9, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_x, IS_LONG, 0, "x-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_y, IS_LONG, 0, "y-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "The arc width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, height, IS_LONG, 0, "The arc height.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start_angle, IS_LONG, 0, "The arc start angle, in degrees.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, end_angle, IS_LONG, 0, "The arc end angle, in degrees. 0\u00b0 is located at the three-o'clock position, and the arc is drawn clockwise.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "gd.identifier.color")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, style, IS_LONG, 0, "A bitwise OR of the following possibilities: IMG_ARC_PIE IMG_ARC_CHORD IMG_ARC_NOFILL IMG_ARC_EDGED IMG_ARC_PIE and IMG_ARC_CHORD are mutually exclusive; IMG_ARC_CHORD just connects the starting and ending angles with a straight line, while IMG_ARC_PIE produces a rounded edge. IMG_ARC_NOFILL indicates that the arc or chord should be outlined, not filled.  IMG_ARC_EDGED, used together with IMG_ARC_NOFILL, indicates that the beginning and ending angles should be connected to the center - this is a good way to outline (rather than fill) a 'pie slice'.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagealphablending, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, enable, _IS_BOOL, 0, "Whether to enable the blending mode or not. On true color images the default value is true otherwise the default value is false")
ZEND_END_ARG_INFO()

#define arginfo_imagesavealpha arginfo_imagealphablending

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagelayereffect, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, effect, IS_LONG, 0, "One of the following constants: IMG_EFFECT_REPLACE Use pixel replacement (equivalent of passing true to imagealphablending) IMG_EFFECT_ALPHABLEND Use normal pixel blending (equivalent of passing false to imagealphablending) IMG_EFFECT_NORMAL Same as IMG_EFFECT_ALPHABLEND. IMG_EFFECT_OVERLAY Overlay has the effect that black background pixels will remain black, white background pixels will remain white, but grey background pixels will take the colour of the foreground pixel. IMG_EFFECT_MULTIPLY Overlays with a multiply effect.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imagecolorallocatealpha, 0, 5, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, red, IS_LONG, 0, "Value of red component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, green, IS_LONG, 0, "Value of green component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, blue, IS_LONG, 0, "Value of blue component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, alpha, IS_LONG, 0, "A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolorresolvealpha, 0, 5, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, red, IS_LONG, 0, "Value of red component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, green, IS_LONG, 0, "Value of green component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, blue, IS_LONG, 0, "Value of blue component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, alpha, IS_LONG, 0, "A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.")
ZEND_END_ARG_INFO()

#define arginfo_imagecolorclosestalpha arginfo_imagecolorresolvealpha

#define arginfo_imagecolorexactalpha arginfo_imagecolorresolvealpha

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecopyresampled, 0, 10, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, dst_image, GdImage, 0, "Destination image resource.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, src_image, GdImage, 0, "Source image resource.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_x, IS_LONG, 0, "x-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_y, IS_LONG, 0, "y-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_x, IS_LONG, 0, "x-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_y, IS_LONG, 0, "y-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_width, IS_LONG, 0, "Destination width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_height, IS_LONG, 0, "Destination height.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_width, IS_LONG, 0, "Source width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_height, IS_LONG, 0, "Source height.")
ZEND_END_ARG_INFO()

#if defined(PHP_WIN32)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagegrabwindow, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, handle, IS_LONG, 0, "The HWND window ID.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, client_area, _IS_BOOL, 0, "false", "Include the client area of the application window.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagegrabscreen, 0, 0, GdImage, MAY_BE_FALSE)
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagerotate, 0, 3, GdImage, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, angle, IS_DOUBLE, 0, "Rotation angle, in degrees. The rotation angle is interpreted as the number of degrees to rotate the image anticlockwise.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, background_color, IS_LONG, 0, "Specifies the color of the uncovered zone after the rotation")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesettile, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, tile, GdImage, 0, "The image object to be used as a tile.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetbrush, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, brush, GdImage, 0, "An image object.")
ZEND_END_ARG_INFO()

#define arginfo_imagecreate arginfo_imagecreatetruecolor

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagetypes, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromstring, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, data, IS_STRING, 0, "A string containing the image data.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GD_AVIF)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromavif, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the AVIF raster image.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromgif, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the GIF image.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GD_JPG)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromjpeg, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the JPEG image.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GD_PNG)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefrompng, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the PNG image.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GD_WEBP)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromwebp, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the WebP image.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_imagecreatefromxbm arginfo_imagecreatefromgif

#if defined(HAVE_GD_XPM)
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromxpm, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the XPM image.")
ZEND_END_ARG_INFO()
#endif

#define arginfo_imagecreatefromwbmp arginfo_imagecreatefromgif

#define arginfo_imagecreatefromgd arginfo_imagecreatefromgif

#define arginfo_imagecreatefromgd2 arginfo_imagecreatefromgif

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecreatefromgd2part, 0, 5, GdImage, MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 0, "Path to the GD2 image.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "Source width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, height, IS_LONG, 0, "Source height.")
ZEND_END_ARG_INFO()

#define arginfo_imagecreatefrombmp arginfo_imagecreatefromgif

#define arginfo_imagecreatefromtga arginfo_imagecreatefromgif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagexbm, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, filename, IS_STRING, 1, "The path to save the file to, given as string. If null, the raw image stream will be output directly.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, foreground_color, IS_LONG, 1, "null", "You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black. All other colors are treated as background.")
ZEND_END_ARG_INFO()

#if defined(HAVE_GD_AVIF)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageavif, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, quality, IS_LONG, 0, "-1", "quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, larger file). If -1 is provided, the default value 52 is used.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, speed, IS_LONG, 0, "-1", "speed is optional, and ranges from 0 (slow, smaller file) to 10 (fast, larger file). If -1 is provided, the default value 6 is used.")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagegif, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
ZEND_END_ARG_INFO()

#if defined(HAVE_GD_PNG)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagepng, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, quality, IS_LONG, 0, "-1", "Compression level: from 0 (no compression) to 9. The default (-1) uses the zlib compression default. For more information see the zlib manual.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, filters, IS_LONG, 0, "-1", "Allows reducing the PNG file size. It is a bitmask field which may be set to any combination of the PNG_FILTER_* constants. PNG_NO_FILTER or PNG_ALL_FILTERS may also be used to respectively disable or activate all filters. The default value (-1) disables filtering.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GD_WEBP)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagewebp, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, quality, IS_LONG, 0, "-1", "quality ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). If -1 is provided, the default value 80 is used.")
ZEND_END_ARG_INFO()
#endif

#if defined(HAVE_GD_JPG)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagejpeg, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, quality, IS_LONG, 0, "-1", "quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). The default (-1) uses the default IJG quality value (about 75).")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagewbmp, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, foreground_color, IS_LONG, 1, "null", "You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagegd, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, file, IS_STRING, 1, "null", "The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagegd2, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, file, IS_STRING, 1, "null", "The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, chunk_size, IS_LONG, 0, "128", "Chunk size.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, mode, IS_LONG, 0, "IMG_GD2_RAW", "Either IMG_GD2_RAW or IMG_GD2_COMPRESSED. Default is IMG_GD2_RAW.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagebmp, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, file, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, compressed, _IS_BOOL, 0, "true", "Whether the BMP should be compressed with run-length encoding (RLE), or not.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagedestroy, 0, 1, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imagecolorallocate, 0, 4, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, red, IS_LONG, 0, "Value of red component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, green, IS_LONG, 0, "Value of green component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, blue, IS_LONG, 0, "Value of blue component.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagepalettecopy, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, dst, GdImage, 0, "The destination image object.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, src, GdImage, 0, "The source image object.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imagecolorat, 0, 3, MAY_BE_LONG|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate of the point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate of the point.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolorclosest, 0, 4, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, red, IS_LONG, 0, "Value of red component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, green, IS_LONG, 0, "Value of green component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, blue, IS_LONG, 0, "Value of blue component.")
ZEND_END_ARG_INFO()

#define arginfo_imagecolorclosesthwb arginfo_imagecolorclosest

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolordeallocate, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The color identifier.")
ZEND_END_ARG_INFO()

#define arginfo_imagecolorresolve arginfo_imagecolorclosest

#define arginfo_imagecolorexact arginfo_imagecolorclosest

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolorset, 0, 5, IS_FALSE, 1)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "An index in the palette.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, red, IS_LONG, 0, "Value of red component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, green, IS_LONG, 0, "Value of green component.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, blue, IS_LONG, 0, "Value of blue component.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, alpha, IS_LONG, 0, "0", "Value of alpha component.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolorsforindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The color index.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagegammacorrect, 0, 3, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, input_gamma, IS_DOUBLE, 0, "The input gamma.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, output_gamma, IS_DOUBLE, 0, "The output gamma.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetpixel, 0, 4, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "gd.identifier.color")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageline, 0, 6, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x1, IS_LONG, 0, "x-coordinate for first point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y1, IS_LONG, 0, "y-coordinate for first point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x2, IS_LONG, 0, "x-coordinate for second point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y2, IS_LONG, 0, "y-coordinate for second point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The line color. gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imagedashedline arginfo_imageline

#define arginfo_imagerectangle arginfo_imageline

#define arginfo_imagefilledrectangle arginfo_imageline

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagearc, 0, 8, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_x, IS_LONG, 0, "x-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, center_y, IS_LONG, 0, "y-coordinate of the center.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, width, IS_LONG, 0, "The arc width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, height, IS_LONG, 0, "The arc height.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, start_angle, IS_LONG, 0, "The arc start angle, in degrees.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, end_angle, IS_LONG, 0, "The arc end angle, in degrees. 0\u00b0 is located at the three-o'clock position, and the arc is drawn clockwise.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imageellipse arginfo_imagefilledellipse

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagefilltoborder, 0, 5, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate of start.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate of start.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, border_color, IS_LONG, 0, "The border color. gd.identifier.color")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The fill color. gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imagefill arginfo_imagesetpixel

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolorstotal, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecolortransparent, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, color, IS_LONG, 1, "null", "gd.identifier.color")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageinterlace, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, enable, _IS_BOOL, 1, "null", "If true, the image will be interlaced, if false the interlace bit is turned off. Passing null will result in the interlacing behavior not being changed.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagepolygon, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, points, IS_ARRAY, 0, "An array containing the polygon's vertices, e.g.: points[0] = x0 points[1] = y0 points[2] = x1 points[3] = y1")
	ZEND_ARG_TYPE_INFO(0, num_points_or_color, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, color, IS_LONG, 1, "null", "gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imageopenpolygon arginfo_imagepolygon

#define arginfo_imagefilledpolygon arginfo_imagepolygon

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagefontwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, font, GdFont, MAY_BE_LONG, NULL, "Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.")
ZEND_END_ARG_INFO()

#define arginfo_imagefontheight arginfo_imagefontwidth

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagechar, 0, 6, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, font, GdFont, MAY_BE_LONG, NULL, "Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate of the start.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate of the start.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, char, IS_STRING, 0, "The character to draw.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imagecharup arginfo_imagechar

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagestring, 0, 6, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_OBJ_TYPE_MASK_DOCCOMMENT(0, font, GdFont, MAY_BE_LONG, NULL, "Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "x-coordinate of the upper left corner.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "y-coordinate of the upper left corner.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be written.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "gd.identifier.color")
ZEND_END_ARG_INFO()

#define arginfo_imagestringup arginfo_imagestring

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecopy, 0, 8, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, dst_image, GdImage, 0, "Destination image resource.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, src_image, GdImage, 0, "Source image resource.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_x, IS_LONG, 0, "x-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_y, IS_LONG, 0, "y-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_x, IS_LONG, 0, "x-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_y, IS_LONG, 0, "y-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_width, IS_LONG, 0, "Source width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_height, IS_LONG, 0, "Source height.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagecopymerge, 0, 9, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, dst_image, GdImage, 0, "Destination image resource.")
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, src_image, GdImage, 0, "Source image resource.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_x, IS_LONG, 0, "x-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, dst_y, IS_LONG, 0, "y-coordinate of destination point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_x, IS_LONG, 0, "x-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_y, IS_LONG, 0, "y-coordinate of source point.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_width, IS_LONG, 0, "Source width.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, src_height, IS_LONG, 0, "Source height.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, pct, IS_LONG, 0, "The two images will be merged according to pct which can range from 0 to 100.  When pct = 0, no action is taken, when 100 this function behaves identically to imagecopy for pallete images, except for ignoring alpha components, while it implements alpha transparency for true colour images.")
ZEND_END_ARG_INFO()

#define arginfo_imagecopymergegray arginfo_imagecopymerge

#define arginfo_imagecopyresized arginfo_imagecopyresampled

#define arginfo_imagesx arginfo_imagecolorstotal

#define arginfo_imagesy arginfo_imagecolorstotal

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetclip, 0, 5, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagegetclip, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
ZEND_END_ARG_INFO()

#if defined(HAVE_GD_FREETYPE)
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imageftbbox, 0, 4, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, size, IS_DOUBLE, 0, "The font size in points.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, angle, IS_DOUBLE, 0, "Angle in degrees in which string will be measured.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, font_filename, IS_STRING, 0, "The name of the TrueType font file (can be a URL). Depending on which version of the GD library that PHP is using, it may attempt to search for files that do not begin with a leading '/' by appending '.ttf' to the filename and searching along a library-defined font path.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, string, IS_STRING, 0, "The string to be measured.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imagefttext, 0, 8, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, size, IS_DOUBLE, 0, "The font size to use in points.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, angle, IS_DOUBLE, 0, "The angle in degrees, with 0 degrees being left-to-right reading text. Higher values represent a counter-clockwise rotation. For example, a value of 90 would result in bottom-to-top reading text.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, x, IS_LONG, 0, "The coordinates given by x and y will define the basepoint of the first character (roughly the lower-left corner of the character). This is different from the imagestring, where x and y define the upper-left corner of the first character. For example, \"top left\" is 0, 0.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, y, IS_LONG, 0, "The y-ordinate. This sets the position of the fonts baseline, not the very bottom of the character.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, color, IS_LONG, 0, "The index of the desired color for the text, see imagecolorexact.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, font_filename, IS_STRING, 0, "The path to the TrueType font you wish to use.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, text, IS_STRING, 0, "Text to be inserted into image.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, options, IS_ARRAY, 0, "[]", "Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing")
ZEND_END_ARG_INFO()

#define arginfo_imagettfbbox arginfo_imageftbbox

#define arginfo_imagettftext arginfo_imagefttext
#endif

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagefilter, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_LONG, 0)
	ZEND_ARG_VARIADIC_INFO(0, args)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageconvolution, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, matrix, IS_ARRAY, 0, "A 3x3 matrix: an array of three arrays of three floats.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, divisor, IS_DOUBLE, 0, "The divisor of the result of the convolution, used for normalization.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, offset, IS_DOUBLE, 0, "Color offset.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imageflip, 0, 2, IS_TRUE, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_DOCCOMMENT(0, mode, IS_LONG, 0, "Flip mode, this can be one of the IMG_FLIP_* constants:")
ZEND_END_ARG_INFO()

#define arginfo_imageantialias arginfo_imagealphablending

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecrop, 0, 2, GdImage, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO(0, rectangle, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagecropauto, 0, 1, GdImage, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "IMG_CROP_DEFAULT")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, threshold, IS_DOUBLE, 0, "0.5")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, color, IS_LONG, 0, "-1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imagescale, 0, 2, GdImage, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, height, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mode, IS_LONG, 0, "IMG_BILINEAR_FIXED")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_imageaffine, 0, 2, GdImage, MAY_BE_FALSE)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO(0, affine, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, clip, IS_ARRAY, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imageaffinematrixget, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imageaffinematrixconcat, 0, 2, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO(0, matrix1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, matrix2, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_imagegetinterpolation arginfo_imagecolorstotal

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_imagesetinterpolation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO_DOCCOMMENT(0, image, GdImage, 0, "A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE_DOCCOMMENT(0, method, IS_LONG, 0, "IMG_BILINEAR_FIXED", "The interpolation method, which can be one of the following: IMG_BELL: Bell filter. IMG_BESSEL: Bessel filter. IMG_BICUBIC: Bicubic interpolation. IMG_BICUBIC_FIXED: Fixed point implementation of the bicubic interpolation. IMG_BILINEAR_FIXED: Fixed point implementation of the  bilinear interpolation (default (also on image creation)). IMG_BLACKMAN: Blackman window function. IMG_BOX: Box blur filter. IMG_BSPLINE: Spline interpolation. IMG_CATMULLROM: Cubic Hermite spline interpolation. IMG_GAUSSIAN: Gaussian function. IMG_GENERALIZED_CUBIC: Generalized cubic spline fractal interpolation. IMG_HERMITE: Hermite interpolation. IMG_HAMMING: Hamming filter. IMG_HANNING: Hanning filter. IMG_MITCHELL: Mitchell filter. IMG_POWER: Power interpolation. IMG_QUADRATIC: Inverse quadratic interpolation. IMG_SINC: Sinc function. IMG_NEAREST_NEIGHBOUR: Nearest neighbour interpolation. IMG_WEIGHTED4: Weighting filter. IMG_TRIANGLE: Triangle interpolation.")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_imageresolution, 0, 1, MAY_BE_ARRAY|MAY_BE_TRUE)
	ZEND_ARG_OBJ_INFO(0, image, GdImage, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, resolution_x, IS_LONG, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, resolution_y, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_FUNCTION(gd_info);
ZEND_FUNCTION(imageloadfont);
ZEND_FUNCTION(imagesetstyle);
ZEND_FUNCTION(imagecreatetruecolor);
ZEND_FUNCTION(imageistruecolor);
ZEND_FUNCTION(imagetruecolortopalette);
ZEND_FUNCTION(imagepalettetotruecolor);
ZEND_FUNCTION(imagecolormatch);
ZEND_FUNCTION(imagesetthickness);
ZEND_FUNCTION(imagefilledellipse);
ZEND_FUNCTION(imagefilledarc);
ZEND_FUNCTION(imagealphablending);
ZEND_FUNCTION(imagesavealpha);
ZEND_FUNCTION(imagelayereffect);
ZEND_FUNCTION(imagecolorallocatealpha);
ZEND_FUNCTION(imagecolorresolvealpha);
ZEND_FUNCTION(imagecolorclosestalpha);
ZEND_FUNCTION(imagecolorexactalpha);
ZEND_FUNCTION(imagecopyresampled);
#if defined(PHP_WIN32)
ZEND_FUNCTION(imagegrabwindow);
ZEND_FUNCTION(imagegrabscreen);
#endif
ZEND_FUNCTION(imagerotate);
ZEND_FUNCTION(imagesettile);
ZEND_FUNCTION(imagesetbrush);
ZEND_FUNCTION(imagecreate);
ZEND_FUNCTION(imagetypes);
ZEND_FUNCTION(imagecreatefromstring);
#if defined(HAVE_GD_AVIF)
ZEND_FUNCTION(imagecreatefromavif);
#endif
ZEND_FUNCTION(imagecreatefromgif);
#if defined(HAVE_GD_JPG)
ZEND_FUNCTION(imagecreatefromjpeg);
#endif
#if defined(HAVE_GD_PNG)
ZEND_FUNCTION(imagecreatefrompng);
#endif
#if defined(HAVE_GD_WEBP)
ZEND_FUNCTION(imagecreatefromwebp);
#endif
ZEND_FUNCTION(imagecreatefromxbm);
#if defined(HAVE_GD_XPM)
ZEND_FUNCTION(imagecreatefromxpm);
#endif
ZEND_FUNCTION(imagecreatefromwbmp);
ZEND_FUNCTION(imagecreatefromgd);
ZEND_FUNCTION(imagecreatefromgd2);
ZEND_FUNCTION(imagecreatefromgd2part);
ZEND_FUNCTION(imagecreatefrombmp);
ZEND_FUNCTION(imagecreatefromtga);
ZEND_FUNCTION(imagexbm);
#if defined(HAVE_GD_AVIF)
ZEND_FUNCTION(imageavif);
#endif
ZEND_FUNCTION(imagegif);
#if defined(HAVE_GD_PNG)
ZEND_FUNCTION(imagepng);
#endif
#if defined(HAVE_GD_WEBP)
ZEND_FUNCTION(imagewebp);
#endif
#if defined(HAVE_GD_JPG)
ZEND_FUNCTION(imagejpeg);
#endif
ZEND_FUNCTION(imagewbmp);
ZEND_FUNCTION(imagegd);
ZEND_FUNCTION(imagegd2);
ZEND_FUNCTION(imagebmp);
ZEND_FUNCTION(imagedestroy);
ZEND_FUNCTION(imagecolorallocate);
ZEND_FUNCTION(imagepalettecopy);
ZEND_FUNCTION(imagecolorat);
ZEND_FUNCTION(imagecolorclosest);
ZEND_FUNCTION(imagecolorclosesthwb);
ZEND_FUNCTION(imagecolordeallocate);
ZEND_FUNCTION(imagecolorresolve);
ZEND_FUNCTION(imagecolorexact);
ZEND_FUNCTION(imagecolorset);
ZEND_FUNCTION(imagecolorsforindex);
ZEND_FUNCTION(imagegammacorrect);
ZEND_FUNCTION(imagesetpixel);
ZEND_FUNCTION(imageline);
ZEND_FUNCTION(imagedashedline);
ZEND_FUNCTION(imagerectangle);
ZEND_FUNCTION(imagefilledrectangle);
ZEND_FUNCTION(imagearc);
ZEND_FUNCTION(imageellipse);
ZEND_FUNCTION(imagefilltoborder);
ZEND_FUNCTION(imagefill);
ZEND_FUNCTION(imagecolorstotal);
ZEND_FUNCTION(imagecolortransparent);
ZEND_FUNCTION(imageinterlace);
ZEND_FUNCTION(imagepolygon);
ZEND_FUNCTION(imageopenpolygon);
ZEND_FUNCTION(imagefilledpolygon);
ZEND_FUNCTION(imagefontwidth);
ZEND_FUNCTION(imagefontheight);
ZEND_FUNCTION(imagechar);
ZEND_FUNCTION(imagecharup);
ZEND_FUNCTION(imagestring);
ZEND_FUNCTION(imagestringup);
ZEND_FUNCTION(imagecopy);
ZEND_FUNCTION(imagecopymerge);
ZEND_FUNCTION(imagecopymergegray);
ZEND_FUNCTION(imagecopyresized);
ZEND_FUNCTION(imagesx);
ZEND_FUNCTION(imagesy);
ZEND_FUNCTION(imagesetclip);
ZEND_FUNCTION(imagegetclip);
#if defined(HAVE_GD_FREETYPE)
ZEND_FUNCTION(imageftbbox);
ZEND_FUNCTION(imagefttext);
#endif
ZEND_FUNCTION(imagefilter);
ZEND_FUNCTION(imageconvolution);
ZEND_FUNCTION(imageflip);
ZEND_FUNCTION(imageantialias);
ZEND_FUNCTION(imagecrop);
ZEND_FUNCTION(imagecropauto);
ZEND_FUNCTION(imagescale);
ZEND_FUNCTION(imageaffine);
ZEND_FUNCTION(imageaffinematrixget);
ZEND_FUNCTION(imageaffinematrixconcat);
ZEND_FUNCTION(imagegetinterpolation);
ZEND_FUNCTION(imagesetinterpolation);
ZEND_FUNCTION(imageresolution);

static const zend_function_entry ext_functions[] = {
	ZEND_RAW_FENTRY("gd_info", zif_gd_info, arginfo_gd_info, 0, NULL, "/**\n * Retrieve information about the currently installed GD library\n * @return array\n */")
	ZEND_RAW_FENTRY("imageloadfont", zif_imageloadfont, arginfo_imageloadfont, 0, NULL, "/**\n * Load a new font\n * @param string $filename The font file format is currently binary and architecture dependent.  This means you should generate the font files on the same type of CPU as the machine you are running PHP on.\n * @return GdFont|false\n */")
	ZEND_RAW_FENTRY("imagesetstyle", zif_imagesetstyle, arginfo_imagesetstyle, 0, NULL, "/**\n * Set the style for line drawing\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param array $style An array of pixel colors. You can use the IMG_COLOR_TRANSPARENT constant to add a transparent pixel. Note that style must not be an empty array.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagecreatetruecolor", zif_imagecreatetruecolor, arginfo_imagecreatetruecolor, 0, NULL, "/**\n * Create a new true color image\n * @param int $width Image width.\n * @param int $height Image height.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imageistruecolor", zif_imageistruecolor, arginfo_imageistruecolor, 0, NULL, "/**\n * Finds whether an image is a truecolor image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagetruecolortopalette", zif_imagetruecolortopalette, arginfo_imagetruecolortopalette, 0, NULL, "/**\n * Convert a true color image to a palette image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param bool $dither Indicates if the image should be dithered - if it is true then dithering will be used which will result in a more speckled image but with better color approximation.\n * @param int $num_colors Sets the maximum number of colors that should be retained in the palette.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagepalettetotruecolor", zif_imagepalettetotruecolor, arginfo_imagepalettetotruecolor, 0, NULL, "/**\n * Converts a palette based image to true color\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagecolormatch", zif_imagecolormatch, arginfo_imagecolormatch, 0, NULL, "/**\n * Makes the colors of the palette version of an image more closely match the true color version\n * @param GdImage $image1 A truecolor image object.\n * @param GdImage $image2 A palette image object pointing to an image that has the same size as image1.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagesetthickness", zif_imagesetthickness, arginfo_imagesetthickness, 0, NULL, "/**\n * Set the thickness for line drawing\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $thickness Thickness, in pixels.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagefilledellipse", zif_imagefilledellipse, arginfo_imagefilledellipse, 0, NULL, "/**\n * Draw a filled ellipse\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $center_x x-coordinate of the center.\n * @param int $center_y y-coordinate of the center.\n * @param int $width The ellipse width.\n * @param int $height The ellipse height.\n * @param int $color The fill color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagefilledarc", zif_imagefilledarc, arginfo_imagefilledarc, 0, NULL, "/**\n * Draw a partial arc and fill it\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $center_x x-coordinate of the center.\n * @param int $center_y y-coordinate of the center.\n * @param int $width The arc width.\n * @param int $height The arc height.\n * @param int $start_angle The arc start angle, in degrees.\n * @param int $end_angle The arc end angle, in degrees. 0° is located at the three-o\'clock position, and the arc is drawn clockwise.\n * @param int $color gd.identifier.color\n * @param int $style A bitwise OR of the following possibilities: IMG_ARC_PIE IMG_ARC_CHORD IMG_ARC_NOFILL IMG_ARC_EDGED IMG_ARC_PIE and IMG_ARC_CHORD are mutually exclusive; IMG_ARC_CHORD just connects the starting and ending angles with a straight line, while IMG_ARC_PIE produces a rounded edge. IMG_ARC_NOFILL indicates that the arc or chord should be outlined, not filled.  IMG_ARC_EDGED, used together with IMG_ARC_NOFILL, indicates that the beginning and ending angles should be connected to the center - this is a good way to outline (rather than fill) a \'pie slice\'.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagealphablending", zif_imagealphablending, arginfo_imagealphablending, 0, NULL, "/**\n * Set the blending mode for an image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param bool $enable Whether to enable the blending mode or not. On true color images the default value is true otherwise the default value is false\n * @return true\n */")
	ZEND_RAW_FENTRY("imagesavealpha", zif_imagesavealpha, arginfo_imagesavealpha, 0, NULL, "/**\n * Whether to retain full alpha channel information when saving images\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param bool $enable Whether to save the alpha channel or not. Defaults to false.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagelayereffect", zif_imagelayereffect, arginfo_imagelayereffect, 0, NULL, "/**\n * Set the alpha blending flag to use layering effects\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $effect One of the following constants: IMG_EFFECT_REPLACE Use pixel replacement (equivalent of passing true to imagealphablending) IMG_EFFECT_ALPHABLEND Use normal pixel blending (equivalent of passing false to imagealphablending) IMG_EFFECT_NORMAL Same as IMG_EFFECT_ALPHABLEND. IMG_EFFECT_OVERLAY Overlay has the effect that black background pixels will remain black, white background pixels will remain white, but grey background pixels will take the colour of the foreground pixel. IMG_EFFECT_MULTIPLY Overlays with a multiply effect.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecolorallocatealpha", zif_imagecolorallocatealpha, arginfo_imagecolorallocatealpha, 0, NULL, "/**\n * Allocate a color for an image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("imagecolorresolvealpha", zif_imagecolorresolvealpha, arginfo_imagecolorresolvealpha, 0, NULL, "/**\n * Get the index of the specified color + alpha or its closest possible alternative\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolorclosestalpha", zif_imagecolorclosestalpha, arginfo_imagecolorclosestalpha, 0, NULL, "/**\n * Get the index of the closest color to the specified color + alpha\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolorexactalpha", zif_imagecolorexactalpha, arginfo_imagecolorexactalpha, 0, NULL, "/**\n * Get the index of the specified color + alpha\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @param int $alpha A value between 0 and 127. 0 indicates completely opaque while 127 indicates completely transparent.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecopyresampled", zif_imagecopyresampled, arginfo_imagecopyresampled, 0, NULL, "/**\n * Copy and resize part of an image with resampling\n * @param GdImage $dst_image Destination image resource.\n * @param GdImage $src_image Source image resource.\n * @param int $dst_x x-coordinate of destination point.\n * @param int $dst_y y-coordinate of destination point.\n * @param int $src_x x-coordinate of source point.\n * @param int $src_y y-coordinate of source point.\n * @param int $dst_width Destination width.\n * @param int $dst_height Destination height.\n * @param int $src_width Source width.\n * @param int $src_height Source height.\n * @return true\n */")
#if defined(PHP_WIN32)
	ZEND_RAW_FENTRY("imagegrabwindow", zif_imagegrabwindow, arginfo_imagegrabwindow, 0, NULL, "/**\n * Captures a window\n * @param int $handle The HWND window ID.\n * @param bool $client_area Include the client area of the application window.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagegrabscreen", zif_imagegrabscreen, arginfo_imagegrabscreen, 0, NULL, "/**\n * Captures the whole screen\n * @return GdImage|false\n */")
#endif
	ZEND_RAW_FENTRY("imagerotate", zif_imagerotate, arginfo_imagerotate, 0, NULL, "/**\n * Rotate an image with a given angle\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param float $angle Rotation angle, in degrees. The rotation angle is interpreted as the number of degrees to rotate the image anticlockwise.\n * @param int $background_color Specifies the color of the uncovered zone after the rotation\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagesettile", zif_imagesettile, arginfo_imagesettile, 0, NULL, "/**\n * Set the tile image for filling\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdImage $tile The image object to be used as a tile.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagesetbrush", zif_imagesetbrush, arginfo_imagesetbrush, 0, NULL, "/**\n * Set the brush image for line drawing\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdImage $brush An image object.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecreate", zif_imagecreate, arginfo_imagecreate, 0, NULL, "/**\n * Create a new palette based image\n * @param int $width The image width.\n * @param int $height The image height.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagetypes", zif_imagetypes, arginfo_imagetypes, ZEND_ACC_COMPILE_TIME_EVAL, NULL, "/**\n * Return the image types supported by this PHP build\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecreatefromstring", zif_imagecreatefromstring, arginfo_imagecreatefromstring, 0, NULL, "/**\n * Create a new image from the image stream in the string\n * @param string $data A string containing the image data.\n * @return GdImage|false\n */")
#if defined(HAVE_GD_AVIF)
	ZEND_RAW_FENTRY("imagecreatefromavif", zif_imagecreatefromavif, arginfo_imagecreatefromavif, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the AVIF raster image.\n * @return GdImage|false\n */")
#endif
	ZEND_RAW_FENTRY("imagecreatefromgif", zif_imagecreatefromgif, arginfo_imagecreatefromgif, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the GIF image.\n * @return GdImage|false\n */")
#if defined(HAVE_GD_JPG)
	ZEND_RAW_FENTRY("imagecreatefromjpeg", zif_imagecreatefromjpeg, arginfo_imagecreatefromjpeg, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the JPEG image.\n * @return GdImage|false\n */")
#endif
#if defined(HAVE_GD_PNG)
	ZEND_RAW_FENTRY("imagecreatefrompng", zif_imagecreatefrompng, arginfo_imagecreatefrompng, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the PNG image.\n * @return GdImage|false\n */")
#endif
#if defined(HAVE_GD_WEBP)
	ZEND_RAW_FENTRY("imagecreatefromwebp", zif_imagecreatefromwebp, arginfo_imagecreatefromwebp, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the WebP image.\n * @return GdImage|false\n */")
#endif
	ZEND_RAW_FENTRY("imagecreatefromxbm", zif_imagecreatefromxbm, arginfo_imagecreatefromxbm, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the XBM image.\n * @return GdImage|false\n */")
#if defined(HAVE_GD_XPM)
	ZEND_RAW_FENTRY("imagecreatefromxpm", zif_imagecreatefromxpm, arginfo_imagecreatefromxpm, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the XPM image.\n * @return GdImage|false\n */")
#endif
	ZEND_RAW_FENTRY("imagecreatefromwbmp", zif_imagecreatefromwbmp, arginfo_imagecreatefromwbmp, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the WBMP image.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecreatefromgd", zif_imagecreatefromgd, arginfo_imagecreatefromgd, 0, NULL, "/**\n * Create a new image from GD file or URL\n * @param string $filename Path to the GD file.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecreatefromgd2", zif_imagecreatefromgd2, arginfo_imagecreatefromgd2, 0, NULL, "/**\n * Create a new image from GD2 file or URL\n * @param string $filename Path to the GD2 image.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecreatefromgd2part", zif_imagecreatefromgd2part, arginfo_imagecreatefromgd2part, 0, NULL, "/**\n * Create a new image from a given part of GD2 file or URL\n * @param string $filename Path to the GD2 image.\n * @param int $x x-coordinate of source point.\n * @param int $y y-coordinate of source point.\n * @param int $width Source width.\n * @param int $height Source height.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecreatefrombmp", zif_imagecreatefrombmp, arginfo_imagecreatefrombmp, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the BMP image.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecreatefromtga", zif_imagecreatefromtga, arginfo_imagecreatefromtga, 0, NULL, "/**\n * Create a new image from file or URL\n * @param string $filename Path to the Truevision TGA image.\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagexbm", zif_imagexbm, arginfo_imagexbm, 0, NULL, "/**\n * Output an XBM image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param string|null $filename The path to save the file to, given as string. If null, the raw image stream will be output directly.\n * @param int|null $foreground_color You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black. All other colors are treated as background.\n * @return bool\n */")
#if defined(HAVE_GD_AVIF)
	ZEND_RAW_FENTRY("imageavif", zif_imageavif, arginfo_imageavif, 0, NULL, "/**\n * Output image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int $quality quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, larger file). If -1 is provided, the default value 52 is used.\n * @param int $speed speed is optional, and ranges from 0 (slow, smaller file) to 10 (fast, larger file). If -1 is provided, the default value 6 is used.\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("imagegif", zif_imagegif, arginfo_imagegif, 0, NULL, "/**\n * Output image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @return bool\n */")
#if defined(HAVE_GD_PNG)
	ZEND_RAW_FENTRY("imagepng", zif_imagepng, arginfo_imagepng, 0, NULL, "/**\n * Output a PNG image to either the browser or a file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int $quality Compression level: from 0 (no compression) to 9. The default (-1) uses the zlib compression default. For more information see the zlib manual.\n * @param int $filters Allows reducing the PNG file size. It is a bitmask field which may be set to any combination of the PNG_FILTER_* constants. PNG_NO_FILTER or PNG_ALL_FILTERS may also be used to respectively disable or activate all filters. The default value (-1) disables filtering.\n * @return bool\n */")
#endif
#if defined(HAVE_GD_WEBP)
	ZEND_RAW_FENTRY("imagewebp", zif_imagewebp, arginfo_imagewebp, 0, NULL, "/**\n * Output a WebP image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int $quality quality ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). If -1 is provided, the default value 80 is used.\n * @return bool\n */")
#endif
#if defined(HAVE_GD_JPG)
	ZEND_RAW_FENTRY("imagejpeg", zif_imagejpeg, arginfo_imagejpeg, 0, NULL, "/**\n * Output image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int $quality quality is optional, and ranges from 0 (worst quality, smaller file) to 100 (best quality, biggest file). The default (-1) uses the default IJG quality value (about 75).\n * @return bool\n */")
#endif
	ZEND_RAW_FENTRY("imagewbmp", zif_imagewbmp, arginfo_imagewbmp, 0, NULL, "/**\n * Output image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int|null $foreground_color You can set the foreground color with this parameter by setting an identifier obtained from imagecolorallocate. The default foreground color is black.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagegd", zif_imagegd, arginfo_imagegd, 0, NULL, "/**\n * Output GD image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagegd2", zif_imagegd2, arginfo_imagegd2, 0, NULL, "/**\n * Output GD2 image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param int $chunk_size Chunk size.\n * @param int $mode Either IMG_GD2_RAW or IMG_GD2_COMPRESSED. Default is IMG_GD2_RAW.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagebmp", zif_imagebmp, arginfo_imagebmp, 0, NULL, "/**\n * Output a BMP image to browser or file\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param resource|string|null $file The path or an open stream resource (which is automatically closed after this function returns) to save the file to. If not set or null, the raw image stream will be output directly.\n * @param bool $compressed Whether the BMP should be compressed with run-length encoding (RLE), or not.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagedestroy", zif_imagedestroy, arginfo_imagedestroy, ZEND_ACC_DEPRECATED, NULL, NULL)
	ZEND_RAW_FENTRY("imagecolorallocate", zif_imagecolorallocate, arginfo_imagecolorallocate, 0, NULL, "/**\n * Allocate a color for an image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("imagepalettecopy", zif_imagepalettecopy, arginfo_imagepalettecopy, 0, NULL, "/**\n * Copy the palette from one image to another\n * @param GdImage $dst The destination image object.\n * @param GdImage $src The source image object.\n * @return void\n */")
	ZEND_RAW_FENTRY("imagecolorat", zif_imagecolorat, arginfo_imagecolorat, 0, NULL, "/**\n * Get the index of the color of a pixel\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x x-coordinate of the point.\n * @param int $y y-coordinate of the point.\n * @return int|false\n */")
	ZEND_RAW_FENTRY("imagecolorclosest", zif_imagecolorclosest, arginfo_imagecolorclosest, 0, NULL, "/**\n * Get the index of the closest color to the specified color\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolorclosesthwb", zif_imagecolorclosesthwb, arginfo_imagecolorclosesthwb, 0, NULL, "/**\n * Get the index of the color which has the hue, white and blackness\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolordeallocate", zif_imagecolordeallocate, arginfo_imagecolordeallocate, 0, NULL, "/**\n * De-allocate a color for an image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $color The color identifier.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecolorresolve", zif_imagecolorresolve, arginfo_imagecolorresolve, 0, NULL, "/**\n * Get the index of the specified color or its closest possible alternative\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolorexact", zif_imagecolorexact, arginfo_imagecolorexact, 0, NULL, "/**\n * Get the index of the specified color\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolorset", zif_imagecolorset, arginfo_imagecolorset, 0, NULL, "/**\n * Set the color for the specified palette index\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $color An index in the palette.\n * @param int $red Value of red component.\n * @param int $green Value of green component.\n * @param int $blue Value of blue component.\n * @param int $alpha Value of alpha component.\n * @return false|null\n */")
	ZEND_RAW_FENTRY("imagecolorsforindex", zif_imagecolorsforindex, arginfo_imagecolorsforindex, 0, NULL, "/**\n * Get the colors for an index\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $color The color index.\n * @return array\n */")
	ZEND_RAW_FENTRY("imagegammacorrect", zif_imagegammacorrect, arginfo_imagegammacorrect, 0, NULL, "/**\n * Apply a gamma correction to a GD image\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param float $input_gamma The input gamma.\n * @param float $output_gamma The output gamma.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagesetpixel", zif_imagesetpixel, arginfo_imagesetpixel, 0, NULL, "/**\n * Set a single pixel\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x x-coordinate.\n * @param int $y y-coordinate.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imageline", zif_imageline, arginfo_imageline, 0, NULL, "/**\n * Draw a line\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x1 x-coordinate for first point.\n * @param int $y1 y-coordinate for first point.\n * @param int $x2 x-coordinate for second point.\n * @param int $y2 y-coordinate for second point.\n * @param int $color The line color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagedashedline", zif_imagedashedline, arginfo_imagedashedline, 0, NULL, "/**\n * Draw a dashed line\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x1 Upper left x coordinate.\n * @param int $y1 Upper left y coordinate 0, 0 is the top left corner of the image.\n * @param int $x2 Bottom right x coordinate.\n * @param int $y2 Bottom right y coordinate.\n * @param int $color The fill color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagerectangle", zif_imagerectangle, arginfo_imagerectangle, 0, NULL, "/**\n * Draw a rectangle\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x1 Upper left x coordinate.\n * @param int $y1 Upper left y coordinate 0, 0 is the top left corner of the image.\n * @param int $x2 Bottom right x coordinate.\n * @param int $y2 Bottom right y coordinate.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagefilledrectangle", zif_imagefilledrectangle, arginfo_imagefilledrectangle, 0, NULL, "/**\n * Draw a filled rectangle\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x1 x-coordinate for point 1.\n * @param int $y1 y-coordinate for point 1.\n * @param int $x2 x-coordinate for point 2.\n * @param int $y2 y-coordinate for point 2.\n * @param int $color The fill color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagearc", zif_imagearc, arginfo_imagearc, 0, NULL, "/**\n * Draws an arc\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $center_x x-coordinate of the center.\n * @param int $center_y y-coordinate of the center.\n * @param int $width The arc width.\n * @param int $height The arc height.\n * @param int $start_angle The arc start angle, in degrees.\n * @param int $end_angle The arc end angle, in degrees. 0° is located at the three-o\'clock position, and the arc is drawn clockwise.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imageellipse", zif_imageellipse, arginfo_imageellipse, 0, NULL, "/**\n * Draw an ellipse\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $center_x x-coordinate of the center.\n * @param int $center_y y-coordinate of the center.\n * @param int $width The ellipse width.\n * @param int $height The ellipse height.\n * @param int $color The color of the ellipse. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagefilltoborder", zif_imagefilltoborder, arginfo_imagefilltoborder, 0, NULL, "/**\n * Flood fill to specific color\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x x-coordinate of start.\n * @param int $y y-coordinate of start.\n * @param int $border_color The border color. gd.identifier.color\n * @param int $color The fill color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagefill", zif_imagefill, arginfo_imagefill, 0, NULL, "/**\n * Flood fill\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $x x-coordinate of start point.\n * @param int $y y-coordinate of start point.\n * @param int $color The fill color. gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecolorstotal", zif_imagecolorstotal, arginfo_imagecolorstotal, 0, NULL, "/**\n * Find out the number of colors in an image\'s palette\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagecolortransparent", zif_imagecolortransparent, arginfo_imagecolortransparent, 0, NULL, "/**\n * Define a color as transparent\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int|null $color gd.identifier.color\n * @return int\n */")
	ZEND_RAW_FENTRY("imageinterlace", zif_imageinterlace, arginfo_imageinterlace, 0, NULL, "/**\n * Enable or disable interlace\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param bool|null $enable If true, the image will be interlaced, if false the interlace bit is turned off. Passing null will result in the interlacing behavior not being changed.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imagepolygon", zif_imagepolygon, arginfo_imagepolygon, 0, NULL, "/**\n * Draws a polygon\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param array $points An array containing the polygon\'s vertices, e.g.: points[0] = x0 points[1] = y0 points[2] = x1 points[3] = y1\n * @param int $num_points Total number of points (vertices), which must be at least 3.\n * @param int $color gd.identifier.color\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("imageopenpolygon", zif_imageopenpolygon, arginfo_imageopenpolygon, 0, NULL, "/**\n * Draws an open polygon\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param array $points An array containing the polygon\'s vertices, e.g.: points[0] = x0 points[1] = y0 points[2] = x1 points[3] = y1\n * @param int $num_points Total number of points (vertices), which must be at least 3.\n * @param int $color gd.identifier.color\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("imagefilledpolygon", zif_imagefilledpolygon, arginfo_imagefilledpolygon, 0, NULL, "/**\n * Draw a filled polygon\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param array $points An array containing the x and y coordinates of the polygons vertices consecutively.\n * @param int $num_points Total number of points (vertices), which must be at least 3.\n * @param int $color gd.identifier.color\n * @return bool|bool\n */")
	ZEND_RAW_FENTRY("imagefontwidth", zif_imagefontwidth, arginfo_imagefontwidth, 0, NULL, "/**\n * Get font width\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagefontheight", zif_imagefontheight, arginfo_imagefontheight, 0, NULL, "/**\n * Get font height\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagechar", zif_imagechar, arginfo_imagechar, 0, NULL, "/**\n * Draw a character horizontally\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @param int $x x-coordinate of the start.\n * @param int $y y-coordinate of the start.\n * @param string $char The character to draw.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecharup", zif_imagecharup, arginfo_imagecharup, 0, NULL, "/**\n * Draw a character vertically\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @param int $x x-coordinate of the start.\n * @param int $y y-coordinate of the start.\n * @param string $char The character to draw.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagestring", zif_imagestring, arginfo_imagestring, 0, NULL, "/**\n * Draw a string horizontally\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @param int $x x-coordinate of the upper left corner.\n * @param int $y y-coordinate of the upper left corner.\n * @param string $string The string to be written.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagestringup", zif_imagestringup, arginfo_imagestringup, 0, NULL, "/**\n * Draw a string vertically\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param GdFont|int $font Can be 1, 2, 3, 4, 5 for built-in fonts in latin2 encoding (where higher numbers corresponding to larger fonts) or GdFont instance, returned by imageloadfont.\n * @param int $x x-coordinate of the bottom left corner.\n * @param int $y y-coordinate of the bottom left corner.\n * @param string $string The string to be written.\n * @param int $color gd.identifier.color\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecopy", zif_imagecopy, arginfo_imagecopy, 0, NULL, "/**\n * Copy part of an image\n * @param GdImage $dst_image Destination image resource.\n * @param GdImage $src_image Source image resource.\n * @param int $dst_x x-coordinate of destination point.\n * @param int $dst_y y-coordinate of destination point.\n * @param int $src_x x-coordinate of source point.\n * @param int $src_y y-coordinate of source point.\n * @param int $src_width Source width.\n * @param int $src_height Source height.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecopymerge", zif_imagecopymerge, arginfo_imagecopymerge, 0, NULL, "/**\n * Copy and merge part of an image\n * @param GdImage $dst_image Destination image resource.\n * @param GdImage $src_image Source image resource.\n * @param int $dst_x x-coordinate of destination point.\n * @param int $dst_y y-coordinate of destination point.\n * @param int $src_x x-coordinate of source point.\n * @param int $src_y y-coordinate of source point.\n * @param int $src_width Source width.\n * @param int $src_height Source height.\n * @param int $pct The two images will be merged according to pct which can range from 0 to 100.  When pct = 0, no action is taken, when 100 this function behaves identically to imagecopy for pallete images, except for ignoring alpha components, while it implements alpha transparency for true colour images.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecopymergegray", zif_imagecopymergegray, arginfo_imagecopymergegray, 0, NULL, "/**\n * Copy and merge part of an image with gray scale\n * @param GdImage $dst_image Destination image resource.\n * @param GdImage $src_image Source image resource.\n * @param int $dst_x x-coordinate of destination point.\n * @param int $dst_y y-coordinate of destination point.\n * @param int $src_x x-coordinate of source point.\n * @param int $src_y y-coordinate of source point.\n * @param int $src_width Source width.\n * @param int $src_height Source height.\n * @param int $pct The src_image will be changed to grayscale according to pct where 0 is fully grayscale and 100 is unchanged. When pct = 100 this function behaves identically to imagecopy for pallete images, except for ignoring alpha components, while it implements alpha transparency for true colour images.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecopyresized", zif_imagecopyresized, arginfo_imagecopyresized, 0, NULL, "/**\n * Copy and resize part of an image\n * @param GdImage $dst_image Destination image resource.\n * @param GdImage $src_image Source image resource.\n * @param int $dst_x x-coordinate of destination point.\n * @param int $dst_y y-coordinate of destination point.\n * @param int $src_x x-coordinate of source point.\n * @param int $src_y y-coordinate of source point.\n * @param int $dst_width Destination width.\n * @param int $dst_height Destination height.\n * @param int $src_width Source width.\n * @param int $src_height Source height.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagesx", zif_imagesx, arginfo_imagesx, 0, NULL, "/**\n * Get image width\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagesy", zif_imagesy, arginfo_imagesy, 0, NULL, "/**\n * Get image height\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @return int\n */")
	ZEND_RAW_FENTRY("imagesetclip", zif_imagesetclip, arginfo_imagesetclip, 0, NULL, "/**\n * Set the clipping rectangle\n * @return true\n */")
	ZEND_RAW_FENTRY("imagegetclip", zif_imagegetclip, arginfo_imagegetclip, 0, NULL, "/**\n * Get the clipping rectangle\n * @return array\n */")
#if defined(HAVE_GD_FREETYPE)
	ZEND_RAW_FENTRY("imageftbbox", zif_imageftbbox, arginfo_imageftbbox, 0, NULL, "/**\n * Give the bounding box of a text using fonts via freetype2\n * @param float $size The font size in points.\n * @param float $angle Angle in degrees in which string will be measured.\n * @param string $font_filename The name of the TrueType font file (can be a URL). Depending on which version of the GD library that PHP is using, it may attempt to search for files that do not begin with a leading \'/\' by appending \'.ttf\' to the filename and searching along a library-defined font path.\n * @param string $string The string to be measured.\n * @param array $options Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing\n * @return array|false\n */")
	ZEND_RAW_FENTRY("imagefttext", zif_imagefttext, arginfo_imagefttext, 0, NULL, "/**\n * Write text to the image using fonts using FreeType 2\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param float $size The font size to use in points.\n * @param float $angle The angle in degrees, with 0 degrees being left-to-right reading text. Higher values represent a counter-clockwise rotation. For example, a value of 90 would result in bottom-to-top reading text.\n * @param int $x The coordinates given by x and y will define the basepoint of the first character (roughly the lower-left corner of the character). This is different from the imagestring, where x and y define the upper-left corner of the first character. For example, \"top left\" is 0, 0.\n * @param int $y The y-ordinate. This sets the position of the fonts baseline, not the very bottom of the character.\n * @param int $color The index of the desired color for the text, see imagecolorexact.\n * @param string $font_filename The path to the TrueType font you wish to use.\n * @param string $text Text to be inserted into image.\n * @param array $options Possible array indexes for options Key Type Meaning linespacing float Defines drawing linespacing\n * @return array|false\n */")
	ZEND_RAW_FENTRY("imagettfbbox", zif_imageftbbox, arginfo_imagettfbbox, 0, NULL, "/**\n * Give the bounding box of a text using TrueType fonts\n * @param float $size The font size in points.\n * @param float $angle Angle in degrees in which string will be measured.\n * @param string $string The string to be measured.\n * @param array $options Same as in imagettftext.\n * @return array|false\n */")
	ZEND_RAW_FENTRY("imagettftext", zif_imagefttext, arginfo_imagettftext, 0, NULL, "/**\n * Write text to the image using TrueType fonts\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param float $size The font size in points.\n * @param float $angle The angle in degrees, with 0 degrees being left-to-right reading text. Higher values represent a counter-clockwise rotation. For example, a value of 90 would result in bottom-to-top reading text.\n * @param int $x The coordinates given by x and y will define the basepoint of the first character (roughly the lower-left corner of the character). This is different from the imagestring, where x and y define the upper-left corner of the first character. For example, \"top left\" is 0, 0.\n * @param int $y The y-ordinate. This sets the position of the fonts baseline, not the very bottom of the character.\n * @param int $color The color index. Using the negative of a color index has the effect of turning off antialiasing. See imagecolorallocate.\n * @param string $text The text string in UTF-8 encoding.\n * @param array $options An array with linespacing key holding a float value.\n * @return array|false\n */")
#endif
	ZEND_FE(imagefilter, arginfo_imagefilter)
	ZEND_RAW_FENTRY("imageconvolution", zif_imageconvolution, arginfo_imageconvolution, 0, NULL, "/**\n * Apply a 3x3 convolution matrix, using coefficient and offset\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param array $matrix A 3x3 matrix: an array of three arrays of three floats.\n * @param float $divisor The divisor of the result of the convolution, used for normalization.\n * @param float $offset Color offset.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imageflip", zif_imageflip, arginfo_imageflip, 0, NULL, "/**\n * Flips an image using a given mode\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $mode Flip mode, this can be one of the IMG_FLIP_* constants:\n * @return true\n */")
	ZEND_RAW_FENTRY("imageantialias", zif_imageantialias, arginfo_imageantialias, 0, NULL, "/**\n * Should antialias functions be used or not\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param bool $enable Whether to enable antialiasing or not.\n * @return true\n */")
	ZEND_RAW_FENTRY("imagecrop", zif_imagecrop, arginfo_imagecrop, 0, NULL, "/**\n * Crop an image to the given rectangle\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagecropauto", zif_imagecropauto, arginfo_imagecropauto, 0, NULL, "/**\n * Crop an image automatically using one of the available modes\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imagescale", zif_imagescale, arginfo_imagescale, 0, NULL, "/**\n * Scale an image using the given new width and height\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imageaffine", zif_imageaffine, arginfo_imageaffine, 0, NULL, "/**\n * Return an image containing the affine transformed src image, using an optional clipping area\n * @return GdImage|false\n */")
	ZEND_RAW_FENTRY("imageaffinematrixget", zif_imageaffinematrixget, arginfo_imageaffinematrixget, 0, NULL, "/**\n * Get an affine transformation matrix\n * @return array|false\n */")
	ZEND_RAW_FENTRY("imageaffinematrixconcat", zif_imageaffinematrixconcat, arginfo_imageaffinematrixconcat, 0, NULL, "/**\n * Concatenate two affine transformation matrices\n * @return array|false\n */")
	ZEND_RAW_FENTRY("imagegetinterpolation", zif_imagegetinterpolation, arginfo_imagegetinterpolation, 0, NULL, "/**\n * Get the interpolation method\n * @return int\n */")
	ZEND_RAW_FENTRY("imagesetinterpolation", zif_imagesetinterpolation, arginfo_imagesetinterpolation, 0, NULL, "/**\n * Set the interpolation method\n * @param GdImage $image A GdImage object, returned by one of the image creation functions, such as imagecreatetruecolor.\n * @param int $method The interpolation method, which can be one of the following: IMG_BELL: Bell filter. IMG_BESSEL: Bessel filter. IMG_BICUBIC: Bicubic interpolation. IMG_BICUBIC_FIXED: Fixed point implementation of the bicubic interpolation. IMG_BILINEAR_FIXED: Fixed point implementation of the  bilinear interpolation (default (also on image creation)). IMG_BLACKMAN: Blackman window function. IMG_BOX: Box blur filter. IMG_BSPLINE: Spline interpolation. IMG_CATMULLROM: Cubic Hermite spline interpolation. IMG_GAUSSIAN: Gaussian function. IMG_GENERALIZED_CUBIC: Generalized cubic spline fractal interpolation. IMG_HERMITE: Hermite interpolation. IMG_HAMMING: Hamming filter. IMG_HANNING: Hanning filter. IMG_MITCHELL: Mitchell filter. IMG_POWER: Power interpolation. IMG_QUADRATIC: Inverse quadratic interpolation. IMG_SINC: Sinc function. IMG_NEAREST_NEIGHBOUR: Nearest neighbour interpolation. IMG_WEIGHTED4: Weighting filter. IMG_TRIANGLE: Triangle interpolation.\n * @return bool\n */")
	ZEND_RAW_FENTRY("imageresolution", zif_imageresolution, arginfo_imageresolution, 0, NULL, "/**\n * Get or set the resolution of the image\n * @return array|true\n */")
	ZEND_FE_END
};

static void register_gd_symbols(int module_number)
{
	REGISTER_LONG_CONSTANT("IMG_AVIF", PHP_IMG_AVIF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_GIF", PHP_IMG_GIF, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_JPG", PHP_IMG_JPG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_JPEG", PHP_IMG_JPEG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_PNG", PHP_IMG_PNG, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_WBMP", PHP_IMG_WBMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_XPM", PHP_IMG_XPM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_WEBP", PHP_IMG_WEBP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BMP", PHP_IMG_BMP, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_TGA", PHP_IMG_TGA, CONST_PERSISTENT);
#if defined(gdWebpLossless)
	REGISTER_LONG_CONSTANT("IMG_WEBP_LOSSLESS", gdWebpLossless, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("IMG_COLOR_TILED", gdTiled, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_COLOR_STYLED", gdStyled, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_COLOR_BRUSHED", gdBrushed, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_COLOR_STYLEDBRUSHED", gdStyledBrushed, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_COLOR_TRANSPARENT", gdTransparent, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_ARC_ROUNDED", gdArc, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_ARC_PIE", gdPie, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_ARC_CHORD", gdChord, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_ARC_NOFILL", gdNoFill, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_ARC_EDGED", gdEdged, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_GD2_RAW", GD2_FMT_RAW, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_GD2_COMPRESSED", GD2_FMT_COMPRESSED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FLIP_HORIZONTAL", PHP_GD_FLIP_HORIZONTAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FLIP_VERTICAL", PHP_GD_FLIP_VERTICAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FLIP_BOTH", PHP_GD_FLIP_BOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_EFFECT_REPLACE", gdEffectReplace, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_EFFECT_ALPHABLEND", gdEffectAlphaBlend, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_EFFECT_NORMAL", gdEffectNormal, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_EFFECT_OVERLAY", gdEffectOverlay, CONST_PERSISTENT);
#if defined(gdEffectMultiply)
	REGISTER_LONG_CONSTANT("IMG_EFFECT_MULTIPLY", gdEffectMultiply, CONST_PERSISTENT);
#endif
	REGISTER_LONG_CONSTANT("IMG_CROP_DEFAULT", GD_CROP_DEFAULT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CROP_TRANSPARENT", GD_CROP_TRANSPARENT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CROP_BLACK", GD_CROP_BLACK, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CROP_WHITE", GD_CROP_WHITE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CROP_SIDES", GD_CROP_SIDES, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CROP_THRESHOLD", GD_CROP_THRESHOLD, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BELL", GD_BELL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BESSEL", GD_BESSEL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BILINEAR_FIXED", GD_BILINEAR_FIXED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BICUBIC", GD_BICUBIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BICUBIC_FIXED", GD_BICUBIC_FIXED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BLACKMAN", GD_BLACKMAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BOX", GD_BOX, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_BSPLINE", GD_BSPLINE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_CATMULLROM", GD_CATMULLROM, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_GAUSSIAN", GD_GAUSSIAN, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_GENERALIZED_CUBIC", GD_GENERALIZED_CUBIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_HERMITE", GD_HERMITE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_HAMMING", GD_HAMMING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_HANNING", GD_HANNING, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_MITCHELL", GD_MITCHELL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_POWER", GD_POWER, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_QUADRATIC", GD_QUADRATIC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_SINC", GD_SINC, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_NEAREST_NEIGHBOUR", GD_NEAREST_NEIGHBOUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_WEIGHTED4", GD_WEIGHTED4, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_TRIANGLE", GD_TRIANGLE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_AFFINE_TRANSLATE", GD_AFFINE_TRANSLATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_AFFINE_SCALE", GD_AFFINE_SCALE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_AFFINE_ROTATE", GD_AFFINE_ROTATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_AFFINE_SHEAR_HORIZONTAL", GD_AFFINE_SHEAR_HORIZONTAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_AFFINE_SHEAR_VERTICAL", GD_AFFINE_SHEAR_VERTICAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GD_BUNDLED", GD_BUNDLED, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_NEGATE", IMAGE_FILTER_NEGATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_GRAYSCALE", IMAGE_FILTER_GRAYSCALE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_BRIGHTNESS", IMAGE_FILTER_BRIGHTNESS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_CONTRAST", IMAGE_FILTER_CONTRAST, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_COLORIZE", IMAGE_FILTER_COLORIZE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_EDGEDETECT", IMAGE_FILTER_EDGEDETECT, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_GAUSSIAN_BLUR", IMAGE_FILTER_GAUSSIAN_BLUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_SELECTIVE_BLUR", IMAGE_FILTER_SELECTIVE_BLUR, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_EMBOSS", IMAGE_FILTER_EMBOSS, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_MEAN_REMOVAL", IMAGE_FILTER_MEAN_REMOVAL, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_SMOOTH", IMAGE_FILTER_SMOOTH, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_PIXELATE", IMAGE_FILTER_PIXELATE, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("IMG_FILTER_SCATTER", IMAGE_FILTER_SCATTER, CONST_PERSISTENT);
#if defined(GD_VERSION_STRING)
	REGISTER_STRING_CONSTANT("GD_VERSION", GD_VERSION_STRING, CONST_PERSISTENT);
#endif
#if (defined(GD_MAJOR_VERSION) && defined(GD_MINOR_VERSION) && defined(GD_RELEASE_VERSION) && defined(GD_EXTRA_VERSION))
	REGISTER_LONG_CONSTANT("GD_MAJOR_VERSION", GD_MAJOR_VERSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GD_MINOR_VERSION", GD_MINOR_VERSION, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("GD_RELEASE_VERSION", GD_RELEASE_VERSION, CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("GD_EXTRA_VERSION", GD_EXTRA_VERSION, CONST_PERSISTENT);
#endif
#if defined(HAVE_GD_PNG)
	REGISTER_LONG_CONSTANT("PNG_NO_FILTER", 0x0, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_FILTER_NONE", 0x8, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_FILTER_SUB", 0x10, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_FILTER_UP", 0x20, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_FILTER_AVG", 0x40, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_FILTER_PAETH", 0x80, CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("PNG_ALL_FILTERS", 0x8 | 0x10 | 0x20 | 0x40 | 0x80, CONST_PERSISTENT);
#endif


	zend_attribute *attribute_Deprecated_func_imagedestroy_0 = zend_add_function_attribute(zend_hash_str_find_ptr(CG(function_table), "imagedestroy", sizeof("imagedestroy") - 1), ZSTR_KNOWN(ZEND_STR_DEPRECATED_CAPITALIZED), 2);
	ZVAL_STR(&attribute_Deprecated_func_imagedestroy_0->args[0].value, ZSTR_KNOWN(ZEND_STR_8_DOT_5));
	attribute_Deprecated_func_imagedestroy_0->args[0].name = ZSTR_KNOWN(ZEND_STR_SINCE);
	zend_string *attribute_Deprecated_func_imagedestroy_0_arg1_str = zend_string_init("as it has no effect since PHP 8.0", strlen("as it has no effect since PHP 8.0"), 1);
	ZVAL_STR(&attribute_Deprecated_func_imagedestroy_0->args[1].value, attribute_Deprecated_func_imagedestroy_0_arg1_str);
	attribute_Deprecated_func_imagedestroy_0->args[1].name = ZSTR_KNOWN(ZEND_STR_MESSAGE);
}

static zend_class_entry *register_class_GdImage(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GdImage", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_GdFont(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "GdFont", NULL);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NO_DYNAMIC_PROPERTIES|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
