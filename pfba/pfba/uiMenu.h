//
// Created by cpasjuste on 01/06/18.
//

#ifndef PFBA_UIMENU_H
#define PFBA_UIMENU_H

class PFBAGuiMenu : public c2dui::UIMenu {

public:

    PFBAGuiMenu(c2dui::UIMain *ui);

    bool isOptionHidden(c2dui::Option *option);

};

#endif //PFBA_UIMENU_H
