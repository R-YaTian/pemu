//
// Created by cpasjuste on 29/05/18.
//

#ifndef PSNES_CONFIG_H
#define PSNES_CONFIG_H

#include "skeleton/pemu_config.h"

class PSNESConfig : public pemu::PEMUConfig {

public:
    PSNESConfig(c2d::Io *io, int version);

    std::string getCoreVersion() override;

    std::vector<std::string> getCoreSupportedExt() override;
};

#endif //PSNES_CONFIG_H