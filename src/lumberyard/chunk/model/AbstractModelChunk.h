//
// Created by yretenai on 6/2/2020.
//

#pragma once

#ifndef DRAGON_LUMBERYARD_MODEL_ABSTRACTMODELCHUNK_H
#define DRAGON_LUMBERYARD_MODEL_ABSTRACTMODELCHUNK_H

#include "standard_dragon/dragon.h"
#include "../../export.h"
#include "SharedStructures.h"

namespace dragon::lumberyard::chunk::model {
    class LUMBERYARD_EXPORT AbstractModelChunk {
      public:
        CRCH_CHUNK_HEADER Chunk;
        virtual ~AbstractModelChunk() noexcept {}
    };
} // namespace dragon::lumberyard::chunk::model

#endif // DRAGON_LUMBERYARD_MODEL_ABSTRACTMODELCHUNK_H
