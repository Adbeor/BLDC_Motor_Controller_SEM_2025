// can_interface.h
typedef struct {
    uint8_t flagRegister;
    uint8_t powerState;
    uint8_t cruiseMode;
    float cruiseFactors[4];
    uint8_t txData[8];
    uint8_t rxData[8];
} CANInterface_t;

void CAN_Interface_Init(CANInterface_t* canIf);
void CAN_Interface_ProcessRxMessage(CANInterface_t* canIf, uint8_t* rxData);
void CAN_Interface_SendStatus(CANInterface_t* canIf, float velocity, uint8_t power);
void CAN_Interface_UpdateFlags(CANInterface_t* canIf);
uint8_t CAN_Interface_GetPowerState(CANInterface_t* canIf);
uint8_t CAN_Interface_GetCruiseMode(CANInterface_t* canIf);
