#pragma once

#include <cstdint>
#include <vector>

#include "Pixel.hpp"

namespace medvision
{
    class Image
    {
    public:
        Image(std::uint32_t width,
              std::uint32_t height,
              std::uint8_t channels);

    private:
        std::uint32_t width;
        std::uint32_t height;
        std::uint8_t channels;

        std::vector<Pixel> pixels;
    };
}