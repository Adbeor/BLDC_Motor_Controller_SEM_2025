// speed_control.h


typedef struct {
    PIDController pid;
    BLDCMotor_t* motor;
    float desiredVelocity;
    float controlOutput;
    uint8_t systemEnabled;
} SpeedController_t;

void SpeedControl_Init(SpeedController_t* controller, BLDCMotor_t* motor);
void SpeedControl_SetReference(SpeedController_t* controller, float reference);
void SpeedControl_Update(SpeedController_t* controller);
void SpeedControl_Enable(SpeedController_t* controller, uint8_t enable);
void SpeedControl_Reset(SpeedController_t* controller);
