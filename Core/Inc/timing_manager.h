// timing_manager.h
typedef void (*TimerCallback_t)(void);

typedef struct {
    TimerCallback_t velocityMeasurementCallback;
    TimerCallback_t controlUpdateCallback;
    uint32_t velocityMeasurementPeriod;
    uint32_t controlUpdatePeriod;
} TimingManager_t;

void Timing_Init(TimingManager_t* timing);
void Timing_RegisterVelocityCallback(TimingManager_t* timing, TimerCallback_t callback);
void Timing_RegisterControlCallback(TimingManager_t* timing, TimerCallback_t callback);
void Timing_ProcessTimerInterrupt(TimingManager_t* timing, TIM_HandleTypeDef* htim);
