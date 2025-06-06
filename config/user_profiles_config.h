/**
 ****************************************************************************************
 *
 * @file user_profiles_config.h
 *
 * @brief Configuration file for the profiles used in the application.
 *
 * Copyright (C) 2015-2023 Renesas Electronics Corporation and/or its
 *affiliates. All rights reserved. Confidential Information.
 *
 * This software ("Software") is supplied by Renesas Electronics Corporation
 *and/or its affiliates ("Renesas"). Renesas grants you a personal,
 *non-exclusive, non-transferable, revocable, non-sub-licensable right and
 *license to use the Software, solely if used in or together with Renesas
 *products. You may make copies of this Software, provided this copyright notice
 *and disclaimer ("Notice") is included in all such copies. Renesas reserves the
 *right to change or discontinue the Software at any time without notice.
 *
 * THE SOFTWARE IS PROVIDED "AS IS". RENESAS DISCLAIMS ALL WARRANTIES OF ANY
 *KIND, WHETHER EXPRESS, IMPLIED, OR STATUTORY, INCLUDING BUT NOT LIMITED TO THE
 *WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *NON-INFRINGEMENT. TO THE MAXIMUM EXTENT PERMITTED UNDER LAW, IN NO EVENT SHALL
 *RENESAS BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR
 *CONSEQUENTIAL DAMAGES ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE,
 *EVEN IF RENESAS HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES. USE OF
 *THIS SOFTWARE MAY BE SUBJECT TO TERMS AND CONDITIONS CONTAINED IN AN
 *ADDITIONAL AGREEMENT BETWEEN YOU AND RENESAS. IN CASE OF CONFLICT BETWEEN THE
 *TERMS OF THIS NOTICE AND ANY SUCH ADDITIONAL LICENSE AGREEMENT, THE TERMS OF
 *THE AGREEMENT SHALL TAKE PRECEDENCE. BY CONTINUING TO USE THIS SOFTWARE, YOU
 *AGREE TO THE TERMS OF THIS NOTICE.IF YOU DO NOT AGREE TO THESE TERMS, YOU ARE
 *NOT PERMITTED TO USE THIS SOFTWARE.
 *
 ****************************************************************************************
 */

#ifndef _USER_PROFILES_CONFIG_H_
#define _USER_PROFILES_CONFIG_H_

/**
 ****************************************************************************************
 * @defgroup APP_CONFIG
 * @ingroup APP
 * @brief  Application configuration file
 *
 * This file contains the configuration of the profiles used by the application.
 *
 * @{
 ****************************************************************************************
 */

/*
 * DEFINITIONS
 ****************************************************************************************
 */

/***************************************************************************************/
/* Used BLE profiles (used by "rwprf_config.h"). */
/***************************************************************************************/

#define CFG_PRF_CUST1

/*
 * PROFILE CONFIGURATION
 ****************************************************************************************
 */

/************************************************************
 * CUSTS1 security requirements (@see app_prf_srv_perm)
 *
 * - SRV_PERM_DISABLE       Disable access
 * - SRV_PERM_ENABLE        Enable access
 * - SRV_PERM_UNAUTH        Access Requires Unauthenticated link
 * - SRV_PERM_AUTH          Access Requires Authenticated link
 * - SRV_PERM_SECURE        Access Requires Authenticated Secure Connection
 *Pairing
 *
 * Select only one option.
 ************************************************************
 */
#define APP_CUSTS1_SEC_REQ SRV_PERM_SECURE

/// @} APP_CONFIG

#endif // _USER_PROFILES_CONFIG_H_
