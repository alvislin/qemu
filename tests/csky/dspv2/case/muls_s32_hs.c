#include "testsuite.h"
#include "test_device.h"
#include "dspv2_insn.h"
#include "sample_array.h"
int main(void)
{
    int i = 0;
    init_testsuite("Testing insn muls.s32.hs\n");

    for (i = 0;
         i < sizeof(samples_muls_s32_hs)/sizeof(struct ternary_calculation);
         i++) {
        TEST(test_muls_s32_hs(samples_muls_s32_hs[i].op1, samples_muls_s32_hs[i].op2, samples_muls_s32_hs[i].op3)
                     == samples_muls_s32_hs[i].result);
    }
    return done_testing();
}
