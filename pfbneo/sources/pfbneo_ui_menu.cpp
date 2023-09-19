//
// Created by cpasjuste on 01/06/18.
//

#include "pemu.h"
#include "pfbneo_ui_menu.h"

bool PFBAGuiMenu::isOptionHidden(c2d::config::Option *option) {
    ss_api::Game game = getUi()->getUiRomList()->getSelection();

    if (isRom() && option->getId() == PEMUConfig::Id::ROM_ROTATION && game.id > 0 && game.rotation == 0) {
        return true;
    }

    // Neo-Geo system id == 142
    if (isRom() && option->getId() == PEMUConfig::Id::ROM_NEOBIOS && game.id > 0 && game.system.id != 142) {
        return true;
    }

#ifdef __SWITCH__
    if (option->getId() == PEMUConfig::Id::ROM_FRAMESKIP) {
        return true;
    }
#endif

    return UiMenu::isOptionHidden(option);
}