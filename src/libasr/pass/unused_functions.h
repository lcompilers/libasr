#ifndef LFORTRAN_PASS_UNUSED_FUNCTIONS_H
#define LFORTRAN_PASS_UNUSED_FUNCTIONS_H

#include <libasr/asr.h>

namespace LFortran {

    void pass_unused_functions(Allocator &al, ASR::TranslationUnit_t &unit,
        bool always_run);

} // namespace LFortran

#endif // LFORTRAN_PASS_UNUSED_FUNCTIONS_H
