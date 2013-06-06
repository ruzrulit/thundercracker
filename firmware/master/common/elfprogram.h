/*
 * Thundercracker Firmware -- Confidential, not for redistribution.
 * Copyright <c> 2012 Sifteo, Inc. All rights reserved.
 */

#ifndef ELF_UTIL_H
#define ELF_UTIL_H

#include "macros.h"
#include "elfdefs.h"
#include "flash_blockcache.h"
#include "flash_map.h"
#include "flash_volume.h"

namespace Elf {


/**
 * Represents an ELF program, in flash. This provides validation for the
 * ELF headers, as well as accessors for loading header data out of flash.
 *
 * This stores very little in RAM: we try to avoid duplicating anything that
 * can be recreated from data in flash.
 */

class Program {
public:
    bool init(const FlashMapSpan &span);

    // Basic header accessors
    const FileHeader *getFileHeader(FlashBlockRef &ref) const;
    const ProgramHeader *getProgramHeader(FlashBlockRef &ref, unsigned index) const;
    const ProgramHeader *getProgramHeader(const FileHeader *fh, unsigned index) const;

    // Look up specific program headers
    const ProgramHeader *getMetadataSegment(FlashBlockRef &ref) const;
    const ProgramHeader *getRODataSegment(FlashBlockRef &ref) const;
    const ProgramHeader *getRWDataSegment(FlashBlockRef &ref) const;

    const uint32_t getTopOfRAM() const;
    uint32_t getEntry() const;

    const FlashMapSpan getProgramSpan() const {
        return span;
    }

    const FlashMapSpan getRODataSpan() const;

    // Return mapped metadata
    const char *getMetaString(FlashBlockRef &ref, uint16_t key) const;
    const void *getMeta(FlashBlockRef &ref, uint16_t key, uint32_t size) const;
    const void *getMeta(FlashBlockRef &ref, uint16_t key,
        uint32_t minSize, uint32_t &actualSize) const;

    static uint32_t copyMeta(const FlashVolume &vol, uint16_t key, uint32_t minSize,
                             uint32_t maxSize, uint8_t *buf);

    // Return unmapped metadata
    const uint32_t getMetaSpanOffset(FlashBlockRef &ref, uint16_t key,
        uint32_t minSize, uint32_t &actualSize) const;

    template <typename T>
    inline const T* getMetaValue(FlashBlockRef &ref, uint16_t key) const {
        return reinterpret_cast<const T*>(getMeta(ref, key, sizeof(T)));
    }

private:
    FlashMapSpan span;
};


}  // end namespace Elf

#endif // ELF_UTIL_H
