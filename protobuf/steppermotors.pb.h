/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.4 */

#ifndef PB_STEPPERS_PROTO_FILES_STEPPERMOTORS_PB_H_INCLUDED
#define PB_STEPPERS_PROTO_FILES_STEPPERMOTORS_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _steppers_pb_motors_ChangeState {
    steppers_pb_motors_ChangeState_YES = 0,
    steppers_pb_motors_ChangeState_NO = 1
} steppers_pb_motors_ChangeState;

typedef enum _steppers_pb_motors_MotorCommand {
    steppers_pb_motors_MotorCommand_DRIVE = 0,
    steppers_pb_motors_MotorCommand_HALT = 1,
    steppers_pb_motors_MotorCommand_XMAX = 2,
    steppers_pb_motors_MotorCommand_YMAX = 3,
    steppers_pb_motors_MotorCommand_ZMAX = 4,
    steppers_pb_motors_MotorCommand_XMIN = 5,
    steppers_pb_motors_MotorCommand_YMIN = 6,
    steppers_pb_motors_MotorCommand_ZMIN = 7
} steppers_pb_motors_MotorCommand;

typedef enum _steppers_pb_motors_MotorName {
    steppers_pb_motors_MotorName_X = 0,
    steppers_pb_motors_MotorName_Y = 1,
    steppers_pb_motors_MotorName_Z = 2
} steppers_pb_motors_MotorName;

typedef enum _steppers_pb_motors_MotorDir {
    steppers_pb_motors_MotorDir_CC = 0,
    steppers_pb_motors_MotorDir_CCW = 1
} steppers_pb_motors_MotorDir;

/* Struct definitions */
typedef struct _steppers_pb_motors_MotorX {
    bool has_chgstate;
    steppers_pb_motors_ChangeState chgstate;
    bool has_cmd;
    steppers_pb_motors_MotorCommand cmd;
    bool has_motorname;
    steppers_pb_motors_MotorName motorname;
    bool has_dir;
    steppers_pb_motors_MotorDir dir;
    bool has_steps;
    int32_t steps;
    bool has_rpm;
    int32_t rpm;
} steppers_pb_motors_MotorX;

typedef struct _steppers_pb_motors_MotorY {
    bool has_chgstate;
    steppers_pb_motors_ChangeState chgstate;
    bool has_cmd;
    steppers_pb_motors_MotorCommand cmd;
    bool has_motorname;
    steppers_pb_motors_MotorName motorname;
    bool has_dir;
    steppers_pb_motors_MotorDir dir;
    bool has_steps;
    int32_t steps;
    bool has_rpm;
    int32_t rpm;
} steppers_pb_motors_MotorY;

typedef struct _steppers_pb_motors_MotorZ {
    bool has_chgstate;
    steppers_pb_motors_ChangeState chgstate;
    bool has_cmd;
    steppers_pb_motors_MotorCommand cmd;
    bool has_motorname;
    steppers_pb_motors_MotorName motorname;
    bool has_dir;
    steppers_pb_motors_MotorDir dir;
    bool has_steps;
    int32_t steps;
    bool has_rpm;
    int32_t rpm;
} steppers_pb_motors_MotorZ;

typedef struct _steppers_pb_motors {
    pb_callback_t msgversion;
    pb_callback_t timestamp;
    bool has_manualmove;
    bool manualmove;
    bool has_motorx;
    steppers_pb_motors_MotorX motorx;
    bool has_motory;
    steppers_pb_motors_MotorY motory;
    bool has_motorz;
    steppers_pb_motors_MotorZ motorz;
} steppers_pb_motors;


/* Helper constants for enums */
#define _steppers_pb_motors_ChangeState_MIN steppers_pb_motors_ChangeState_YES
#define _steppers_pb_motors_ChangeState_MAX steppers_pb_motors_ChangeState_NO
#define _steppers_pb_motors_ChangeState_ARRAYSIZE ((steppers_pb_motors_ChangeState)(steppers_pb_motors_ChangeState_NO+1))

#define _steppers_pb_motors_MotorCommand_MIN steppers_pb_motors_MotorCommand_DRIVE
#define _steppers_pb_motors_MotorCommand_MAX steppers_pb_motors_MotorCommand_ZMIN
#define _steppers_pb_motors_MotorCommand_ARRAYSIZE ((steppers_pb_motors_MotorCommand)(steppers_pb_motors_MotorCommand_ZMIN+1))

