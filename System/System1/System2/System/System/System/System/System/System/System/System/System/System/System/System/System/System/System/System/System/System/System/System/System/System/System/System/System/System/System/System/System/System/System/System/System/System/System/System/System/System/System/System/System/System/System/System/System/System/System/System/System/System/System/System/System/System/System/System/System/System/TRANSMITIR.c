void Configure_100MHz_Clock() {
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    
    // 1. Ativa o Cristal Externo (HSE)
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
    RCC_OscInitStruct.HSEState = RCC_HSE_ON;
    
    
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
    RCC_OscInitStruct.PLL.PLLM = 25; 
    RCC_OscInitStruct.PLL.PLLN = 400;
    RCC_OscInitStruct.PLL.PLLP = 4;   
    
    HAL_RCC_OscConfig(&RCC_OscInitStruct);
}
