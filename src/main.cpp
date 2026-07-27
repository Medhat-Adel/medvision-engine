#include <iostream>

#include "medvision/Image.hpp"

int main()
{
    medvision::Image image(640, 480, 3);

    image.fill(medvision::Pixel(255, 0, 0));

    const medvision::Pixel& pixel = image.at(0, 0);

    std::cout << "Image Information\n";
    std::cout << "-----------------\n";
    std::cout << "Width    : " << image.getWidth() << '\n';
    std::cout << "Height   : " << image.getHeight() << '\n';
    std::cout << "Channels : " << static_cast<int>(image.getChannels()) << '\n';
    std::cout << "Pixels   : " << image.getPixelCount() << "\n\n";

    std::cout << "First Pixel\n";
    std::cout << "-----------\n";
    std::cout << "Red   : " << static_cast<int>(pixel.red) << '\n';
    std::cout << "Green : " << static_cast<int>(pixel.green) << '\n';
    std::cout << "Blue  : " << static_cast<int>(pixel.blue) << '\n';

    return 0;
}