// system_config.h
// PID Parameters
#define SYSTEM_PID_KP           0.04f
#define SYSTEM_PID_KI           0.1f
#define SYSTEM_PID_KD           0.0f
#define SYSTEM_PID_TAU          0.02f
#define SYSTEM_PID_LIM_MIN      0.0f
#define SYSTEM_PID_LIM_MAX      255.0f
#define SYSTEM_SAMPLE_TIME      0.01f

// Motor Parameters
#define MOTOR_STEPS_PER_REV     138
#define MOTOR_RPM_TO_KMH        10.44f
#define MOTOR_MIN_SPEED_RPM     10

// ADC Parameters
#define ADC_CONVERSION_FACTOR   8.192f
#define ADC_AVERAGE_SAMPLES     1

// Cruise Control
#define CRUISE_FACTOR_35KMH     7.29f
#define CRUISE_FACTOR_30KMH     8.5f
#define CRUISE_FACTOR_25KMH     10.2f

// Timing
#define VELOCITY_MEASUREMENT_PERIOD_MS  500
#define CONTROL_UPDATE_PERIOD_MS        10
