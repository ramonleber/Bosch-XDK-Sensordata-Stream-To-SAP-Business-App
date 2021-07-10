/*
* Licensee agrees that the example code provided to Licensee has been developed and released by Bosch solely as an example to be used as a potential reference for application development by Licensee. 
* Fitness and suitability of the example code for any use within application developed by Licensee need to be verified by Licensee on its own authority by taking appropriate state of the art actions and measures (e.g. by means of quality assurance measures).
* Licensee shall be responsible for conducting the development of its applications as well as integration of parts of the example code into such applications, taking into account the state of the art of technology and any statutory regulations and provisions applicable for such applications. Compliance with the functional system requirements and testing there of (including validation of information/data security aspects and functional safety) and release shall be solely incumbent upon Licensee. 
* For the avoidance of doubt, Licensee shall be responsible and fully liable for the applications and any distribution of such applications into the market.
* 
* 
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are 
* met:
* 
*     (1) Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer. 
* 
*     (2) Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in
*     the documentation and/or other materials provided with the
*     distribution.  
*     
*     (3)The name of the author may not be used to
*     endorse or promote products derived from this software without
*     specific prior written permission.
* 
*  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR 
*  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
*  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*  DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
*  INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
*  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
*  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
*  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
*  STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
*  IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
*  POSSIBILITY OF SUCH DAMAGE.
*/
/*----------------------------------------------------------------------------*/

/**
 *  @file
 *
 *  @brief Configuration header for the AppController.c file.
 *
 */

/* header definition ******************************************************** */
#ifndef APPCONTROLLER_H_
#define APPCONTROLLER_H_

/* local interface declaration ********************************************** */
#include "XDK_Utils.h"

/* local type and macro definitions */

/* local module global variable declarations */

/* local inline function definitions */

/* WLAN configurations ****************************************************** */

#warning Please configure your WLAN below and remove this line.

/**
 * WLAN_SSID is the WIFI network name where user wants connect the XDK device.
 * Make sure to update the WLAN_PSK constant according to your required WIFI network.
 */
#define WLAN_SSID                           "Your WLAN SSID"

/**
 * WLAN_PSK is the WIFI router WPA/WPA2 password used at the Wifi network connection.
 * Make sure to update the WLAN_PSK constant according to your router password.
 */
#define WLAN_PSK                            "Your WLAN Secret"

/**
 * WLAN_STATIC_IP is a boolean. If "true" then static IP will be assigned and if "false" then DHCP is used.
 */
#define WLAN_STATIC_IP                      false

/**
 * WLAN_IP_ADDR is the WIFI router WPA/WPA2 static IPv4 IP address (unused if WLAN_STATIC_IP is false)
 * Make sure to update the WLAN_IP_ADDR constant according to your required WIFI network,
 * if WLAN_STATIC_IP is "true".
 */
#define WLAN_IP_ADDR                        XDK_NETWORK_IPV4(0, 0, 0, 0)

/**
 * WLAN_GW_ADDR is the WIFI router WPA/WPA2 static IPv4 gateway address (unused if WLAN_STATIC_IP is false)
 * Make sure to update the WLAN_GW_ADDR constant according to your required WIFI network,
 * if WLAN_STATIC_IP is "true".
 */
#define WLAN_GW_ADDR                        XDK_NETWORK_IPV4(0, 0, 0, 0)

/**
 * WLAN_DNS_ADDR is the WIFI router WPA/WPA2 static IPv4 DNS address (unused if WLAN_STATIC_IP is false)
 * Make sure to update the WLAN_DNS_ADDR constant according to your required WIFI network,
 * if WLAN_STATIC_IP is "true".
 */
#define WLAN_DNS_ADDR                       XDK_NETWORK_IPV4(0, 0, 0, 0)

/**
 * WLAN_MASK is the WIFI router WPA/WPA2 static IPv4 mask address (unused if WLAN_STATIC_IP is false)
 * Make sure to update the WLAN_MASK constant according to your required WIFI network,
 * if WLAN_STATIC_IP is "true".
 */
