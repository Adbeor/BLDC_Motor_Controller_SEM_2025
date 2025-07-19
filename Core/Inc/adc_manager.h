// adc_manager.h
typedef struct {
    uint16_t rawSample;
    float filteredValue;
    float sum;
    uint8_t sampleCount;
    uint16_t averageValue;
} ADCManager_t;

void ADC_Manager_Init(ADCManager_t* adc);
void ADC_Manager_ProcessSample(ADCManager_t* adc, uint16_t sample);
float ADC_Manager_GetVelocityReference(ADCManager_t* adc);
uint8_t ADC_Manager_IsReady(ADCManager_t* adc);
