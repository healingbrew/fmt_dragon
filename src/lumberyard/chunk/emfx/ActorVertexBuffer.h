//
// Created by yretenai on 2020-06-10.
//

#pragma once

#ifndef DRAGON_LUMBERYARD_ACTORVERTEXBUFFER_H
#define DRAGON_LUMBERYARD_ACTORVERTEXBUFFER_H

#include "AbstractEMFXChunk.h"

namespace dragon::lumberyard::chunk::emfx {
    class LUMBERYARD_EXPORT ActorVertexBuffer : public AbstractEMFXChunk {
      public:
        ActorVertexBuffer(Array<char>* buffer, EMFX_CHUNK_HEADER header, ACTOR_MESH_V1_HEADER mesh, int& ptr);

        ACTOR_VBO_V1_HEADER Header;

        std::string Name;
        Array<uint8_t> Buffer;
    };
} // namespace dragon::lumberyard::chunk::emfx

#endif // DRAGON_LUMBERYARD_ACTORVERTEXBUFFER_H
