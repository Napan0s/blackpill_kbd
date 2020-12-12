// !!! DO NOT ADD #pragma once !!! //

// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(my_cool_effect)
RGB_MATRIX_EFFECT(SECOND)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// e.g: A simple effect, self-contained within a single method
bool my_cool_effect(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  int val = (rgb_matrix_get_val()/0.8);
//   rgb_matrix_set_color_all(0, 0, 0);
  rgb_matrix_set_color(20, val, val, val);
  rgb_matrix_set_color(21, val, val, val);
  rgb_matrix_set_color(22, val, val, val);
  rgb_matrix_set_color(26, val, val, val);
  rgb_matrix_set_color(31, val, val, val);
  return led_max < DRIVER_LED_TOTAL;
}

bool SECOND(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  int val = (rgb_matrix_get_val()/0.8);

//   rgb_matrix_set_color_all(0, 0, 0);
  rgb_matrix_set_color(1, val, val, val);
  rgb_matrix_set_color(2, val, val, val);
  rgb_matrix_set_color(3, val, val, val);
  rgb_matrix_set_color(4, val, val, val);
  rgb_matrix_set_color(5, val, val, val);
  rgb_matrix_set_color(6, val, val, val);
  rgb_matrix_set_color(7, val, val, val);
  rgb_matrix_set_color(8, val, val, val);
  rgb_matrix_set_color(9, val, val, val);
  rgb_matrix_set_color(10, val, val, val);
  return led_max < DRIVER_LED_TOTAL;
}


#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS