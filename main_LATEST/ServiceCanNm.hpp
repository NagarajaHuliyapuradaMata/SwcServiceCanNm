#pragma once
/******************************************************************************/
/* File   : ServiceCanNm.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceCanNm.hpp"
#include "CfgServiceCanNm.hpp"
#include "ServiceCanNm_core.hpp"
#include "infServiceCanNm_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceCanNm:
      INTERFACES_EXPORTED_CANNM
      public abstract_module
   ,  public class_ServiceCanNm_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceCanNm_Type* lptrConst = (ConstServiceCanNm_Type*)NULL_PTR;
      infServicePduRClient_Up infServicePduRClient_ServiceCanNm;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, CANNM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, CANNM_CONST,       CANNM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   CANNM_CONFIG_DATA, CANNM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, CANNM_CODE) DeInitFunction (void);
      FUNC(void, CANNM_CODE) MainFunction   (void);
      CANNM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceCanNm, CANNM_VAR) ServiceCanNm;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

