#define CHORDAL_HOLD
#define PERMISSIVE_HOLD

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 60000

#define USB_SUSPEND_WAKEUP_DELAY 0
#define HOLD_ON_OTHER_KEY_PRESS
#define SERIAL_NUMBER "QwA3z/nlPBQ0"
#define LAYER_STATE_8BIT
#define HSS(report) host_system_send(record->event.pressed ? report : 0); return false
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

