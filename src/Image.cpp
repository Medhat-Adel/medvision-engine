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

    Pixel& Image::at(std::uint32_t x, std::uint32_t y)
    {
        return pixels[y * width + x];
    }

    const Pixel& Image::at(std::uint32_t x, std::uint32_t y) const
    {
        return pixels[y * width + x];
    }
    void Image::fill(const Pixel& color)
    {
        for (Pixel& pixel : pixels)
        {
            pixel = color;
        }
    }
}