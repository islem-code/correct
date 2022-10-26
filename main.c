/**
  ******************************************************************************
  * @file    main.c
  * @author  Islem Amdouni
  * @brief   support multiple platforms 
  * @version V9.10.1
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL
/* Function definition min*/
#define MIN

#define OTHERS
/* Function definition max*/
#define MAX



/* Private function prototypes -----------------------------------------------*/
    static int min(int var1, int var2);
   static int max(int var1, int var2);


/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  min,max
  * @retval None
  */
int main(void)
{
#ifdef MIN
  int ResultMin=min(10,2);/*MIN*/
#endif
#ifdef MAX
  int ResultMax=max(100,20);/*MAX*/
#endif


  while (1)
  {
   
  }
}
/* Function definition min*/
#ifdef MIN
  static int min(int var1, int var2)
  {
    return (((var1) < (var2)) ? (var1) : (var2));
  }
#endif
/* Function definition max*/
#ifdef MAX
  static int max(int var1, int var2)
  {
    return  (((var1) > (var2)) ? (var1) : (var2));
  }
#endif

/**************************************END OF FILE**************************************/
