#ifndef NW4R_SND_FX_BASE_H
#define NW4R_SND_FX_BASE_H
#include <nw4r/snd/snd_Common.h>
#include <nw4r/types_nw4r.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace snd {

class FxBase : private ut::NonCopyable {
public:
    virtual ~FxBase() {} // at 0x8

    virtual bool StartUp() {
        return true;
    } // at 0xC

    virtual void Shutdown() {} // at 0x10

    virtual void UpdateBuffer(int channels, void** pBuffer, u32 size,
                              SampleFormat format, f32 sampleRate,
                              OutputMode mode) {
#pragma unused(channels)
#pragma unused(pBuffer)
#pragma unused(size)
#pragma unused(format)
#pragma unused(sampleRate)
#pragma unused(mode)
    } // at 0x14

    NW4R_UT_LIST_NODE_DECL(); // at 0x4
};

NW4R_UT_LIST_TYPEDEF_DECL(FxBase);

} // namespace snd
} // namespace nw4r

#endif
