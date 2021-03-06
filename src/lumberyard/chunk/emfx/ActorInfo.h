//
// Created by yretenai on 2020-06-08.
//

#pragma once

#ifndef DRAGON_LUMBERYARD_EMFX_INFO_H
#define DRAGON_LUMBERYARD_EMFX_INFO_H

#include "AbstractEMFXChunk.h"

namespace dragon::lumberyard::chunk::emfx {
    class LUMBERYARD_EXPORT ActorInfo : public AbstractEMFXChunk {
      public:
        ActorInfo(Array<char>* buffer, EMFX_CHUNK_HEADER header, int& ptr);

        ACTOR_INFO_V3_HEADER Header;

        std::string Source;
        std::string Filename;
        std::string Date;
        std::string Name;
    };
} // namespace dragon::lumberyard::chunk::emfx

#endif // DRAGON_LUMBERYARD_EMFX_INFO_H
