
#ifndef SCENCENODE_HPP
#define SCENCENODE_HPP

#include <vector>
#include <memory>

#include <SFML/System/NonCopyable.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/Drawable.hpp>

class SceneNode : public sf::Transformable, public sf::Drawable, private sf::NonCopyable {
        public:
            //using Ptr = std::unique_ptr<SceneNode>;
            typedef std::unique_ptr<SceneNode> Ptr;

            SceneNode();
            void            attachChild(Ptr child);
            Ptr             detachChild(const SceneNode& node);
            void            update(sf::Time dt);
            sf::Vector2f    getWorldPosition() const;
            sf::Transform   getWorldTransform() const;
        
        private:
            virtual void    updateCurrent(sf::Time dt);
            void            updateChildren(sf::Time dt);
            virtual void    draw(sf::RenderTarget& target, sf::RenderStates states) const;
            virtual void    drawCurrent(sf::RenderTarget& target, sf::RenderStates states) const;
            void            drawChildren(sf::RenderTarget& target, sf::RenderStates states) const;

            std::vector<Ptr> mChildren;
            SceneNode*       mParent;
};
#endif // SCENENODE_HPP

