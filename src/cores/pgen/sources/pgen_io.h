//
// Created by cpasjuste on 03/04/2020.
//

#ifndef PGEN_IO_H
#define PGEN_IO_H

namespace c2d {
    class PGENIo : public c2d::C2DIo {
    public:
        PGENIo() : C2DIo() {
            C2DIo::create(PGENIo::getDataPath());
            C2DIo::create(PGENIo::getDataPath() + "bios");
            C2DIo::create(PGENIo::getDataPath() + "rams");
            C2DIo::create(PGENIo::getDataPath() + "configs");
            C2DIo::create(PGENIo::getDataPath() + "saves");
            C2DIo::create(PGENIo::getDataPath() + "megadrive");
            C2DIo::create(PGENIo::getDataPath() + "mastersystem");
            C2DIo::create(PGENIo::getDataPath() + "gamegear");
            C2DIo::create(PGENIo::getDataPath() + "megacd");
            C2DIo::create(PGENIo::getDataPath() + "sg1000");
        }

#ifdef __PSP2__
        std::string getDataPath() override {
            return "ux0:/data/pgen/";
        }
#elif __PS4__
        std::string getDataPath() override {
            return "/data/pgen/";
        }
#ifndef NDEBUG
        std::string getRomFsPath() override {
            return "/data/pgen/";
        }
#endif
#elif __3DS__
#ifndef NDEBUG
        std::string getDataPath() override {
            return "/3ds/pgen/";
        }
#endif
#elif __SWITCH__
#if __DEBUG_SVC__
        std::string getDataPath() override {
            return "/switch/pgen/";
        }
#endif
#endif
    };
}

#endif //PGEN_IO_H
