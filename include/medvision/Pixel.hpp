#pragma once

#include <cstdint>

namespace medvision
{
    struct Pixel
    {
        std::uint8_t red;
        std::uint8_t green;
        std::uint8_t blue;

        Pixel()
            : red(0),
              green(0),
              blue(0)
        {
        }

        Pixel(std::uint8_t red,
              std::uint8_t green,
              std::uint8_t blue)
            : red(red),
              green(green),
              blue(blue)
        {
        }
    };
}