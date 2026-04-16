#include <Geode/modify/CCMenuItemSpriteExtra.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>

using namespace geode::prelude;

class $modify(MyButtonHook, CCMenuItemSpriteExtra) {

    void selected() {
        CCMenuItemSpriteExtra::selected();
        FMODAudioEngine::get()->playEffect("honk.wav");
            if (auto spr = CCSprite::create("soggycat.png")) {
            this->setSprite(spr);
            this->updateSprite();
        }
    }
};
