/*  ----------------------------------------------------------------------------
            ATMEL Microcontroller Software Support  -  ROUSSET  -
    ----------------------------------------------------------------------------
    DISCLAIMER:  THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
    IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
    DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
    LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
    LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
    NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
    EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
    ----------------------------------------------------------------------------
    File Name           : lib_AT91SAM7.h
    Object              : AT91SAM7 inlined functions
    Generated           : AT91 SW Application Group  01/16/2006 (16:36:38)
   
    CVS Reference       : /lib_MC_SAM7X.h/1.1/Thu Mar 25 15:19:14 2004//
    CVS Reference       : /lib_pdc.h/1.2/Tue Jul  2 13:29:40 2002//
    CVS Reference       : /lib_des3_6150a.h/1.1/Mon Jan 17 09:19:19 2005//
    CVS Reference       : /lib_dbgu.h/1.1/Thu Aug 25 12:56:22 2005//
    CVS Reference       : /lib_aes_6149a.h/1.1/Mon Jan 17 07:43:09 2005//
    CVS Reference       : /lib_VREG_6085B.h/1.1/Tue Feb  1 16:20:47 2005//
    CVS Reference       : /lib_ssc.h/1.4/Fri Jan 31 12:19:20 2003//
    CVS Reference       : /lib_spi2.h/1.2/Tue Aug 23 15:37:28 2005//
    CVS Reference       : /lib_PWM_SAM.h/1.3/Thu Jan 22 10:10:50 2004//
    CVS Reference       : /lib_tc_1753b.h/1.1/Fri Jan 31 12:20:02 2003//
    CVS Reference       : /lib_pitc_6079A.h/1.2/Tue Nov  9 14:43:56 2004//
    CVS Reference       : /lib_adc.h/1.6/Fri Oct 17 09:12:38 2003//
    CVS Reference       : /lib_pmc_SAM7X.h/1.5/Fri Nov  4 09:41:32 2005//
    CVS Reference       : /lib_rstc_6098A.h/1.1/Wed Oct  6 10:39:20 2004//
    CVS Reference       : /lib_rttc_6081A.h/1.1/Wed Oct  6 10:39:38 2004//
    CVS Reference       : /lib_pio.h/1.3/Fri Jan 31 12:18:56 2003//
    CVS Reference       : /lib_twi.h/1.3/Mon Jul 19 14:27:58 2004//
    CVS Reference       : /lib_wdtc_6080A.h/1.1/Wed Oct  6 10:38:30 2004//
    CVS Reference       : /lib_usart.h/1.5/Thu Nov 21 16:01:54 2002//
    CVS Reference       : /lib_udp.h/1.5/Tue Aug 30 12:13:47 2005//
    CVS Reference       : /lib_aic_6075b.h/1.2/Thu Jul  7 07:48:22 2005//
    CVS Reference       : /lib_can_AT91.h/1.5/Tue Aug 23 15:37:07 2005//
    ----------------------------------------------------------------------------
*/

#ifndef lib_AT91SAM7_TWI_H
#define lib_AT91SAM7_TWI_H

/* *****************************************************************************
                SOFTWARE API FOR TWI
   ***************************************************************************** */
/*----------------------------------------------------------------------------*/
/*! \fn    __inline void AT91F_TWI_EnableInterrupt( AT91PS_TWI pTWI, \
 * 					U32 flag)
 * \brief Enable TWI IT
 * \param pTWI pointer to a TWI controller
 * \param flag interrupt to be enabled
 */
/*----------------------------------------------------------------------------*/
__inline void AT91F_TWI_EnableInterrupt(
	AT91PS_TWI pTWI, /* \arg pointer to a TWI controller */
	U32 flag);   /* \arg interrupt to be enabled */


/*----------------------------------------------------------------------------*/
/*! \fn    __inline void AT91F_TWI_DisableInterrupt( AT91PS_TWI pTWI, \
 * 					U32 flag)
 * \brief Disable TWI IT
 * \param pTWI pointer to a TWI controller
 * \param flag interrupt to be disabled
 */
/*----------------------------------------------------------------------------*/
__inline void AT91F_TWI_DisableInterrupt(
	AT91PS_TWI pTWI, /* \arg pointer to a TWI controller */
	U32 flag);   /* \arg interrupt to be disabled */


/*----------------------------------------------------------------------------*/
/*! \fn    __inline void AT91F_TWI_Configure( AT91PS_TWI pTWI )
 * \brief Configure TWI in master mode
 * \param pTWI pointer to a TWI controller
 */
/*----------------------------------------------------------------------------*/
__inline void AT91F_TWI_Configure( AT91PS_TWI pTWI );   /* \arg pointer to a TWI controller */


/*----------------------------------------------------------------------------*/
/*! \fn    __inline U32 AT91F_TWI_GetInterruptMaskStatus( AT91PS_TWI pTWI )
 * \brief Return TWI Interrupt Mask Status
 * \param pTWI pointer to a TWI controller
 * \return interrupt mask register
 */
/*----------------------------------------------------------------------------*/
__inline U32 AT91F_TWI_GetInterruptMaskStatus( /* \return TWI Interrupt Mask Status */
        AT91PS_TWI pTWI); /* \arg  pointer to a TWI controller */


/*----------------------------------------------------------------------------*/
/*! \fn    __inline U32 AT91F_TWI_IsInterruptMasked( AT91PS_TWI pTWI, \
 * 					U32 flag)
 * \brief Test if TWI Interrupt is Masked
 * \param pTWI pointer to a TWI controller
 * \param flag flag to be tested
 * \return masked interrupt mask register value
 */
/*----------------------------------------------------------------------------*/
__inline U32 AT91F_TWI_IsInterruptMasked(
        AT91PS_TWI pTwi,   /* \arg  pointer to a TWI controller */
        U32 flag); /* \arg  flag to be tested */


/*----------------------------------------------------------------------------*/
/*! \fn    __inline void AT91F_TWI_CfgPMC( AT91PS_PMC pPMC )
 * \brief Enable Peripheral clock in PMC for  TWI
 * \param pPMC pointer to PMC controller
 */
/*----------------------------------------------------------------------------*/
__inline void AT91F_TWI_CfgPMC( AT91PS_PMC pPMC );


/*----------------------------------------------------------------------------*/
/*! \fn    __inline void AT91F_TWI_CfgPIO( AT91PS_PIO pPIOA, AT91PS_PIO pPIOB )
 * \brief Configure PIO controllers to drive TWI signals
 * \param pPIOA pointer to PIOA controller
 * \param pPIOB pointer to PIOB controller
 */
/*----------------------------------------------------------------------------*/
__inline void AT91F_TWI_CfgPIO( AT91PS_PIO pPIOA, AT91PS_PIO pPIOB );


/*----------------------------------------------------------------------------*/
/*! \fn    __inline AT91PS_TWI AT91F_TWI_GetPeripheralAddress( U8 u8Controller )
 * \brief Returns base TWI peripheral controller address
 * \param u8Controller TWI controller index
 * \return pointer to TWI controller
 */
/*----------------------------------------------------------------------------*/
__inline AT91PS_TWI AT91F_TWI_GetPeripheralAddress( U8 u8Controller );


#endif /* lib_AT91SAM7_TWI_H */
