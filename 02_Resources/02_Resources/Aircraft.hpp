#ifndef BOOK_AIRCRAFT_HPP
#define BOOK_AIRCRAFT_HPP

#include <SFML/Graphics/Sprite.hpp>

#include "Entity.hpp"
#include "ResourceIdentifiers.hpp"

class Aircraft : public Entity {
    public:
        enum Type {
            Eagle,
            Raptor
        };

        Aircraft( Type type, const TextureHolder& textures );

    private:
        virtual void        drawCurrent( sf::RenderTarget& target, sf::RenderStates states ) const;

        Type                mType;
        sf::Sprite          mSprite;
};

#endif // AIRCRAFT_HPP

