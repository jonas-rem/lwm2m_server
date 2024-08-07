/*
 * Copyright (c) 2018 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __CA_CERTIFICATE_H__
#define __CA_CERTIFICATE_H__

#define CA_CERTIFICATE_TAG 0

/* By default only certificates in DER format are supported. If you want to use
 * certificate in PEM format, you can enable support for it in Kconfig.
 */

/* ISRG Root X1 for Let's Encrypt
 */
static const unsigned char *ca_certificates[] = {
#include "isrgrootx1.pem"
};


#endif /* __CA_CERTIFICATE_H__ */