#define _steppers_pb_motors_MotorName_MIN steppers_pb_motors_MotorName_X
#define _steppers_pb_motors_MotorName_MAX steppers_pb_motors_MotorName_Z
#define _steppers_pb_motors_MotorName_ARRAYSIZE ((steppers_pb_motors_MotorName)(steppers_pb_motors_MotorName_Z+1))

#define _steppers_pb_motors_MotorDir_MIN steppers_pb_motors_MotorDir_CC
#define _steppers_pb_motors_MotorDir_MAX steppers_pb_motors_MotorDir_CCW
#define _steppers_pb_motors_MotorDir_ARRAYSIZE ((steppers_pb_motors_MotorDir)(steppers_pb_motors_MotorDir_CCW+1))


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define steppers_pb_motors_init_default          {{{NULL}, NULL}, {{NULL}, NULL}, false, false, false, steppers_pb_motors_MotorX_init_default, false, steppers_pb_motors_MotorY_init_default, false, steppers_pb_motors_MotorZ_init_default}
#define steppers_pb_motors_MotorX_init_default   {false, steppers_pb_motors_ChangeState_NO, false, steppers_pb_motors_MotorCommand_HALT, false, steppers_pb_motors_MotorName_X, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}
#define steppers_pb_motors_MotorY_init_default   {false, steppers_pb_motors_ChangeState_NO, false, steppers_pb_motors_MotorCommand_HALT, false, steppers_pb_motors_MotorName_Y, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}
#define steppers_pb_motors_MotorZ_init_default   {false, steppers_pb_motors_ChangeState_NO, false, steppers_pb_motors_MotorCommand_HALT, false, steppers_pb_motors_MotorName_Z, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}
#define steppers_pb_motors_init_zero             {{{NULL}, NULL}, {{NULL}, NULL}, false, 0, false, steppers_pb_motors_MotorX_init_zero, false, steppers_pb_motors_MotorY_init_zero, false, steppers_pb_motors_MotorZ_init_zero}
#define steppers_pb_motors_MotorX_init_zero      {false, _steppers_pb_motors_ChangeState_MIN, false, _steppers_pb_motors_MotorCommand_MIN, false, _steppers_pb_motors_MotorName_MIN, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}
#define steppers_pb_motors_MotorY_init_zero      {false, _steppers_pb_motors_ChangeState_MIN, false, _steppers_pb_motors_MotorCommand_MIN, false, _steppers_pb_motors_MotorName_MIN, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}
#define steppers_pb_motors_MotorZ_init_zero      {false, _steppers_pb_motors_ChangeState_MIN, false, _steppers_pb_motors_MotorCommand_MIN, false, _steppers_pb_motors_MotorName_MIN, false, _steppers_pb_motors_MotorDir_MIN, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define steppers_pb_motors_MotorX_chgstate_tag   1
#define steppers_pb_motors_MotorX_cmd_tag        2
#define steppers_pb_motors_MotorX_motorname_tag  3
#define steppers_pb_motors_MotorX_dir_tag        4
#define steppers_pb_motors_MotorX_steps_tag      5
#define steppers_pb_motors_MotorX_rpm_tag        6
#define steppers_pb_motors_MotorY_chgstate_tag   1
#define steppers_pb_motors_MotorY_cmd_tag        2
#define steppers_pb_motors_MotorY_motorname_tag  3
#define steppers_pb_motors_MotorY_dir_tag        4
#define steppers_pb_motors_MotorY_steps_tag      5
#define steppers_pb_motors_MotorY_rpm_tag        6
#define steppers_pb_motors_MotorZ_chgstate_tag   1
#define steppers_pb_motors_MotorZ_cmd_tag        2
#define steppers_pb_motors_MotorZ_motorname_tag  3
#define steppers_pb_motors_MotorZ_dir_tag        4
#define steppers_pb_motors_MotorZ_steps_tag      5
#define steppers_pb_motors_MotorZ_rpm_tag        6
#define steppers_pb_motors_msgversion_tag        1
#define steppers_pb_motors_timestamp_tag         2
#define steppers_pb_motors_manualmove_tag        3
#define steppers_pb_motors_motorx_tag            4
#define steppers_pb_motors_motory_tag            5
#define steppers_pb_motors_motorz_tag            6