#define WLAN_MASK                           XDK_NETWORK_IPV4(0, 0, 0, 0)

/* Server configurations ***************************************************** */

/**
 * DEST_SERVER_HOST is the host name of the web server we will send HTTP requests to.
 * If you want to test this example without setting up your own server, you can use publicly available services.
 */
#define DEST_SERVER_HOST                "hostname"

/**
 * DEST_SERVER_PORT is the TCP port to which we will send HTTP requests to.
 * The default of 80 should be fine for most applications.
 */
#define DEST_SERVER_PORT                UINT16_C(80)

/**
 * DEST_SERVER_PORT_SECURE is the TCP port to which we will send HTTPS requests to.
 * The default of 443 should be fine for most applications.
 */
#define DEST_SERVER_PORT_SECURE         UINT16_C(443)

/**
 * DEST_GET_PATH is the path relative to the DEST_SERVER_HOST that we will send
 * the HTTP GET request to. Using / will retrieve the index page of the web server
 * which for demo purposes may be enough.
 *
 * Change this value if you use your own web server.
 */
#define DEST_GET_PATH                   "/disposal/Buckets"

/**
 * DEST_POST_PATH is the path relative to the DEST_SERVER_HOST that we will send
 * the HTTP POST request to.
 *
 * Change this value if you use your own web server.
 */
#define DEST_POST_PATH                  "/disposal/CallsForDisposal"

/**
 * POST_REQUEST_CUSTOM_HEADER_0 is a custom header which is sent along with the
 * POST request. It's meant to demonstrate how to use custom header.
 */

#define POST_REQUEST_CUSTOM_HEADER_0    "Content-Type: application/json\r\n"

/**
 * POST_REQUEST_CUSTOM_HEADER_1 is a custom header which is sent along with the
 * POST request. It's meant to demonstrate how to use custom header.
 */
//#define POST_REQUEST_CUSTOM_HEADER_1    "X-Foobar: AnotherCustomHeader\r\n"

/**
 * POST_REQUEST_BODY is sent as body with the HTTP POST request
 */
char POST_REQUEST_BODY [41];
#define POST_REQUEST_BODY_TRUE          "{\n   \"bucket_ID\": 101,\n  \"level\": true\n}"
#define POST_REQUEST_BODY_FALSE         "{\n  \"bucket_ID\": 101,\n  \"level\": false\n}"

/**
 * The time we wait (in milliseconds) between sending HTTP requests.
 */
#define INTER_REQUEST_INTERVAL          UINT32_C(1000)

#warning Configure HTTP_SECURE_ENABLE to 1 to enable the HTTPS based Communication otherwise Communication will happen through HTTP.

/**
 * HTTP_SECURE_ENABLE is Set to Use HTTP With Security
 */
#define HTTP_SECURE_ENABLE              UINT32_C(0)

#if HTTP_SECURE_ENABLE /* Below are SNTP related macros which are only valid for HTTPS */

/**
 * SNTP_SERVER_URL is the SNTP server URL.
 */
#define SNTP_SERVER_URL                 "0.de.pool.ntp.org"

/**
 * SNTP_SERVER_PORT is the SNTP server port number
 */
#define SNTP_SERVER_PORT                UINT16_C(123)

#endif /* #if HTTP_SECURE_ENABLE */

/**
 * The maximum amount of data we download in a single request (in bytes). This number is
 * limited by the platform abstraction layer implementation that ships with the
 * XDK. The maximum value that will work here is 512 bytes.
 */
#define REQUEST_MAX_DOWNLOAD_SIZE       UINT32_C(512)

/**
 * @brief Gives control to the Application controller.
 *
 * @param[in] cmdProcessorHandle
 * Handle of the main command processor which shall be used based on the application needs
 *
 * @param[in] param2
 * Unused
 */
void AppController_Init(void * cmdProcessorHandle, uint32_t param2);

#endif /* APPCONTROLLER_H_ */
