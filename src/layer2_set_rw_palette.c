/*******************************************************************************
 * Stefan Bylund 2017
 *
 * Implementation of layer2_set_rw_palette() in zxnext_layer2.h.
 ******************************************************************************/

#include <stdbool.h>

#include "zxnext_layer2.h"
#include "layer2_defs.h"

void layer2_set_rw_palette(bool first_palette)
{
    IO_REGISTER_NUMBER_PORT = PALETTE_CONTROL_REGISTER;
    IO_REGISTER_VALUE_PORT = (IO_REGISTER_VALUE_PORT & 0x8F) | (first_palette ? 0x10 : 0x50);
}
