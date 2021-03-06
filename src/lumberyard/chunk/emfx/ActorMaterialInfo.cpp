//
// Created by yretenai on 2020-06-09.
//

#include "ActorMaterialInfo.h"

namespace dragon::lumberyard::chunk::emfx {
    ActorMaterialInfo::ActorMaterialInfo(Array<char>* buffer, EMFX_CHUNK_HEADER header, int& ptr) {
        assert(header.Version <= 1);
        Chunk = header;
        ptr = Align(ptr, 4);
        Header = buffer->lpcast<ACTOR_MATERIAL_INFO_V1_HEADER>(&ptr);
        ptr = Align(ptr, 4);
    }
} // namespace dragon::lumberyard::chunk::emfx
