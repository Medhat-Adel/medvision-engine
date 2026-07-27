#include "medvision/Image.hpp"

namespace medvision
{
    Image::Image(std::uint32_t width,
                 std::uint32_t height,
                 std::uint8_t channels)
        : width(width),
          height(height),
          channels(channels),
          pixels(width * height)
    {
    }

    std::uint32_t Image::getWidth() const
    {
        return width;
    }

    std::uint32_t Image::getHeight() const
    {
        return height;
    }

    std::uint8_t Image::getChannels() const
    {
        return channels;
    }

    std::size_t Image::getPixelCount() const
    {
        return pixels.size();
    }
}