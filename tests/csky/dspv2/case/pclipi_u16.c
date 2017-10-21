#include "testsuite.h"
#include "test_device.h"
#include "dspv2_insn.h"
#include "sample_array.h"
int main(void)
{
    int i = 0;
    init_testsuite("Testing insn pclipi.u16\n");

    for (i = 0;
         i < sizeof(samples_pclipi_u16)/sizeof(struct binary_calculation);
         i++) {
        if (samples_pclipi_u16[i].op2 == 0) {
            TEST(test_pclipi_u16_0(samples_pclipi_u16[i].op1)
                 == samples_pclipi_u16[i].result);
        } else if (samples_pclipi_u16[i].op2 == 1) {
            TEST(test_pclipi_u16_1(samples_pclipi_u16[i].op1)
                 == samples_pclipi_u16[i].result);
        } else if (samples_pclipi_u16[i].op2 == 2) {
            TEST(test_pclipi_u16_2(samples_pclipi_u16[i].op1)
                 == samples_pclipi_u16[i].result);
        } else if (samples_pclipi_u16[i].op2 == 7) {
            TEST(test_pclipi_u16_7(samples_pclipi_u16[i].op1)
                 == samples_pclipi_u16[i].result);
        } else if (samples_pclipi_u16[i].op2 == 15) {
            TEST(test_pclipi_u16_15(samples_pclipi_u16[i].op1)
                 == samples_pclipi_u16[i].result);
        }
    }
    return done_testing();
}
