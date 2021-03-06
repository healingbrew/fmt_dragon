//
// Created by yretenai on 5/28/2020.
//

#pragma once

#ifndef DRAGON_LUMBERYARD_ACTOR_H
#define DRAGON_LUMBERYARD_ACTOR_H

#include "standard_dragon/dragon.h"
#include "chunk/emfx/EMFXChunks.h"
#include "export.h"

#define FOURCC_ACTR (MAKEFOURCC('A', 'C', 'T', 'R'))
namespace dragon::lumberyard {
    class LUMBERYARD_EXPORT Actor {
      public:
        Actor();
        Actor(Array<char>* buffer);

        chunk::emfx::ACTOR_HEADER Header;
        std::vector<std::shared_ptr<chunk::emfx::AbstractEMFXChunk>> Chunks;

        void get_chunks_of_type(chunk::emfx::ACTOR_CHUNK_TYPE type, std::vector<std::shared_ptr<chunk::emfx::AbstractEMFXChunk>>* chunks);
        std::shared_ptr<chunk::emfx::AbstractEMFXChunk> get_chunk(chunk::emfx::ACTOR_CHUNK_TYPE type);

        static bool check(Array<char>* buffer);

        static Array<VECTOR3_SINGLE>* unwrap_simd_array(Array<uint8_t> buffer);

#ifdef USE_NOESIS

        static noesisModel_t* noesis_load(BYTE* buffer, int length, int& numMdl, noeRAPI_t* rapi);

        static bool noesis_check(BYTE* buffer, int length, [[maybe_unused]] noeRAPI_t* rapi);

#endif // USE_NOESIS
    }; // namespace dragon::lumberyard
} // namespace dragon::lumberyard
#endif // DRAGON_LUMBERYARD_ACTOR_H
