#pragma once

#include <cstddef>
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

        std::uint32_t getWidth() const;
        std::uint32_t getHeight() const;
        std::uint8_t getChannels() const;
        std::size_t getPixelCount() const;

    private:
        std::uint32_t width;
        std::uint32_t height;
        std::uint8_t channels;

        std::vector<Pixel> pixels;
    };
}