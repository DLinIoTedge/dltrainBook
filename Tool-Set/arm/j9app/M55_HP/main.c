 #include <stdint.h>

volatile uint32_t done = 0x12345678;

volatile int32_t v1[4] = {1, 2, 3, 4};
volatile int32_t v2[4] = {10, 20, 30, 40};
volatile int32_t v3[4];

int main(void)
{
    for (int i = 0; i < 4; i++)
    {
        v3[i] = v1[i] + v2[i];
    }

    done = 0xABCDEF55;

    while (1)
    {
    }
}
