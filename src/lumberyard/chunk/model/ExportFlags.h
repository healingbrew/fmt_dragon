//
// Created by yretenai on 6/2/2020.
//

#pragma once

#ifndef DRAGON_LUMBERYARD_MODEL_EXPORTFLAGS_H
#define DRAGON_LUMBERYARD_MODEL_EXPORTFLAGS_H

#include "AbstractModelChunk.h"

namespace dragon::lumberyard::chunk::model {
    class LUMBERYARD_EXPORT ExportFlags : public AbstractModelChunk {
      public:
        ExportFlags(Array<char>* buffer, CRCH_CHUNK_HEADER chunk_header);

        EXPORT_FLAGS_HEADER Header;
    };
} // namespace dragon::lumberyard::chunk::model

#endif // DRAGON_LUMBERYARD_MODEL_EXPORTFLAGS_H
