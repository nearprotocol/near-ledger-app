#include "ui_menus_buttons.h"

#include "../ui_logic.h"
#include "os_io_seproxyhal.h"

#if defined(TARGET_NANOS)

unsigned int ui_verify_transfer_nanos_button(unsigned int button_mask, unsigned int button_mask_counter) {
    return ui_verify_transaction_nanos_button(button_mask, button_mask_counter);
}

unsigned int ui_verify_function_call_nanos_button(unsigned int button_mask, unsigned int button_mask_counter) {
    return ui_verify_transaction_nanos_button(button_mask, button_mask_counter);
}

unsigned int ui_verify_add_function_call_access_key_button(unsigned int button_mask, unsigned int button_mask_counter) {
    return ui_verify_transaction_nanos_button(button_mask, button_mask_counter);
}

unsigned int ui_verify_add_full_access_key_button(unsigned int button_mask, unsigned int button_mask_counter) {
    return ui_verify_transaction_nanos_button(button_mask, button_mask_counter);
}

unsigned int ui_verify_transaction_nanos_button(unsigned int button_mask, unsigned int button_mask_counter) {
    switch (button_mask) {
        case BUTTON_EVT_RELEASED | BUTTON_LEFT: // CANCEL
            io_seproxyhal_cancel(NULL);
            break;

        case BUTTON_EVT_RELEASED | BUTTON_RIGHT:  // OK
            io_seproxyhal_touch_sign_approve(NULL);
            break;
    }
    return 0;
}

unsigned int ui_address_nanos_button(unsigned int button_mask, unsigned int button_mask_counter) {
    switch (button_mask) {
        case BUTTON_EVT_RELEASED | BUTTON_LEFT: // CANCEL
            io_seproxyhal_cancel(NULL);
            break;

        case BUTTON_EVT_RELEASED | BUTTON_RIGHT:  // OK
            io_seproxyhal_touch_address_ok(NULL);
            break;
        }
    return 0;
}

#endif