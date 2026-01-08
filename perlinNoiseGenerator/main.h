#include <stdint.h>
#define STB_PERLIN_IMPLEMENTATION
#include "stb_perlin.h"
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

static inline uint32_t noise_to_gray(float v) {
  float n = (v + 1.0f) * 0.5f;
  if (n < 0.0f)
    n = 0.0f;
  if (n > 1.0f)
    n = 1.0f;

  uint8_t g = (uint8_t)(n * 255.0f);
  return (0xFFu << 24) | (g << 16) | (g << 8) | g;
}
