// bldc_control.h
typedef struct {
    uint8_t hallSensors[3];
    uint16_t steps;
    float velocityRPM;
    float dutyCycle;
    uint8_t motorOff;
} BLDCMotor_t;

void BLDC_Init(BLDCMotor_t* motor);
void BLDC_HallDecoder(BLDCMotor_t* motor);
void BLDC_UpdateSensors(BLDCMotor_t* motor, uint16_t pin);
void BLDC_SetDutyCycle(BLDCMotor_t* motor, float duty);
void BLDC_Stop(BLDCMotor_t* motor);
float BLDC_GetVelocityRPM(BLDCMotor_t* motor);
