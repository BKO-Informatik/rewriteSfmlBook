
#ifndef RESOURCEIDENTIFIERS_HPP
#define RESOURCEIDENTIFIERS_HPP


// Forward declaration of SFML classes
namespace sf
{
    class Texture;
}

namespace Textures
{
    enum ID
    {
        Eagle,
        Raptor,
        Desert,
    };
}


// Forward declaration and a few type definitions
template <typename Resource, typename Identifier>
class ResourceHolder;

using TextureHolder = ResourceHolder<sf::Texture, Textures::ID>;

#endif // RESOURCEIDENTIFIERS_HPP