/* Struct field encoding specification for nanopb */
#define steppers_pb_motors_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, STRING,   msgversion,        1) \
X(a, CALLBACK, OPTIONAL, STRING,   timestamp,         2) \
X(a, STATIC,   OPTIONAL, BOOL,     manualmove,        3) \
X(a, STATIC,   OPTIONAL, MESSAGE,  motorx,            4) \
X(a, STATIC,   OPTIONAL, MESSAGE,  motory,            5) \
X(a, STATIC,   OPTIONAL, MESSAGE,  motorz,            6)
#define steppers_pb_motors_CALLBACK pb_default_field_callback
#define steppers_pb_motors_DEFAULT (const pb_byte_t*)"\x18\x00\x00"
#define steppers_pb_motors_motorx_MSGTYPE steppers_pb_motors_MotorX
#define steppers_pb_motors_motory_MSGTYPE steppers_pb_motors_MotorY
#define steppers_pb_motors_motorz_MSGTYPE steppers_pb_motors_MotorZ

#define steppers_pb_motors_MotorX_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UENUM,    chgstate,          1) \
X(a, STATIC,   OPTIONAL, UENUM,    cmd,               2) \
X(a, STATIC,   OPTIONAL, UENUM,    motorname,         3) \
X(a, STATIC,   OPTIONAL, UENUM,    dir,               4) \
X(a, STATIC,   OPTIONAL, INT32,    steps,             5) \
X(a, STATIC,   OPTIONAL, INT32,    rpm,               6)
#define steppers_pb_motors_MotorX_CALLBACK NULL
#define steppers_pb_motors_MotorX_DEFAULT (const pb_byte_t*)"\x08\x01\x10\x01\x00"

#define steppers_pb_motors_MotorY_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UENUM,    chgstate,          1) \
X(a, STATIC,   OPTIONAL, UENUM,    cmd,               2) \
X(a, STATIC,   OPTIONAL, UENUM,    motorname,         3) \
X(a, STATIC,   OPTIONAL, UENUM,    dir,               4) \
X(a, STATIC,   OPTIONAL, INT32,    steps,             5) \
X(a, STATIC,   OPTIONAL, INT32,    rpm,               6)
#define steppers_pb_motors_MotorY_CALLBACK NULL
#define steppers_pb_motors_MotorY_DEFAULT (const pb_byte_t*)"\x08\x01\x10\x01\x18\x01\x00"

#define steppers_pb_motors_MotorZ_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, UENUM,    chgstate,          1) \
X(a, STATIC,   OPTIONAL, UENUM,    cmd,               2) \
X(a, STATIC,   OPTIONAL, UENUM,    motorname,         3) \
X(a, STATIC,   OPTIONAL, UENUM,    dir,               4) \
X(a, STATIC,   OPTIONAL, INT32,    steps,             5) \
X(a, STATIC,   OPTIONAL, INT32,    rpm,               6)
#define steppers_pb_motors_MotorZ_CALLBACK NULL
#define steppers_pb_motors_MotorZ_DEFAULT (const pb_byte_t*)"\x08\x01\x10\x01\x18\x02\x00"

extern const pb_msgdesc_t steppers_pb_motors_msg;
extern const pb_msgdesc_t steppers_pb_motors_MotorX_msg;
extern const pb_msgdesc_t steppers_pb_motors_MotorY_msg;
extern const pb_msgdesc_t steppers_pb_motors_MotorZ_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define steppers_pb_motors_fields &steppers_pb_motors_msg
#define steppers_pb_motors_MotorX_fields &steppers_pb_motors_MotorX_msg
#define steppers_pb_motors_MotorY_fields &steppers_pb_motors_MotorY_msg
#define steppers_pb_motors_MotorZ_fields &steppers_pb_motors_MotorZ_msg

/* Maximum encoded size of messages (where known) */
/* steppers_pb_motors_size depends on runtime parameters */
#define steppers_pb_motors_MotorX_size           30
#define steppers_pb_motors_MotorY_size           30
#define steppers_pb_motors_MotorZ_size           30

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
